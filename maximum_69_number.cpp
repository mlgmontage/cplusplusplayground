#include <bits/stdc++.h>

/*
  Given a positive integer num consisting only of digits 6 and 9.
  Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

  Input: num = 9669
  Output: 9969
*/

int maximum69Number(int num)
{
  std::string number = std::to_string(num);
  int i;
  for (i = 0; i < number.size(); i++)
  {
    if (number[i] == '6')
    {
      number[i] = '9';
      break;
    }
  }
  return std::stoi(number);
}

int main()
{
  std::cout << maximum69Number(9669) << "\n"; // 9969
}