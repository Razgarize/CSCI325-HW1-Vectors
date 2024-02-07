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
      cout << "q: To Exit." << endl;
      cout << "Number: ";

      cin >> a;

      if(a == '1')
	{
	  cout << object.size() << endl;
	  cout << "Size Test Complete" << endl;
	}
      else if (a == '2')
	{
	  object.reserve(10);
	  cout << "Reserve Test Complete" << endl;
	}
      else
	{
	  cout << "invalid entry." << endl;
	}
    }
  
  cout << "Everything is working fine" << endl;
  
  
  return 0;
}
