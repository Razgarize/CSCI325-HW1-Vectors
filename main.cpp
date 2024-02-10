/** 
 * @file main.cpp
 * @author Jimmy Hart
 * @date 2024-02-09
 * @brief Controls and tests my vector library. Contains an interface to interact with and test along with an exstensive custom tester.  
 * 
 * Control my vector library with this file. Includes a premade automated tester that meets all testing requirements, as well as the seperate control functions.
 */

#include <iostream>
#include "Vector.h"

using namespace std;


/**
 * Does a series of tests that checks the validity of the Vector class.
 *
 * @param Vector& object Takes the object needed to test the Copy Constructor.
 * @pre That the Program has just stared and no other part of the interface in int main() was used. Otherwise a restart is required.
 * @return void 
 * @post The Main Test is completed and all the tests have been printed off to the terminal. Effectively closing the program as well.
 * 
 */
void MainTest(Vector& object);

/**
 * Just prints the vector whenever it is called for the function void MainTest(Vector& object)
 *
 * @param Vector& other Takes in the vector object needed to print.
 * @pre The object needs to be already initialized.
 * @return void 
 * @post The vector is printed to the terminal
 * 
 */
void TestPrinter(Vector& other);

int main()
{
  Vector object;
  Vector A(object);

  //The Interface for testing the new vector library I made.
  char a = 0;
  int counter = 0;
  while (a != 'q')
    {
      cout << "Enter a number for an action." << endl << endl;

      cout << "t: Main Test for grade: NOTE: This will cause the application to close intentionally." << endl; //The main tester, use first when starting the program.
      cout << "1: object.size" << endl; //prints off the size of the object.
      cout << "2: object.reserve(10)" << endl; //carves a specific amount (this being 10) of capacity to the object.
      cout << "3: Add a new element (push_back)." << endl; //Adds a new element to object.
      cout << "4: Print the Capacity of the Vector." << endl; //Prints the vector's capacity.
      cout << "5: Make object = A." << endl; //Makes A an object. This was mostly used for testing purposes.
      cout << "6: Make A = object." << endl; //Same here.
      cout << "p: Print the Vector." <<endl; //Prints the vector's elements.
      cout << "q: To Exit." << endl; //This will Terminate the program.
      cout << "Number or letter: "; //Asking the user for an input for the interface.

      cin >> a;

      //All these conditionals (if/if else) are the interface.
      if (a == '1')
	{
	  cout << "Object Size: " << object.size() << endl;
	  cout << "Size Test Complete" << endl;
	}
      else if (a == '2')
	{
	  object.reserve(10);
	  cout << "Reserve Test Complete" << endl;
	}
      else if (a == '3')
	{
	  int b = 0;
	  cout << "Enter a number to push_back to the Vector: ";
	  cin >> b;
	  object.push_back(b);
	}
      else if (a == '4')
	{
	  cout << "Vector Capacity: " << object.capacity() << endl;
	}
      else if (a == '5')
	{
	  object = A;
	}
      else if (a == '6')
	{
	  A = object;
	}
      else if (a == 'p')
	{
	  cout << endl;
	  cout << "Here are the numbers: ";
	  object.PrintVector();
	  cout << endl;
	}
      else if (a == 't' and counter == 0)
	{
	  MainTest(object);
	  a = 'q';
	}
      else if (a == 't' and counter > 0)
	{
	  cout << "If you wish to use the main tester, please restart the program and use it first.";
	}
      counter++;
  
    }

  cout << "Program Ended" << endl;
  
  
  return 0;
}

void MainTest(Vector& object)
{
  
  cout << "__________ Main Test Active __________" << endl;

  cout << "Making Copies of Vector object: A, B, C" << endl;
  
  Vector A(object), B, C;
  
  cout << "Copying complete, printing objects... (they should be empty):" << endl << endl;
  cout << "A: ";
  A.PrintVector();
  cout << endl << "B: ";
  B.PrintVector();
  cout << endl << "C: ";
  C.PrintVector();
  cout << endl << endl;
  
  cout << "Pushing a 1500 elements into vector B." << endl << endl;

  for(int i = 0; i < 1500; i++)
    {
      B.push_back(i);
    }
  cout << "Printing out B[3], element should be 3: " << B[3] << endl;

  B[3] = 18;
  cout << "Changing B[3] from 3 to 18: " << B[3] << endl << endl;
  cout << "Printing the Size of the vectors:" << endl << endl;

  cout << "A: " << A.size() << endl;
  cout << "B: " << B.size() << endl;
  cout << "C: " << C.size() << endl << endl;

  cout << "Printing the Capacity of the vectors:" << endl << endl;

  cout << "A: " << A.capacity() << endl;
  cout << "B: " << B.capacity() << endl;
  cout << "C: " << C.capacity() << endl << endl;

  cout << "Printing the first 100 elements of B:" << endl;
  for(int i = 0; i < 100; i++)
    {
      cout << B[i] << ", ";
    }

  cout << "Assigning A to B (A = B): " << endl << endl;
  A = B;

  cout << "Printing the Size of the vectors:" << endl << endl;
  cout << "A: " << A.size() << endl;
  cout << "B: " << B.size() << endl;
  cout << "C: " << C.size() << endl << endl;

  cout << "Printing the Capacity of the vectors:" << endl << endl;
  
  cout << "A: " << A.capacity() << endl;
  cout << "B: " << B.capacity() << endl;
  cout << "C: " << C.capacity() << endl << endl;

  cout << "Printing the first 100 elements of A:" << endl;
  for(int i = 0; i < 100; i++)
    {
      cout << A[i] << ", ";
    }
  cout << endl << "Doing Test Cases for C." << endl;
  cout << "Reserving 10 capacity into C." << endl;
  
  C.reserve(10);
  
  
  cout << "Capacity of C: " << C.capacity() << endl << endl;

  cout << "Adding 11 elements to C and print them." << endl;

  for(int i = 0; i < 11; i++)
    {
      C.push_back(i*2);
    }
  for(int i = 0; i < C.size(); i++)
    {
      cout << C[i] << ", ";
    }
  cout << endl <<  "Capacity of C: " << C.capacity() << endl;
  cout << "Size of C: " << C.size() << endl;
  cout << endl << endl << "__________ End of Test __________";
  cout << endl;
}
