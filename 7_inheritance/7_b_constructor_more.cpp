// #include <iostream>
// #include <string>
// using namespace std; 

// class base1{
//     protected:
//         int a,b;
//     public:
//         base1(int a, int b): a(a),b(b){cout<<"base 1 is called ! "<<endl;}
// };

// class base2{
//     protected:
//         int c, d;
//     public:
//         base2(int c, int d): c(c),d(d){cout<<"base 2 is called ! "<<endl;}
// };

// class derived: public base1, public base2{
//     private:
//         int pnumber;
//     public:
//         derived(int a, int b, int c, int d , int e): base1(a,b), base2(c,d), pnumber(e){cout<<"derived is called ! "<<endl;};

//         void show_data(){
//             cout<< "all data is :"<<endl;
//             cout<< "int a is "<<a<<endl;
//             cout<< "int b is "<<b<<endl;
//             cout<< "int c is "<<c<<endl;
//             cout<< "int d is "<<d<<endl;
//             cout<< "int derived private number is "<<pnumber<<endl;
//         }
// };

// int main() {
//     derived d1(1,2,3,4,5);
//     d1.show_data();
// return 0;
// }



// lets try mulilevel with constructor

#include <iostream>
#include <string>
using namespace std; 


int outside_number=10;

class first_base{
    protected:
        int a,b;
    public:
        first_base(int a , int b): a(a),b(b){cout<<"first base called\n";};
        void show_a_and_b_from_base(){
            cout<<"data from base is : "<<endl;
            cout<< "int a is "<<a<<endl;
            cout<< "int b is "<<b<<endl;
        }
};

class derived: public first_base{
    protected:
        int c,d;
    public:
        derived(int a , int b, int c, int d): first_base(a,b), c(c), d(d){cout<<"derived called\n";}
};

class morederived: public derived{
    protected:
        int e;
    public:
        morederived(int a, int b, int c, int d , int e): derived(a,b,c,d), e(e){cout<<"more derived is called."<<endl;}


        void change_all_data(){
            show();
            cout<<"change a : ";
            cin>> a;
            cout<<"change b : ";
            cin>> b;
            cout<<"change c : ";
            cin>> c;
            cout<<"change d : ";
            cin>> d;
            cout<<"change e : ";
            cin>> e;
        }
        void show(){
            cout<< "all data is :"<<endl;
            cout<< "int a is "<<a<<endl;
            cout<< "int b is "<<b<<endl;
            cout<< "int c is "<<c<<endl;
            cout<< "int d is "<<d<<endl;
            cout<< "int e is "<<e<<endl;
        }
};


int main() {
    morederived md1(1,2,3,4,5);
    md1.show();  
    //md1.change_all_data();
    //md1.show();
    md1.show_a_and_b_from_base();
return 0;
}