#include <iostream>
#include <string>
using namespace std; 

class base{

    private:
        int a;
        int b;

    public:
        base(int a, int b): a(a), b(b){
            cout<< "base constructor called !"<<endl;
        };
        void printit(){
            cout<<"a and b are : "<<a <<"  "<<b<<endl;
        }

        int geta(){
            return a;
        }

        int getb(){
            return b;
        }
        
};


class derived : public base{
    private:
        int d;
        int e;
        int f;
    public:
        derived(int a, int b): base (a, b){
            
            this->d=0;
            this->e=10;
            this->f=20;
        }

        void printnew(){
            cout<< "new data is "<< geta()<< endl;
            cout<< "new data is "<< getb()<< endl;
            cout<< "new data is "<< d<< endl;
            cout<< "new data is "<< e<< endl;
            cout<< "new data is "<< f<< endl;
        }
};

int main() {
    derived d1(1,2);
    d1.printnew();
return 0;
}