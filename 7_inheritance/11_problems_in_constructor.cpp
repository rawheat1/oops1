#include <iostream>
#include <string>
using namespace std; 

// order of declaring varibles also matters

class myclass{
    int a, b, c; 
    public:
        // using intialization list in constructor
        // this is fine 
        myclass(int i, int j , int k): a(i), b(j), c(k){};

        // this is also fine
        myclass(int i, int j , int k): a(i), b(a), c(b){};

        // this is also fine
        myclass(int i, int j , int k): a(i+j+10), b(j+k), c(k+i){};

        // this will cause random garbage value
        myclass(int i, int j, int k): a(b), b(c), c(10){};
        
        void show();
};


void myclass::show(){
    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of b is : "<<b<<endl;
    cout<<"the value of c is : "<<c<<endl;
}

int main() {
    myclass m1(0,10,1);
    m1.show();
return 0;
}