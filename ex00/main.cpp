#include "./ScalarConverter.hpp"


int main(int ac, char **av)
{
    if(ac != 2)
        return 0;
    try
    {
        ft_parser(av[1]);
        ScalarConverter::convert(av[1]);
    }
    catch(...)
    {
        std::cerr << "Error: " << std::endl;
    }
}