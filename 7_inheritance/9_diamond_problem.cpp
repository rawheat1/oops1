// #include <iostream>
// #include <string>
// using namespace std; 

// class base{
//     public:
//         int b1;
// };

// class derived1:public base{        // here this has b1;
//     public:
// };

// class derived2: public base{       // here this also has b1;  so this creates ambiguity
//     public:

// };

// class childderived: public derived1, public derived2{
//     public:
//         void display(){
//             cout<<b1<<endl;
//         }
// };

// int main() {
//     childderived chdr1;
//     chdr1.display();
// return 0;
// }


// to solve this we use virtual when creating derived class

#include <iostream>
#include <string>
using namespace std; 

class base{
    public:
        int b1=1190;
};

class derived1:virtual public base{
    public:
};

class derived2:virtual public base{
    public:

};

class childderived: public derived1, public derived2{
    public:
        void display(){
            cout<<b1<<endl;
        }
};

int main() {
    childderived chdr1;
    chdr1.display();
return 0;
}