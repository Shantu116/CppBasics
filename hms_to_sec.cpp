#include <iostream>

using namespace std;

long hms_to_sec(int, int, int);

int main()
{
  int h, m, s;
  cin >> h >> m >> s;
  cout << hms_to_sec(h, m, s) << endl;

  return 0;
}

long hms_to_sec(int h, int m, int s)
{
  return h * 3600 + m * 60 + s;
}