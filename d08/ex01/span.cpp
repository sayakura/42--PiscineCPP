#include "span.hpp"

Span::Span(int n) : _n(n) {} ;
Span::~Span() {} ;

Span::Span(Span const& rdi) {
    _set = rdi._set;}

void Span::addNumber(int rdi) { 
    if (_set.size() + 1 > _n)
        throw TooMuchElementException();
    else
        _set.insert(rdi);
}

int  Span::shortestSpan() {
    if (_set.size() <= 1)
        throw NoElementException();
    int _min = INT_MAX;
    std::multiset<int>::iterator end = _set.end();
    std::multiset<int>::iterator it = _set.begin();
    int _curr;
    --end;

    while (it != end)
    {
        _curr = *it;
        ++it;
        if ((*it - _curr) < _min)
            _min = *it - _curr;
    }
    return _min;
}

int  Span::longestSpan() {
    if (_set.size() <= 1)
        throw NoElementException();
    std::multiset<int>::iterator end = _set.end();
    --end;
    return *end - *_set.begin();
}

const char* Span::TooMuchElementException::what() const throw() {
    return "The span is full";}
const char* Span::NoElementException::what() const throw() {
    return "Not enought elements in the span";}