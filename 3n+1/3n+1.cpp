#include <iostream>

int main()
{
  int n, counter = 0;
  std::cout << "Enter a number: ";
  std::cin >> n;

  while (n != 1)
  {
    if (n % 2 == 1)
    {
      n = 3 * n + 1;
    }
    else
    {
      n /= 2;
    }

    counter++;
  }

  std::cout << "Number of iterations: " << counter << std::endl;

  return 0;
}
