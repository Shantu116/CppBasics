#include <iostream>
#include <math.h>
using namespace std;

// Point
// int, int
// constructor
// input
// output
// distance

class Point {
    public:
    int x, y;
    Point() : x(0), y(0) {};
    Point(int a, int b): x(a), y(b) {};

    void output() {
      cout << "(" << x << ", " << y << ")" << endl;
    }

    double distance(Point b) {
      double d;
      d = sqrt(((b.x - this->x) * (b.x - this->x)) + ((b.y - this->y) * (b.y - this->y)));
      return d;
    }
};

int main()
{
    Point a(4, 2);
    Point b(2, 2);

    a.output();
    b.output();
    cout << "distance between a and b is " << a.distance(b) << endl;
  return 0;
}