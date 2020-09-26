#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arrow, int x)
{
  int low = 0, high = arrow.size() - 1;
  while (low <= high)
  {
    int middle = (low + high) / 2;
    if (arrow[middle] == x)
    {
      return middle;
    }
    if (arrow[middle] > x)
      high = middle - 1;
    else
      low = middle + 1;
  }
  return -1;
}

int main()
{
  vector<int> sorted_array = {5, 18, 21, 34, 41, 57, 61, 79, 83};
  int x = 41;
  cout << "Index of " << x << " in array is " << binary_search(sorted_array, x) << "\n";
}