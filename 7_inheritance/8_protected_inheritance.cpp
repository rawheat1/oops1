#include <iostream>
#include <string>
using namespace std; 

class base1{
    protected:
        int a;
        int b;
    public:
        base1(int a, int b): a(a),b(b){cout<<"base constructor called : "<<endl;};
};

class base2{
    protected:
        int c;
        int d;
    public:
        base2(int c, int d): c(c),d(d){cout<<"base2 constructor called : "<<endl;};
};

class derived: protected base1, protected base2{
    public:
        derived(int a, int b, int c, int d): base1(a,b), base2(c,d){
            cout<<"derived constructor called : "<<endl;
        }

        void show(){
            cout<<"int a : "<<a<<endl;
            cout<<"int b : "<<b<<endl;
            cout<<"int c : "<<c<<endl;
            cout<<"int d : "<<d<<endl;
        };
};

int main() {
    derived d1(1,2,3,4);
    d1.show();
return 0;
}