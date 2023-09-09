#include "./Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t intptr = reinterpret_cast<uintptr_t>(ptr);
        return intptr;
}


Data* Serializer::deserialize(uintptr_t raw)
{
     Data *intptr = reinterpret_cast<Data *>(raw);
        return intptr;
}