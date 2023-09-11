#include "./Base.hpp"
#include "./classes.hpp"
#include "Base.hpp"

Base::Base()
{

}


Base::~Base()
{


}


Base *generate(void)
{
    Base *obj = NULL;
    int n = 0;
    std::srand(time(0));
    n = std::rand();
     if(n % 2 == 0)
        obj = new A();
    else if(n % 3 == 0)
        obj = new B();
    else
        obj = new C();
    return obj;
}

void identify(Base *obj)
{
    if(dynamic_cast<A *>(obj))
        std::cout << "type: A" << std::endl;
    else if(dynamic_cast<B *>(obj))
        std::cout << "type: B" << std::endl;
    else if(dynamic_cast<C *>(obj))
        std::cout << "type: C" << std::endl;
}


void identify(Base& p)
{
    try{
        A& obj1 = dynamic_cast<A&>(p); 
        std::cout << "type: A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& obj1 = dynamic_cast<B&>(p); 
            std::cout << "type: B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& obj1 = dynamic_cast<C&>(p); 
                std::cout << "type: C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << e.what() << std::endl;
            }
        }
        
    }
}