#include <iostream>
using namespace std;

// This is abstract classes where atleast on virtual function is used in class.

class base{
    public:
        base(){
            cout<<"base constructor called."<<endl;
        }
        virtual void area()=0;   // now it is necessary to implement(override) this function in derived class
        virtual void display()=0;  // additional neccessary implimantation
};

class derived1 : public base{
    private:
        int x;
        int y;
    public:
        derived1(){
            cout<<"derived constructor is called."<<endl;
        }
        void set_data(int x , int y){
            this->x=x;
            this->y=y;
        }

        int findarea(int x , int y){
            return x*y;
        }

        void area(){
            cout<<"area is "<<findarea(x,y)<<endl;
        }
        void display(){
            cout<<"the x is : "<<x<<endl<<"the y is : "<<y<<endl;
        };
};

int main(){
        derived1 d1;
        d1.set_data(2,4);
        d1.display();
        d1.area();
    return 0;
}