#include <iostream>
#include <string>
using namespace std; 

class base{
    
    public:
        base(){
            display();
        }
        virtual void display(){
            cout<<"\n*****New object is created.*****\nbase display"<<endl;
        }
        //virtual void display()=0;
};

class derived: public base{
    public:
        derived(){
            display();
        }
        void display(){
            cout<<"derived display"<<endl;
        }
};

class multi_derived : public derived{
    public:
        multi_derived(){
            display();
        }
        void display(){
            cout<<"multi derived display"<<endl;
        }
};

int main() {
    base *pointer1;
    multi_derived *m1= new multi_derived;
    pointer1= m1;
    pointer1->display();   // poineter is pointing to multidispay but output is base display
                           // this is because pointer is of class type base so it can only use that methods
                           // In order to use multiderived display you need to add virtual keyword in base class.
    delete(m1);
    delete pointer1;

    base *pointer2;
    derived *d2= new derived;
    pointer2=d2;
    pointer2->display();   // because virtual keyword is used so it will call the desired class implimentation
return 0;
}