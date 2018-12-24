/**
When you use pass-by-value, the compiler copies the value of an argument in a calling function 
to a corresponding non-pointer or non-reference parameter in the called function definition. 
The parameter in the called function is initialized with the value of the passed argument. 
As long as the parameter has not been declared as constant, the value of the parameter can be changed, 
but the changes are only performed within the scope of the called function only; 
they have no effect on the value of the argument in the calling function. 
**/

#include <iostream>
using namespace std;

void func (int a, int b)
{
   a += b;
   cout<<"In func, a = "<< a << " and b = " << b << endl;
}


int main()
{
   int x = 5, y = 7;
   func(x, y);
   cout<<"In main (even after calling func()), x = " << x << " and y = " <<  y << endl;
   return 0;
}

/**
In the above example, main passes func two values: 5 and 7. The function func receives copies of these values and accesses them by the identifiers
 a and b. The function func changes the value of a. When control passes back to main, the actual values of x and y are not changed 
  since function func changed the copy of x and y, not the actual x and y.
**/