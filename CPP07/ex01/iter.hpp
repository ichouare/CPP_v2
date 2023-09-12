#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename N, typename E, typename C >
void iter(N *ptr, E lenght, C (* fun)(N ));

#endif