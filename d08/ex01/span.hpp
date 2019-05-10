#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <stdexcept>
#include <set>

class Span
{
    std::multiset<int> _set;
    unsigned            _n;
    public:
        Span(int);
        ~Span();
        Span(Span const& rdi);
        void addNumber(int);
        int shortestSpan();
        int longestSpan();
        class TooMuchElementException : std::exception {
            public:
                virtual const char *what() const throw();
        };
        class NoElementException : std::exception {
            public:
                virtual const char *what() const throw();
        };
};
#endif