#include <bits/stdc++.h>
using namespace std;

/*
  Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. 
  That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
*/

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
  int i, j, counter = 0;
  vector<int> result;
  for (i = 0; i < nums.size(); i++)
  {

    for (j = 0; j < nums.size(); j++)
    {
      if (nums[i] > nums[j] && i != j)
      {
        counter += 1;
      }
    }

    result.push_back(counter);
    counter = 0;
  }
  return result;
}

int main()
{
  cout << "Hello, world\n";
}