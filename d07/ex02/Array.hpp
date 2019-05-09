#ifndef ARRAT_TPP
#define ARRAT_TPP

#include <stddef.h>
#include <stdexcept>

template <typename T>
class Array
{
    private:
        unsigned  _len;
        T       *_arr;
    public:
        Array();
        ~Array();
        Array(unsigned);
        Array(Array const&);
        Array &operator=(Array const&);
        T& operator[](const unsigned i) const;
        unsigned size() const;
        class ArrayIndexOutOfBoundsException: public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
};

template <typename T>
Array<T>::Array() : _len(7), _arr(new T[7]) { }

template <typename T>
Array<T>::~Array(){
    delete[] _arr;}

template <typename T>
Array<T>::Array(unsigned len) : _len(len), _arr(new T[_len]) { } 

template <typename T>
Array<T>::Array(Array const& rdi) : _len(rdi.size()), _arr(new T[rdi.size()]){
    *this = rdi;}

template <typename T>
Array<T>& Array<T>::operator=(Array const& rdi){
    _arr = new T[rdi.size()];
    _len = rdi.size();
    for (unsigned i = 0; i < rdi.size(); i++)
       _arr[i] = rdi[i];
    return *this;
}

template <typename T>
T& Array<T>::operator[](const unsigned i) const {
    if (i >= _len)
        throw Array<T>::ArrayIndexOutOfBoundsException();
    else
        return _arr[i];
}

template <typename T>
unsigned Array<T>::size() const{
    return _len;}

template<typename T>
const char* Array<T>::ArrayIndexOutOfBoundsException::what() const throw() {
		return ("Array index is out of bound!");}

#endif