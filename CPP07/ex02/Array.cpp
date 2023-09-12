#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Arrry{
    public:
        Arrry():arr(NULL)
        Arrry(T n) 
        {
            arr = new T[n];
        }
        Arrry(const Arrry& original)
        {
            this = original
        }
        Arrry& operator=(const Arrry& original)
        {
            delete [] arr;
            int i = 0;
            arr = new T[strlen(original.arr)];
            while(i <  strlen(original.arr))
            {
                arr[i] = original.arr[i];
                i++;
            }
            return *this;
        }
        ~Arrry()
        {
            delete[] arr;
        }
    private:
        T *arr;
};
#endif 