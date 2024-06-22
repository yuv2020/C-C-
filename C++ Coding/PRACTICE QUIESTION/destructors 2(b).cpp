#include <iostream>

using namespace std;

// declaring a class

class rectangle {

   private:

       double length;

       double breadth;

   public:

       // creating parameterized constructor

       rectangle(double len, double brt) {

                 // initialize private variables

                 length = len;

                 breadth = brt;

       }

       double calculateArea() {

                 return length * breadth;

       }

};

int main() {

       // creating objects and initializing data members

       rectangle rect1(10, 8.6);

       rectangle rect2(8.5, 6);

       cout<<"Area of rectangle1: "<<rect1.calculateArea()<<endl;

       cout<<"Area of rectangle2: "<<rect2.calculateArea()<< endl;

       return 0;

}
