#include "./iter.hpp"


template <typename N,  typename E , typename C>
void iter(N *ptr, E lenght, C  (*fun)(N ))
{
    int  i = 0;
    while(i < lenght)
    {
         fun(ptr[i]);
       i++;
    }
} 

template <typename N>
int  itertor(N arg)
{ 
    arg++;
    std::cout  << arg <<" -> item" << std::endl;
    return (0);
}


int main()
{
    int ptr[4] = {1, 2 ,  3 ,  4};
     iter(ptr, 4 , itertor<int>);
    return 0;
    
}