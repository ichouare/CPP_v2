#ifndef ARRAY_H
#define ARRAY_H

#include <cstring>
#include <iostream>

template <typename T>
class Array{
    public:
        Array():arr(NULL),m_length(0)
        {
           std::cout << "constructor called" << std::endl;     
        }
        Array(T n) 
        {
           std::cout << "constructor parametrized called" << std::endl;     
            arr = new T[n];
            m_length = n;
        }
        Array(const Array& original)
        {
            *this = original;
        }
        Array& operator=(const Array& original)
        {
            if(m_length == 0)
            {
                puts("hejfsdhre\n");
                delete [] arr;
            }
            // if(this == &original)
            //     return(*this);
            int i = 0;
            this->arr = new T[original.m_length];
            while(i <  original.m_length)
            {
                arr[i] = original.arr[i];
                i++;
            }
            this->m_length = original.m_length;
            return *this;
        }
        ~Array()
        {
            std::cout << "destructor called " << std::endl;
            delete[] arr;
        }
        T& operator[](int index);
        int size(){
            return m_length;
        }
    private:
        T *arr;
        int m_length;
};


template <typename T>
T& Array<T>::operator[](int index)
{
    if(index < 0 || index > this->size())
        throw -1;
    return arr[index];
}
#endif 