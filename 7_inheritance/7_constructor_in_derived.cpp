#include <iostream>
#include <string>
using namespace std; 

// correct code

// class base{
//     public:
//         int a;
//         int b;
//         base(int a1,int b1): a(a1),b(b1){};
// };

// class derived: public base{
//     public:
//         int c;
//         derived(int a,int b,int c):base(a,b), c(c){};
//         void display(){
//             cout<< "a is : "<<a<<endl;
//             cout<< "b is : "<<b<<endl;
//             cout<< "c is : "<<c<<endl;
//         }
// };

// int main() {
//     derived d1(1,2,10);
//     d1.display();
// return 0;
// }


// practice

class base{
    public: 
        int a;
        int b;
        base(int a, int b):a(a),b(b){};
};

class derived: public base{
    public:
        int c;
        derived(int a, int b, int c): base(a,b),c(c){};
        void show(){
            cout<<"data a is : "<<a<<endl;
            cout<<"data b is : "<<b<<endl;
            cout<<"data c is : "<<c<<endl;
        }
};

int main(){
    derived d1(1,2,3);
    d1.show();
}