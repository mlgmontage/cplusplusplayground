#include <bits/stdc++.h>
using namespace std;

/*
  Write a program in C++ to find the sum of all elements of the array.
*/

int array_sum(vector<int> arrow)
{
  int i;
  int sum = 0;
  for (i = 0; i < arrow.size(); i++)
  {
    sum += arrow[i];
  }
  return sum;
}

int main()
{
  vector<int> sample_array = {1, 2, 3, 4};
  cout << array_sum(sample_array) << "\n"; // 10
}