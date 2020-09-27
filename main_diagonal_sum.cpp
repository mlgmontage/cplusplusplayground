#include <bits/stdc++.h>
using namespace std;

/*
  Given matrix NxN, find main diagonal's sum
*/

int main_diagonal_sum(vector<vector<int>> matrix)
{
  int i, j, total = 0;
  for (i = 0; i < matrix.size(); i++)
  {
    for (j = 0; j < matrix.size(); j++)
    {
      if (i == j)
      {
        total += matrix[i][j];
      }
    }
  }
  return total;
}

int main()
{
  vector<vector<int>> square = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
  cout << "Main diagonal sum is " << main_diagonal_sum(square) << "\n";
}