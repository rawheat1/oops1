#include <iostream>
#include <string>
using namespace std; 

// This is hiearchial inheritance where more than one derived classes are inheriting from a base class

class shape{    
    public:
        void display(){cout<<"this is wrong.";};
};

class rectange: public shape{
    private:
        int x;
        int y;
    public:
        void set_x_and_y(int x, int y){
            this->x=x;
            this->y=y;
        };
        void display(){
            cout<< "The shape is rectange having \n";
            cout<< "x = "<<x<<" and y = "<<y<<endl;
            cout<< "********\n";
        }
};

class circle : public shape{
    private:
        int radius;
    public:
        void set_radius(int radius){
            this->radius= radius;
        }

        void display(){
            cout<< "The shape is circle having \n";
            cout<< "radius = "<<radius<<endl;
            cout<< "********\n";
        }
};


int main() {
    rectange r1;
    r1.set_x_and_y(2,2);
    r1.display();

    circle c1;
    c1.set_radius(5);
    c1.display();

    // shape *pointer;    // this code is useless because it is calling base class
    // circle c2;
    // c2.set_radius(4);
    // pointer= &c2;
    // pointer->display();
return 0;
}