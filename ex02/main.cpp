#include "./Base.hpp"
#include "./classes.hpp"


int main()
{
    Base *b = generate();
    identify(b);
    identify(*b);
}