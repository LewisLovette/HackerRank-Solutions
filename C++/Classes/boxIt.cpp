#include <bits/stdc++.h>
using namespace std;

class Box
{
  private:
    int l=0;
    int b=0;
    int h=0;
  public:
    int getLength() const{
        return l;
    }
    int getBreadth() const{
        return b;
    }
    int getHeight() const{
        return h;
    }
    long long CalculateVolume (){
        return (long long)l*b*h;
    }
    
    Box(){
        //already declared as 0
    }
    Box(int length, int breadth, int height){
        l=length;
        b=breadth;
        h=height;
    }
    Box(const Box& B){
        l=B.getLength();
        b=B.getBreadth();
        h=B.getHeight();
    }
    
    bool operator<(const Box &B){   //still not sure about this though.
        int l2=B.getLength();
        int b2=B.getBreadth();
        int h2=B.getHeight();
        if(l < l2 || (b < b2 && l==l2) || (h < h2 && b==b2 && l==l2))
            return true;
        else
            return false;
    }

};
ostream& operator<<(ostream& out, Box B){   //prints values of Box - note this is OUTSIDE of the class (not written by me)
    int l=B.getLength();
    int b=B.getBreadth();
    int h=B.getHeight();
    return out<<l<<' '<<b<<' '<<h;
}