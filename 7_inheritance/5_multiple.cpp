// hierarchicla inheritance where one derived class is inheriting from multiple base classes

#include <iostream>
#include <string>
using namespace std; 

class person{
    public:
        string name;
        person(){};
        person(string name_){
            name= name_;
        }
};


class student{
    public:
        int class_studying;
        int student_id;
        student(int class_studying_, int student_id_){
            class_studying= class_studying_;
            student_id= student_id_;
        }
};

class intelegent_student : public person, student{
    public:
        intelegent_student(string name,int class_studying,int student_id):person(name), student(class_studying,student_id){};
        int iq=100;
        void display(){
            cout<<"name is : "<<name<<endl<< "studying in : "<<class_studying<<endl<<"student id is "<<student_id<<endl;
            cout<<"iq is "<<iq<<"\n\n";
        }
};

int main() {
    intelegent_student topper("rohit",1002,01);
    topper.display();

    intelegent_student second_topper("sagar",1003, 02);
    second_topper.display();

return 0;
}