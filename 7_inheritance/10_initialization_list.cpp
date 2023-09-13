#include <iostream>
#include <string>
using namespace std; 

/*
syntax for initialization list in constructor

    constructor (argument-list) : initization-section
    {
        assigmment + other code;
    }


example:
class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor body};
};

*/


class myclass{
    int a, b, c;
    public:

        myclass(int a, int b, int c);

        // all types of constructors-

        // 1. constructor with same parameter name and using arrow
        myclass(int a, int b , int c){
            this->a=a;
            this->a=b;
            this->c=c;
        }

        // 2. constructor with diff parameter name
        myclass(int a1, int b1, int c1){
            a=a1;
            b=b1;
            c=c1;
        }

        // 3. constructor using Initialization list
        // here even parameter name is same we dont need arrow 
        //    because we are not going inside a scope

        myclass(int a, int b, int c) : a(a), b(b), c(c){
        };

        // 4. constructor using Initialization list but diff para name

        myclass(int a1, int b1, int c1): a(a1), b(b1), c(c1){
        };

        void show();
};


// I can member functions outside the class using scope resolution operator
myclass:: myclass(int a, int b, int c){
    this->a= a;
    this->b= b;
    this->c= c;
};

void myclass::show(){
    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of b is : "<<b<<endl;
    cout<<"the value of c is : "<<c<<endl;
}

int main() {
    myclass m1(1,2,3);
    m1.show();
return 0;
}