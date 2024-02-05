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

int Vector::size()
{
  //TODO: RETURNS THE CURRENT NUMBER OF ELEMENTS IN THE VECTOR.
  
  
}

int Vector::capacity()
{
  //TODO: RETURNS THE ALLOCATED STORAGE CAPCITY OF THE VECTOR.
}


//Vector& operator=(const Vector &other)
//{
//
  //}

