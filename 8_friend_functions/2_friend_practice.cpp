#include <iostream>
#include <string>

// This a code for friend functions which is used to access the data of private varibles of a class outside the class
// using a function 

using namespace std; 

class base{
    private:
        int a;
        int b;
    public:
        friend base add_both(base b1, base b2);
        void set_data(int a, int b){
            this->a=a;
            this->b=b;
        }
        void get_data(){
            cout<< "The data is - "<<endl;
            cout<< a <<endl;
            cout<< b <<endl;
        }
};

base add_both(base b1, base b2){
    base b3;
    b3.set_data(b1.a+b2.a, b1.b+b2.b);
    b3.get_data();
}


int main() {
    base b1;
    b1.set_data(1,1);
    b1.get_data();
    base b2;
    b2.set_data(3,2);
    b2.get_data();
    base b3;
    b3= add_both(b1,b2);
return 0;
}