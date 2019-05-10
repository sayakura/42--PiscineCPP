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
        int     _val;
		int     _type;
		Token();
	public:
        Token(int, int);
		Token(const Token &);
		~Token();
		Token & operator=(const Token &);
		int getVal() const;
		int getType() const;
        static E_TOKEN_TYPE getType(int);
        class InvalidTokenExcepction : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};


#endif