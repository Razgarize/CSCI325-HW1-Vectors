#include <iostream>
#include "Vector.h"

using namespace std;
int main()
{
  NonSTD::Vector object;


  char a = 0;
  while (a != 'q')
    {
      cout << "Enter a number for an action." << endl << endl;

      cout << "1: object.size" << endl;
      cout << "2: object.reserve(10)" << endl;
      cout << "3: Add a new element (push_back)." << endl;
      cout << "4: Print the Capacity of the Vector." << endl;
      cout << "p: Print the Vector." <<endl;
      cout << "q: To Exit." << endl;
      cout << "Number: ";

      cin >> a;

      if(a == '1')
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
      else if (a == 'p')
	{
	  cout << endl;
	  cout << "Here are the numbers: ";
	  object.PrintVector();
	  cout << endl;
	}
    }
  
  cout << "Everything is working fine" << endl;
  
  
  return 0;
}
