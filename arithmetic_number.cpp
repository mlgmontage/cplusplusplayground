#include <bits/stdc++.h>
using namespace std;

/*
Given three integers  'A' denoting the first term of an arithmetic sequence , 'C' denoting the common difference of an arithmetic sequence and an integer 'B'.
You need to tell whether 'B' exists in the arithmetic sequence or not.
*/

bool is_in_sequence(vector<int> sequence, int number)
{
  int common_difference = sequence[1] - sequence[0];
  int i = sequence[0];

  while (i < number)
  {
    i += common_difference;
  }

  if (i == number)
    return true;
  return false;
}

int main()
{
  vector<int> sequence = {1, 4, 7, 10, 13, 16, 19};
  cout << is_in_sequence(sequence, 3) << "\n";  // false
  cout << is_in_sequence(sequence, 10) << "\n"; // true
  cout << is_in_sequence(sequence, 15) << "\n"; // false
  cout << is_in_sequence(sequence, 22) << "\n"; // true
}