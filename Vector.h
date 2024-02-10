/**
 * @file Vector.h
 * @author Jimmy Hart
 * @date 2024-02-09
 * @brief Contains the Vector Class.
 * 
 * Any and all nessary prototypes for the Vector class are in this header file, including some debugging tools.
 */

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
private:
  int *vec_ptr; //Points to the vector's dynamic array.
  int vec_size, vec_capacity; //Same as size and capacity from std::vector.

public:

  /**
   * Default Constructor: Creates an object (empty vector) under the Vector Class
   *
   * @pre
   * @post The object is created under the Vector class with a vec_pointer = NULL and vec_size, vec_capacity = 0 
   * 
   */
  Vector(); 
    

  /**
   * Copy Constructor: Initializes a dynamic array of the appropriate size/capacity and copies data from other's dynamic array to the new array.
   *
   * @param const Vector &other Another Vector class based object
   * @pre Requires another Vector object already made.
   * @post A new copy of the parameter object has been made with the same capacity and size. vec_ptr is initialized and allocated, contains the same elements as other as well as the other.vec_size and other.vec_capacity.
   * 
   */
  Vector(const Vector &other); 
    



  /**
   * Default Destructor. Deallocates vec_ptr.
   *
   * @pre None
   * @post vec_ptr has been deallocated, vec_size and vec_capacity = 0
   * 
   */
  ~Vector();
 

  /**
   * Assignment operator. Initializes a dynamic array of the appropriate size/capacity and copies data from other's array to the new array.
   *
   * @param const Vector &other An already existing Vector object.
   * @pre Requires an already initialized Vector object.
   * @return Vector& The object on the left side of the oeprator
   * @post The Vector object on the left side of the = operator becomes the Vector object on the right. vec_ptr is initialized, and contains the same elements as other.vec_ptr. Left side of the operator will have the same size and capacity as other.
   * 
   */
  Vector& operator=(const Vector &other); 
  /* Description:
   *    Assignment operator.  Initializes a dynamic array of the appropriate
   *    size/capacity and copies data from other's array to the new array.
   * Post-conditions:
   *    vec_ptr is initialized, and its array contains other.vec_ptr's data,
   *    vec_size=other.vec_size, and vec_capacity=other.vec_capacity.
   */
 
 

  /**
   * Returns the current number of elements in the vector
   *
   * @pre requries the vector to be initialized.
   * @return int vec_size
   * @post vec_size has been returned
   * 
   */
  int size();


  /**
   * Returns the current capacity of the vector
   *
   * @pre requries the vector to be initialized.
   * @return int vec_capacity
   * @post vec_capacity has been returned
   * 
   */
  int capacity();




  /**
   * void push_back: adds a new element to the vector and if nessary adds new capacity to the vector. 
   *
   * @param int element The new element to be added in the vector
   * @pre Requires vector to be already initialized and an element to be pushed.
   * @return void 
   * @post The parameter element has been added to the vector and if nessary the capacity has been doubled.
   * 
   */
  void push_back(int element); 



  /**
   * void reserve(int n): Requests that the vector capacity be increased by n.
   *
   * @param int n The number of capacity to be increased.
   * @pre The Vector already initialized
   * @return void 
   * @post The capacity of the Vector has been increased by n, if it n was greater than the vector's capacity, otherwise it does nothing.
   * 
   */
  void reserve(int n); 
    


  /**
   * void reserve(): Increases the capacity of the vector when vec_size >= vec_capacity. Doubles the capacity.
   *
   * @pre Vector has been already been initilized and the other methods conditions for vec_size >= vec_capacity.
   * @return void 
   * @post The capacity of the vector has been doubled.
   * 
   */
  void reserve(); 
    


  /**
   * int& operator[](unsigned int index): Allows to access the dynamic array's elements and append/modify them.
   *
   * @param unsigned int index the element to be returned.
   * @pre Requires the vector to be initialized and allocated.
   * @return int& Returns the referenced element of the array.
   * @post the referenced element has been returned.
   * 
   */
  int& operator[](unsigned int index);  
    

  /**
   * void PrintVector(): Prints the entire vector.
   *
   * @pre Requires the vector to be initialized.
   * @return void 
   * @post prints the entire vector to the terminal. NOTE: if vec_ptr is NULL, then it will be allocated with a capacity and size of 0 to avoid errors.
   * 
   */
  void PrintVector(); 
};


#endif
