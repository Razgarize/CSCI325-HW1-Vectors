/**
 * @file Vector.cpp
 * @author Jimmy Hart
 * @date 2024-02-09
 * @brief All the protypes in Vector.h are implimented here.
 * 
 * This is the implementation file. Any Vector class methods are implimented here. Otherwise they are inside main.cpp when necessary. 
 */

#include <iostream>
#include "Vector.h"



Vector::Vector(const Vector &other)
{
  //copies an object with the exact capacity, elements and size.
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
  //default constructor.
  vec_size = 0;
  vec_capacity = 0;
  vec_ptr = NULL;
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



Vector& Vector::operator=(const Vector &other)
{
  //Deep copy and reassigns the vec_ptr.
  delete[] vec_ptr;
  vec_ptr = new int[other.vec_capacity];
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;
  for(int i = 0; i < other.vec_size; i++)
    {
      vec_ptr[i] = other.vec_ptr[i];
    }
  return *this;
}
void Vector::reserve(int n)
{
  if(vec_ptr == NULL)
    {
      //Safe Guard: prevents NULL Based compiler errors.
      vec_ptr = new int[10];
      return;
    }
  if (vec_capacity < n)
    {
      //Does a Deep Copy here and carves n number of capacity for vec_ptr.
      int *temp = new int[n];
      vec_capacity = n;
      for(int i = 0; i < vec_capacity; i++)
      {
        temp[i] = vec_ptr[i]; 
      }
      delete[] vec_ptr;
      vec_ptr = temp;
    }
}

void Vector::reserve()
{
  if(vec_ptr == NULL)
    {
      //Safe Guard: prevents NULL Based compiler errors.
      vec_ptr = new int[10];
      vec_capacity += 10;
      return;
    }
  //doubles the capacity each call while doing a deep copy.
  vec_capacity = vec_capacity * 2;
  int *temp = new int[vec_capacity];
  for(int i = 0; i < vec_size; i++)
    {
      temp[i] = vec_ptr[i];
    }
  delete[] vec_ptr;
  vec_ptr = temp;
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
      //Safe Guard: To prevent Buffer Overflow errors.
      reserve();
    }
  //Adds the element to the Vector and increasing the size.
  vec_ptr[vec_size] = element;
  vec_size += 1;
}




void Vector::PrintVector()
{
  if(vec_ptr == NULL)
    {
      //Safe Guard: To prevent NULL Based compiler errors.
      reserve();
    }
  for(int i = 0; i < vec_size; i++)
    {
      //Prints the entire array.
      std::cout << vec_ptr[i] << ' '; 
    }
}
