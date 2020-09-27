#include <bits/stdc++.h>
using namespace std;

/*
Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.
*/

int main()
{
  vector<int> arrow = {0, -1, 2, -3, 1};

  int i, j, k, total = 0;

  for (i = 0; i < arrow.size(); i++)
  {
    for (j = 0; j < arrow.size(); j++)
    {
      for (k = 0; k < arrow.size(); k++)
      {
        if (arrow[i] + arrow[j] + arrow[k] == 0)
        {
          cout << "(" << arrow[i] << ", " << arrow[j] << ", " << arrow[k] << ")\n";
          total += 1;
        }
      }
    }
  }

  cout << "Total: " << total << "\n";
}