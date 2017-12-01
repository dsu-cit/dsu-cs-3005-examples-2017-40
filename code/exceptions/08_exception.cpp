#include <iostream>

/* Trace the execution path of this code.
 * Can you predict the output before running it?
 *
 * Demonstration of C++ exceptions.
 */

int *allocate_space()
{
  int *myarray = new int[100000000000];
  return myarray;
}


int main ()
{
  int *x = 0;
  try
    {
      std::cout << "Try to run code that may throw an exception." << std::endl;
      x = allocate_space();
      std::cout << "After allocate_space." << std::endl;
    }
  catch (std::exception& e)
    {
      std::cout << "Exception caught: " << e.what() << std::endl;
    }
  std::cout << "After try/catch." << std::endl;
  std::cout << "x = " << x << std::endl;
  if(x)
    {
      delete [] x;
    }
  return 0;
}
