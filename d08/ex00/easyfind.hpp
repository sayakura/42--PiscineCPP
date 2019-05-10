#ifndef EASYFIND_CPP
#define EASYFIND_CPP

#include <stdexcept>
#include <algorithm>

class ElementNotFoundException : public std::exception {
    public:
        virtual const char* what() const throw();
};

template <typename T>
typename T::iterator easyfind(T &rdi, int rsi)
{
    typename T::iterator iter = find(rdi.begin(), rdi.end(), rsi);
    if (iter == rdi.end())
        throw ElementNotFoundException();
    return iter;
}

#endif