#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <iterator> 
  
const char *ElementNotFoundException::what() const throw() {
    return "Element not found";}


int     main(void)
{
   
    std::list<int> list;
    for (int i = 0; i < 10; i++)
        list.push_back(i);
    for (std::list<int>::iterator iter = list.begin(); iter != list.end(); ++iter)
        std::cout << *iter << "\t";
    std::cout << std::endl;
    try
    {
        std::cout << *(easyfind(list, 7)) << std::endl;
        std::cout << *(easyfind(list, 1)) << std::endl;
        std::cout << *(easyfind(list, 2)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        std::cout << *(easyfind(list, 11)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::vector<int> v1;
    for (int i = 0; i < 10; i++)
        v1.push_back(i);
    for (std::vector<int>::iterator iter = v1.begin(); iter != v1.end(); ++iter)
        std::cout << *iter << "\t";
    std::cout << std::endl;
   try
    {
        std::cout << *(easyfind(list, 7)) << std::endl;
        std::cout << *(easyfind(list, 1)) << std::endl;
        std::cout << *(easyfind(list, 2)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        std::cout << *(easyfind(v1, 11)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl; 
    return (0);
}