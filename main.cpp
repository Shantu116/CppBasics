#include <iostream>

using namespace std;

// object oriented programming
// functional programming

class smallObj {   // define a class
  protected:
    int x;
  public:
    int y;
    smallObj() {
      x = 0;
      y = 0;
    }
    smallObj(int a) {
      x = a;
    }
    smallObj(int a, int b) {
      x = a;
      y = b;
    }
    void setX(int a) { x = a; }
    void setY(int a) { y = a; }
    int getX() {
      return x;
    }
    void showdata() //member function to display data
    { 
      cout << "Data is " << x << endl; 
    }
  // protected:
   // some data
   // some functions
};

class inherits : public smallObj {
  public:
    void showdata() {
      cout << "Data is " << x << endl;
    }
};

int main()
{
  smallObj obj1;
  smallObj obj2(10);
  obj1.setX(10);

  cout << "obj1.x is " << obj1.getX() << endl;
  return 0;
}

// class, object
// class is a blueprint
// object is an instance of a class
// class definition
// access specifier: private, public, protected
// member function: member function is a function defined inside a class
// member function definition

// object oriented programming
// encapsulation: encapsulation is a process of wrapping similar code in one place.
// abstraction: displaying only essential information and hiding the details.
// inheritance: refers to the ability of a class to derive features and traits from another class.
// polymorphism

// A constructor is a member function that is executed automatically whenever an object is created.