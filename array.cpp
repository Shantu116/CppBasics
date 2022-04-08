#include <iostream>

using namespace std;

double avg_arr(int arr[], int n)
{
  double sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  return sum / n;
}

int main()
{
  int x[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> x[i][j];
    }
  }

  return 0;
}