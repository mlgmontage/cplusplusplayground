#include <bits/stdc++.h>
using namespace std;

/*
Given the marks of N students in an Array A, calculate the mean.
*/

double mean(vector<int> marks)
{
  int i, total = 0;
  for (i = 0; i < marks.size(); i++)
  {
    total += marks[i];
  }

  return total / marks.size();
}

int main()
{
  vector<int> marks = {56, 67, 30, 79}; // 58
  cout << "Mean: " << mean(marks) << "\n";
}