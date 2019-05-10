#ifndef TOKEN_HPP
# define TOKEN_HPP
# include <stdexcept>

enum E_TOKEN_TYPE
{
    TOKEN_OP,
    TOKEN_NUM,
    TOKEN_PAROPEN,
    TOKEN_PARCLOSE
};

class Token {
        char    _val;
		int     _type;
		Token();
	public:
        Token(char, int);
		Token(const Token &);
		~Token();
		Token & operator=(const Token &);
		char getVal() const;
		char getType() const;
        static E_TOKEN_TYPE getType(char);
        class InvalidTokenExcepction : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};


#endif