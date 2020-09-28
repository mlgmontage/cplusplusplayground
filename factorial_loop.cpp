#include <bits/stdc++.h>
using namespace std;

/*
  Calculate a factorial of number using loop.
*/

int factorial(int n)
{
  int product = 1;
  while (n >= 1)
  {
    product *= n;
    --n;
  }
  return product;
}

int main()
{
  cout << "factorial of 5 is " << factorial(5) << "\n";
  cout << "factorial of 6 is " << factorial(6) << "\n";
}