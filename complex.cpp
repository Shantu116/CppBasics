#include <iostream>
#include <math.h>

using namespace std;

// Complex
// int, int
// 2 - constructors
// output
// add(Complex b)
// subtract(Complex b)
// multiply(Complex b)

class Complex {
    public:
    int x, y;
    Complex() : x(0), y(0) {};
    Complex(int a, int b): x(a), y(b) {};

    void output() {
      cout << "(" << x << "+" << "i" << y << ")" << endl;
    }

    Complex addcomplex(Complex a, Complex b) {
      Complex add;
      add.x =  a.x + b.x;
      add.y =  a.y + b.y;

      return add;


    }
};
int main()
{
    Complex a(3, 4);
    Complex b(6, 8);

    a.output();
    b.output();

    Complex c;
    
    c = c.addcomplex(a , b);
    
    cout <<  "sum of complex numbers a and b is" << c.x << "+i" << c.y << endl;

  return 0;
}