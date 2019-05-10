#include "mutantstack.hpp"
#include "Token.hpp"
#include <list>
#include <iostream>
#include <sstream>

int     prec(char c) 
{ 
    if(c == '*' || c == '/') 
        return 2; 
    else if(c == '+' || c == '-') 
        return 1; 
    else
        return -1; 
} 

void    infixToPostfix(std::list<Token *> tokens) 
{ 
    Mutantstack<char> st; 
    st.push('N'); 
    int l = tokens.size();

    std::string ns; 
    for(int i = 0; i < l; i++) 
    { 
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
        ns+=s[i]; 
  
        else if(s[i] == '(') 
          
        st.push('('); 
          
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
               ns += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        }  
          
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    } 
    cout << ns << endl; 
} 

void                 delete_token(Token *t)
{
    delete t;
}

void                 print_token(std::list<Token*>& tokens)
{
    std::stringstream ss;
    ss << "Tokens:";
    for (std::list<Token *>::iterator it = tokens.begin(); 
        it != tokens.end(); ++it)
    {
        ss << ' ';
        if ((*it)->getType() == TOKEN_OP)
            ss << "Op";
        else if ((*it)->getType() == TOKEN_NUM)
            ss << "Num";
        else if ((*it)->getType() == TOKEN_PAROPEN)
        {
            ss << "ParOpen";
            continue ;
        }
        else if ((*it)->getType() == TOKEN_PARCLOSE)
        {
            ss << "ParClose";
            continue ;
        }
        else
            throw Token::InvalidTokenExcepction();
        ss << '(' << (*it)->getVal() << ')';
    }
    std::cout << ss.str() << std::endl;
}

std::list<Token*>&    parser(std::string expr)
{
    int                             type;
    static std::list<Token*>        tokens;
    
    for (unsigned i = 0; i < expr.size(); ++i)
    {
        if (isspace(expr[i]))
            continue ;
        try {
            type = Token::getType(expr[i]);
            tokens.push_back(new Token(expr[i], type));
        } catch (Token::InvalidTokenExcepction &e) {
            std::cerr << e.what() << std::endl;
            ::exit(EXIT_FAILURE);
        }
    }
    return tokens;
}

int     main(int ac, char **av)
{
    std::list<Token*> tokens;

    if (ac == 2)
    {
        std::string expr(av[1]);
        tokens = parser(expr);
        try {
            print_token(tokens);
        } catch(Token::InvalidTokenExcepction &e) {
            std::cerr << e.what() << std::endl;
            ::exit(EXIT_FAILURE);
        }
        std::for_each(tokens.begin(), tokens.end(), delete_token);
    } else {
        std::cout << "Expecting one argument.\n";
    }
    return (0);
}