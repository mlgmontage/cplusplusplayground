#include <bits/stdc++.h>
using namespace std;

int linear_search(vector<int> arrow, int x)
{
  int i = 0;
  while (i < arrow.size())
  {
    if (arrow[i] == x)
      return i;

    i += 1;
  }

  return -1;
}

int main()
{
  vector<int> sorted_array = {5, 18, 21, 34, 41, 57, 61, 79, 83};
  int x = 41;
  cout << "Index of " << x << " in array is " << linear_search(sorted_array, x) << "\n";
}