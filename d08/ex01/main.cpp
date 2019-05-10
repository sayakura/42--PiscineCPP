#include "span.hpp"

int main(void)
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try
    {
        sp.addNumber(12);
    }
    catch(const Span::TooMuchElementException& e)
    {
        std::cerr << e.what() << '\n';
    }

    Span sp2 = Span(1);
    try
    {
        std::cout << sp2.shortestSpan() << std::endl;
    }
    catch(const Span::NoElementException& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const Span::NoElementException& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);

}