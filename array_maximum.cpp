#include <bits/stdc++.h>
using namespace std;

/*
  Write a function that returns the largest element in a list.
*/

int find_maximum(vector<int> arrow)
{
  int max = INT32_MIN;
  for (auto elm : arrow)
  {
    if (max < elm)
    {
      max = elm;
    }
  }
  return max;
}

int main()
{
  vector<int> sample_array = {9, 1, 19, 24, 31, 47, 59};
  int max = find_maximum(sample_array);
  cout << "Largest element in sample_array is " << max << "\n";
}