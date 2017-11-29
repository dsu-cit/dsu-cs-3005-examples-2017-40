#include <iostream>
#include <ctime>
#include <cstdlib>

/* Trace the execution path of this code.
 * Can you predict the output before running it?
 *
 * Demonstration of try/catch.
 */

int risky_function()
{
  int r = std::rand() % 2;
  if(r == 0)
    {
      throw 22;
    }
  return r;
}

int main ()
{
  std::srand(std::time(0));

  int x = 0;
  try
    {
      std::cout << "Try to run code that may throw an exception." << std::endl;
      x = risky_function();
      std::cout << "After risky_function." << std::endl;
    }
  catch (int e)
    {
      std::cout << "Exception caught: " << e << std::endl;
    }
  std::cout << "After try/catch." << std::endl;
  std::cout << "x = " << x << std::endl;
  return 0;
}
