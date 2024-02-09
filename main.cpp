#include <iostream>
#include "Vector.h"

using namespace std;
using namespace NonSTD;

void MainTest(Vector& object);
void TestPrinter(Vector& other);

int main()
{
  NonSTD::Vector object;
  NonSTD::Vector A(object);

  char a = 0;
  while (a != 'q')
    {
      cout << "Enter a number for an action." << endl << endl;

      cout << "t: Main Test for grade: NOTE: This will cause the application to close intentionally." << endl;
      cout << "1: object.size" << endl;
      cout << "2: object.reserve(10)" << endl;
      cout << "3: Add a new element (push_back)." << endl;
      cout << "4: Print the Capacity of the Vector." << endl;
      cout << "5: Make object = A." << endl;
      cout << "6: Make A = object." << endl;
      cout << "p: Print the Vector." <<endl;
      cout << "q: To Exit." << endl;
      cout << "Number or letter: ";

      cin >> a;

      
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
      else if (a == 't')
	{
	  MainTest(object);
	  a = 'q';
	}
      
  
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

  cout << "Assigning A to B: " << endl << endl;
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
  
}
