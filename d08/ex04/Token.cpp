#include "Token.hpp"

Token::Token(Token const& rdi) {
    *this = rdi;}

Token::~Token() {};

Token & Token::operator=(Token const& rdi) {
    _val = rdi._val;
    return *this;
}

Token::Token(int val, int token_type) : _val(val), _type(token_type)
    { };

int Token::getVal() const {
    return _val;}

int Token::getType() const {
    return _type;}

E_TOKEN_TYPE Token::getType(int ch) {
    if (ch >= '0' && ch <= '9')
        return TOKEN_NUM;
    else if (ch == '+' || ch == '-' || ch == '/'
        || ch == '*')
        return TOKEN_OP;
    else if (ch == '(')
        return TOKEN_PAROPEN;
    else if (ch == ')')
        return TOKEN_PARCLOSE;
    else
        throw InvalidTokenExcepction();
}

const char* Token::InvalidTokenExcepction::what() const throw() {
    return "Error in parsing token.";}