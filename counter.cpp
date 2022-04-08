#include <iostream>

using namespace std;

// Counter
// int
// constructor
// increment
// decremen
// get_count

class Counter {
  private:
   int x;
  public:
   Counter() : x(0) {}
   
   Counter(int a) :  x(a) {}

   void increment() {
     x++;
   }
   void decrement() {
     x--;
   }
   int get_count() {
     return x;
   }

    
   
};

int main()
{
  Counter c1(5); // 5
  c1.increment(); // 6
  c1.increment(); // 7
  c1.increment(); // 8
  c1.decrement(); // 7 
  cout << "c1.get_count is" << c1.get_count() << endl;
  return 0;
}