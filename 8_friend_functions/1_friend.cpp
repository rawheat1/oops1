#include <iostream>
#include <string>
using namespace std; 

class complex{

    private:
        int a,b;

    public:
        void setnumebers(int n1, int n2){
            a=n1;
            b=n2;
        }

        void printNumber(){
            cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
        }

        friend complex sumcomplex(complex o1, complex o2);
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnumebers(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main() {
    complex c1;
    c1.setnumebers(1,2);
    c1.printNumber();
    complex c2;
    c2.setnumebers(3,4);
    c2.printNumber();

    complex sum;
    sum = sumcomplex(c1,c2);
    sum.printNumber();
    
return 0;
}