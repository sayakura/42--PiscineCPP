#include "mutantstack.hpp"
#include "Token.hpp"
#include <list>
#include <iostream>
#include <sstream>
#include<iomanip>

void                 delete_token(Token *t)
{
    delete t;
}

void                 print_token(std::list<Token*>& tokens)
{
    std::stringstream ss;
    int                 type;
    int                 val;

    for (std::list<Token *>::iterator it = tokens.begin(); 
        it != tokens.end(); ++it)
    {
        ss << ' ';
        type = (*it)->getType();
        val = (*it)->getVal();
        if (type == TOKEN_OP)
        {
            ss << "Op";
            ss << '(' << static_cast<char>(val) << ')';
        }
        else if (type == TOKEN_NUM)
        {
            ss << "Num";
            ss << '(' << val << ')';
        }
        else if (type == TOKEN_PAROPEN)
        {
            ss << "ParOpen";
            continue ;
        }
        else if (type == TOKEN_PARCLOSE)
        {
            ss << "ParClose";
            continue ;
        }
        else
            throw Token::InvalidTokenExcepction();
    }
    std::cout << ss.str() << std::endl;
}

int     prec(char c) 
{ 
    if(c == '*' || c == '/') 
        return 2; 
    else if(c == '+' || c == '-') 
        return 1; 
    else
        return -1; 
} 

std::list<Token *>&  infixToPostfix(std::list<Token *>& tokens) 
{ 
    
    std::list<Token *>::iterator it = tokens.begin();
    static std::list<Token *>   tokens_r;
    MutantStack<Token *>        st;
    Token                       *ptr;
    int                         type;

    for (char ch = (*it)->getVal(); it != tokens.end(); ++it) 
    {
        ch = (*it)->getVal();
        type = (*it)->getType();
        if (type == TOKEN_NUM)
            tokens_r.push_back(*it);
        else if (type == TOKEN_PAROPEN)
            st.push(*it);
        else if (type == TOKEN_PARCLOSE)
        { 
            while (st.size() != 0 &&
                    st.top()->getType() != TOKEN_PAROPEN) 
            { 
                ptr = st.top(); 
                st.pop(); 
                tokens_r.push_back(ptr);
            } 
            if(st.top()->getType() == TOKEN_PAROPEN) 
                st.pop(); 
        }  
        else { 
            while (st.size() != 0 
                && prec(ch) <= prec(st.top()->getVal())) 
            { 
                ptr = st.top(); 
                st.pop(); 
                tokens_r.push_back(ptr);
            } 
            st.push(*it); 
        }
    } 
    while (st.size() != 0) 
    { 
        ptr = st.top(); 
        st.pop(); 
        tokens_r.push_back(ptr);
    } 
    return tokens_r;
} 

std::list<Token*>&    parser(char *expr)
{
    int                             type, val;
    static std::list<Token*>        tokens;
    unsigned                        len = strlen(expr);
    
    for (unsigned i = 0; i <len;)
    {
        if (isspace(expr[i]))
        {
            ++i;
            continue ;
        }
        try {
            type = Token::getType(expr[i]);
            if (type == TOKEN_NUM)
            {
                val = atoi(expr + i);
                tokens.push_back(new Token(val, TOKEN_NUM));
                while (isdigit(expr[i]) && i < len)
                    i++;
                continue ;
            }
            else
                tokens.push_back(new Token(static_cast<int>(expr[i++]), type));
        } catch (Token::InvalidTokenExcepction &e) {
            std::cerr << e.what() << std::endl;
            ::exit(EXIT_FAILURE);
        }
    }
    return tokens;
}

int        do_op(char op, MutantStack<Token *> &st)
{
    int     a;
    int     b;
    int     ret;
    if (st.size())
    {
        a = (st.top())->getVal();
        delete st.top();
        st.pop();
    }
    else    
        throw "Stack Error";
    if (st.size())
    {
        b = (st.top())->getVal();
        delete st.top();
        st.pop();
    }
    else
         throw "Stack Error";
    if (op == '+')
    {
        ret = b + a;
        std::cout << " " << std::setw(14) << std::left << "OP Add";
    }
    else if (op == '-')
    {
        ret = b - a;
        std::cout << " " << std::setw(14) << std::left << "OP Substract";
    }
    else if (op == '*')
    {
        ret = b * a;
        std::cout << " " << std::setw(14) << std::left << "OP Multiply";
    }
    else if (op == '/')
    {
        if (a == 0)
            throw " Division By Zero";
        ret = b / a;
        std::cout << " "  << std::setw(14) << std::left << "OP Divide";
    }
    else
        throw " Wrong Operator";
    return  ret;
}

void    print_stack(MutantStack<Token *> &st)
{
    std::cout << " ST";
    MutantStack<Token *>::iterator  it = st.end();
    --it;
    for (;it != st.begin(); --it)
        std::cout << " " << (*it)->getVal();
    std::cout << " " << (*it)->getVal();
    std::cout << "]";
}

void    rpn_cal(std::list<Token *>& tokens_r)
{
    std::list<Token *>::iterator it = tokens_r.begin();
    MutantStack<Token *>         st;
    std::stringstream           ss;
    int                         type,   ret;
    int                         cur;

    for (;it != tokens_r.end(); ++it)
    {
        cur = (*it)->getVal();
        type = (*it)->getType();

        std::cout << "I  ";
        if (type == TOKEN_OP)
        {
            ss << "Op(" << static_cast<char>(cur) << ")";
            std::cout << std::setw(8) << std::left << ss.str() << "|";
            ret = do_op(cur, st);
            st.push(new Token(ret, TOKEN_NUM));
        }
        else if (type == TOKEN_NUM)
        {    
            ss << "Num(" << cur << ")";
            std::cout << std::setw(8) << std::left << ss.str() << "|";
            std::cout << " " << std::setw(14) << std::left << "OP Push";
            st.push(new Token(cur, TOKEN_NUM));
        }
        ss.str("");
        std::cout << "|";
        print_stack(st);
        std::cout << std::endl;
    }
    int ans = (st.top())->getVal();
    delete st.top();
    st.pop();
    std::cout << "Result : " << ans << std::endl;
}

int     main(int ac, char **av)
{
    std::list<Token*>   tokens;
    std::list<Token*>   tokens_r;
    if (ac == 2)
    {
        tokens = parser(av[1]);
        try {
            std::cout << "Tokens:";
            print_token(tokens);
            tokens_r = infixToPostfix(tokens);
            std::cout << "Postfix:";
            print_token(tokens_r);
            rpn_cal(tokens_r);
        } catch(Token::InvalidTokenExcepction &e) {
            std::for_each(tokens.begin(), tokens.end(), delete_token);
            std::cerr << e.what() << std::endl;
            ::exit(EXIT_FAILURE);
        } catch(char const*str)
        {
            std::for_each(tokens.begin(), tokens.end(), delete_token);
            std::cerr << str << std::endl;
            ::exit(EXIT_FAILURE);
        }
        std::for_each(tokens.begin(), tokens.end(), delete_token);
    } else {
        std::cout << "Expecting one argument.\n";
    }
    return (0);
}