#include <iostream>
#include "Vector.h"

using namespace NonSTD;

Vector::Vector(const Vector &other)
{
  //copies an object.
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;
  vec_ptr = new int[vec_capacity];
  for(int i = 0; i < vec_capacity; i++)
    {
      vec_ptr[i] = other.vec_ptr[i];
    }
}

Vector::Vector()
{
  vec_size = 0;
  vec_capacity = 0;
  vec_ptr = new int[vec_capacity];
}

Vector::~Vector()
{
  delete[] vec_ptr;
  vec_capacity = 0, vec_size = 0;
}

int Vector::size()
{
  //TODO: RETURNS THE CURRENT NUMBER OF ELEMENTS IN THE VECTOR. Completed: 02/05/24 4:09PM!

  return vec_size;
}

int Vector::capacity()
{
  //TODO: RETURNS THE ALLOCATED STORAGE CAPCITY OF THE VECTOR. Completed 02/05/24 4:09PM!
  return vec_capacity;
}



//Vector& Vector::operator=(const Vector &other)
//{
  //DEEP COPY
  
  
  
  //}
void Vector::reserve(int n)
{
  //TODO: Requests that the vector capacity be resized at least enough to contain n elements.

  if (vec_capacity < n)
    {
      int *temp = new int[n];
      vec_capacity = n;
      //std::cout << vec_capacity << std::endl;
      //std::cout << "temp:    " <<  temp[1] << std::endl;
      //std::cout << "vec_ptr: " << vec_ptr[1] << std::endl;
      for(int i = 0; i < vec_capacity; i++)
      {
        temp[i] = vec_ptr[i]; 
      }
      delete[] vec_ptr;
      vec_ptr = temp;
    }
}

int& Vector::operator[](unsigned int index)
{
  //Returns a reference to the element at position index.
  return vec_ptr[index];
}

void Vector::push_back(int element)
{
  if(vec_size + 1 >= vec_capacity)
    {
      reserve(vec_capacity+1);
    }
  vec_ptr[vec_size + 1] = element;
  vec_size += 1;
}




void Vector::PrintVector()
{
  for(int i = 0; i <= vec_size; i++)
    {
      std::cout << vec_ptr[i] << ' '; 
    }
}
    
