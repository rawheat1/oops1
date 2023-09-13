#include <iostream>
#include <string>
using namespace std; 

class shape{    

    public:     /* using virtual keyword allows us to use derived class 
                   implimintation of functions while pointer is of class base*/
        virtual void display(){};
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
        };
        
};

class circle : public shape{
    private:
        int radius;
    public:
        void set_radius(int radius){
            this->radius= radius;
        };

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

    shape *pointer;    // pointer is of class base but implimintation is used of class derived
    circle c2;
    c2.set_radius(4);
    pointer= &c2;
    pointer->display();
return 0;
}