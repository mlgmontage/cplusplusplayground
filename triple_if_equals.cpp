#include <bits/stdc++.h>
using namespace std;

/*
  Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.
*/

int triple_if_equal(int a, int b)
{
  if (a == b)
  {
    return a * 3;
  }

  return a + b;
}

int main()
{
  cout << triple_if_equal(3, 4) << "\n"; // 7
  cout << triple_if_equal(3, 3) << "\n"; // 9
}