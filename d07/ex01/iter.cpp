#include <stddef.h>
#include <iostream>
template <typename T, typename F>
void iter(T *arr, size_t len, F f)
{
    for (size_t i = 0; i < len; i++)
        f(arr[i]);
}

template <typename T>
void display(T &rdi)
{
    std::cout << rdi << std::endl;
}

int main(void)
{
    int int_arr[] = {1, 2, 3, 4, 5};
    iter<int>(int_arr, sizeof(int_arr) / sizeof(int), display<int>);
    float float_arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter<float>(float_arr, sizeof(float_arr) / sizeof(float), display<float>);
    double double_arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter<double>(double_arr, sizeof(double_arr) / sizeof(double), display<double>);
    std::string str_arr[] = {"hello", "bro", "what"};
    iter<std::string>(str_arr, sizeof(str_arr) / sizeof(std::string), display<std::string>);
    return (0);
}