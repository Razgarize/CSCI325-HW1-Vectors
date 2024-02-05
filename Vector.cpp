#include <iostream>
#include "Vector.h"

using namespace NonSTD;

Vector::Vector()
{
  int vec_size = 0;
  int vec_capcity = 0;
  int *vec_ptr = NULL;
}

Vector::~Vector()
{
  delete vec_ptr;
}

//Vector& operator=(const Vector &other)
//{
//
  //}

