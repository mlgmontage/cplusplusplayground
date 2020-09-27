#include <bits/stdc++.h>
using namespace std;

/*
  Write a program in C to separate odd and even integers in separate arrays.
*/

void display_vector(vector<int> arrow)
{
  cout << "[";
  int i;
  for (i = 0; i < arrow.size(); i++)
  {
    cout << arrow[i] << ", ";
  }
  cout << "]\n";
}

int main()
{
  vector<int> arrow = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int> odd = {};
  vector<int> even = {};

  int i;
  for (i = 0; i < arrow.size(); i++)
  {
    if (arrow[i] % 2 == 0)
    {
      even.push_back(arrow[i]);
    }
    else
    {
      odd.push_back(arrow[i]);
    }
  }

  cout << "Odds: ";
  display_vector(odd);

  cout << "Evens: ";
  display_vector(even);
}