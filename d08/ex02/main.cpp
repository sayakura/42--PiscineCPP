
#include "mutantstack.hpp"
# include <iostream>
# include <stack>
# include <iterator>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		it++; }
    std::cout << "New Stack!" << std::endl;
	MutantStack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    MutantStack<int>::iterator it2 = st.begin();
	MutantStack<int>::iterator ite2 = st.end();
    ++it;
	--it;
	while (it2 != ite2) {
		std::cout << *it2 << std::endl;
		it2++; }
	return 0;
}