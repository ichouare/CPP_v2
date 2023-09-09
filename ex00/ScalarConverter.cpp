#include "./ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& original)
{
    *this = original;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& original)
{
    (void) original;
    return *this;
}

void ft_parser( const  char *str)
{
    size_t  i  = 0;
    int   y = 0;
    int  f_num = 0;
    int  p_num = 0;
    std::string target = str;

    if(target == "nan" || target == "+inf" || target == "-inf")
              return;
    if(std::isdigit(str[strlen(str) - 1]) == 0 && str[strlen(str) - 1] != 'f')
    {
        puts("here");
        throw -1;
    }
    if(strlen(str) == 0 || strlen(str) >= 1)
    {
        while(i < strlen(str))
        {
            if (std::isdigit(str[i]) == 0  && str[i] != '.' &&  str[i] != 'f')
                y++;
            if(str[i] == 'f')
                f_num++;
            if(str[i] == '.')
                p_num++;
            i++;
        }
        if(f_num >=2)
            throw -1;
        if(p_num >=2)
            throw -1;
        if(y != 0)
            throw -1;
    }
}


void ScalarConverter::convert(std::string target)
{
    int pos = 0;
    try 
    {
        if(target == "nan" || target == "+inf" || target == "-inf")
            throw target;
        int a = static_cast<int>(std::atoi(target.data()));
        std::cout << "int : "<< a << std::endl;
        char d = static_cast<char>(a);
        if(std::isprint(d))
            std::cout << "char : " << "'" << d << "'" << std::endl;
        else
            throw -1;
    }
    catch(std::exception &e)
    {
        std::cout  << "int : imposible" << std::endl;
        std::cout  << "char : imposible" << std::endl;
    }
    catch(int E)
    {
        std::cout << "char :  Non displayable" << std::endl; 
    }
    catch(std::string target)
    {
        std::cout << "char : impossible" << std::endl; 
        std::cout << "int : impossible" << std::endl; 
    }


    try 
    {
        if(target == "nan" || target == "+inf" || target == "-inf")
            throw target;
        float f = static_cast<float>(std::stof(target.data()));
        std::cout  << "float : " << f;
        pos = target.find(".");
        if(pos == -1)
            std::cout << ".0f" << std::endl;
        else
        {
            if(target[pos +1] == '0')
                   std::cout << ".0";
            std::cout << "f\n";
        }
    }
    catch(std::exception &e)
    {
        std::cout << "float : " << "imposible" << std::endl;;
    }
    catch(std::string target)
    {
        std::cout << "float : " << target <<"f" << std::endl; 
    }

    try 
    {
        if(target == "nan" || target == "+inf" || target == "-inf")
            throw target;
        double  f =  static_cast<double>(std::strtod(target.data(), NULL));
        std::cout << "double : "<< f;
        pos = target.find(".");
        if(pos == -1)
            std::cout << ".0" << std::endl;
        else
        {
            if(target[pos +1] == '0')
                   std::cout << ".0";
        }
    }
    catch(std::exception &e)
    {
        std::cout << "double : imposible" << std::endl;
    }
    catch(std::string target)
    {
        std::cout << "double : " << target<< std::endl; 
    }
}




