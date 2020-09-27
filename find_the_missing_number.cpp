#include <bits/stdc++.h>
using namespace std;

/*
You are given a list of n-1 integers and these integers are in the range of 1 to n.
There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.
*/

int find_the_missing_number(vector<int> arrow)
{
  int i;
  for (i = 0; i < arrow.size() - 1; i++)
  {
    if ((arrow[i] + 1) != arrow[i + 1])
    {
      return arrow[i] + 1;
    }
  }
  return 0;
}

int main()
{
  vector<int> sample_array = {1, 2, 3, 4, 5, 6, 8};

  cout << "Missing number in sample_array is " << find_the_missing_number(sample_array) << "\n";
}