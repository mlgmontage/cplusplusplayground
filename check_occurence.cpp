#include <bits/stdc++.h>
using namespace std;

/*
  Write a function that checks whether an element occurs in a list.
*/

bool check_occurence(vector<int> arrow, int elm)
{
  int i;
  for (i = 0; i < arrow.size(); i++)
  {
    if (arrow[i] == elm)
      return true;
  }
  return false;
}

int main()
{
  vector<int> sample_array = {9, 1, 19, 24, 31, 47, 59};
  int value;
  cin >> value;

  if (check_occurence(sample_array, value))
  {
    cout << value << " is exists in array\n";
  }
  else
  {
    cout << value << " is not exists in array\n";
  }
}