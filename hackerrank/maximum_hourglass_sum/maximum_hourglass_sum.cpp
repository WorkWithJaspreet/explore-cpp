#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

void getVector(vector<vector<int>> &arr)
{
  for (int i = 0; i < 6; i++)
    for (int j = 0; j < 6; j++)
    {
      cout << "Enter value for [" << i << "][" << j << "] element: ";
      cin >> arr[i][j];
    }
  cout << endl;
}

void printVector(vector<vector<int>> &arr)
{
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;
}

int hourglassSum(vector<vector<int>> &arr)
{
  int maxSum = INT_MIN;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
      maxSum = max(maxSum, sum);
    }
  }
  return maxSum;
}

int main()
{
  vector<vector<int>> arr(6);

  for (int i = 0; i < 6; i++)
  {
    arr[i].resize(6);
  }

  getVector(arr);

  printVector(arr);

  int result = hourglassSum(arr);

  cout << "Highest sum: " << result << "\n";

  return 0;
}
