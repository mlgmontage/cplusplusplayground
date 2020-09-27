#include <bits/stdc++.h>
using namespace std;

/*
  A Bear and Big brother

  Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.
  Right now, Limak and Bob weight a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.
  Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.
  After how many full years will Limak become strictly larger than Bob?

  input -> 4 7 
  output -> 2

  input -> 4 9
  output -> 3
*/

int main()
{
  int a, b, year = 0;
  cin >> a >> b;
  if (a > b)
    return year;

  while (a <= b)
  {
    year += 1;
    a *= 3;
    b *= 2;
  }

  cout << "After " << year << " years Limak will be heavier than Bob.\n";
}