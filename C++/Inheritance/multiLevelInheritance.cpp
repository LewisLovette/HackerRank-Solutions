#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
   public:
      void triangle(){
         cout << "I am a triangle\n";
      }
};

class Isosceles : public Triangle{
     public:
        void isosceles(){
          cout << "I am an isosceles triangle\n";
        }
};

   
//Write your code here.
class Equilateral: public Isosceles{    //inherit from Isosceles and created public function to print.
   public:
        void equilateral(){
            cout << "I am an equilateral triangle\n";   //for some reason others don't have 'endl;' but it works so whatevs
        }
};

int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
