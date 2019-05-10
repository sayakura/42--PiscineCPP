#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <deque>

template<typename T>
class MutantStack: public std::stack<T> {
public:
    typedef typename std::deque<T>::iterator iterator;
	MutantStack(void) {}
	MutantStack(MutantStack const & m) {*this = m;}
	~MutantStack(void) {}
	iterator begin(void) {return std::begin(this->c);}
	iterator end(void) {return std::end(this->c);}
};

#endif