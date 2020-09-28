#include <bits/stdc++.h>
using namespace std;

/*
  Calculate a factorial of number using loop.
*/

int factorial(int n)
{
  if (n <= 1)
    return 1;
  return n * factorial(n - 1);
}

int main()
{
  cout << "factorial of 5 is " << factorial(5) << "\n";
  cout << "factorial of 6 is " << factorial(6) << "\n";
}