#include <bits/stdc++.h>
using namespace std;

/*
  Given an integer number n, return the difference between the product of its digits and the sum of its digits.
*/

int subtractProductAndSum(int n)
{
  int sum = 0, product = 1;
  int i;
  vector<int> digits;

  string number = to_string(n);

  for (i = 0; i < number.size(); i++)
  {
    digits.push_back((number[i]) - '0');
  }

  for (i = 0; i < digits.size(); i++)
  {
    sum += digits[i];
    product *= digits[i];
  }

  return product - sum;
}

int main()
{
  cout << subtractProductAndSum(234) << "\n";
}