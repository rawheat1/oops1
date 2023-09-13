#include <iostream>
using namespace std;

// In this code we are using friend functions to access the data of private variables and manipulate the data of the private variables

class myclass{
    private:
        int a;
        int b;
    public:
        myclass(int a,int b):a(a),b(b){};
        void display(){
            cout<< "the value of a is : "<<a<<endl;
            cout<< "the value of b is : "<<b<<endl;
        }

        friend void access_my_class(myclass obj);
        friend void access_two_classes(myclass obj1, myclass obj2);
        friend void manipulation(myclass &obj1, myclass &obj2);
};


void access_my_class(myclass obj){
    cout<<"this output is with using friend function :"<<endl;
    obj.display();
}

void access_two_classes(myclass obj1, myclass obj2){
    cout<<"this output is with using two class friend function :"<<endl;
    obj1.display();
    obj2.display();
}

void manipulation(myclass &obj1, myclass &obj2){
    obj1.a=10;
    obj2.a=10;
}


int main(){
    myclass m1(1,2);
    myclass m2(2,3);
    // access_my_class(m1);
    // access_two_classes(m1,m2);
    manipulation(m1,m2);
    m1.display();
    m2.display();

    return 0;
}