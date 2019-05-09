#include <iostream>
void    caster(std::string str, bool isNeg)
{
    char    c;
    int     i;
    float   f;
    double  d;
    
}

int     main(int ac, char **av)
{
    if (ac != 2)
    {
       std::cout << "take one argument" << std::endl;
       ::exit(EXIT_SUCCESS);
    }
    std::string str(av[1]);


    bool    neg;
    if (str == "+inf" || str == "+inff" || str == "inf"
    || str == "inff" || str == "-inf" || str == "-inff"
    || str == "nan" || str == "nanf")
        // do something extra 
    if (str[0] == '-')
    {
        neg = true;
        str = str.substr(1, str.size());
    }
    caster(str, neg);
    return (0);
}