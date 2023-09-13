#include <iostream>
using namespace std;

class Number
{
private:
    int num1;
    int num2;

public:
    friend void take_a_look_on_num1(Number n1);
    friend void look_at_num2(Number n1);
    void set_numbers(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    void show_numbers()
    {
        cout << "numbers are " << num1 << "  " << num2 << endl;
    }
};

void take_a_look_on_num1(Number n1)
{
    cout << "taking a look at n1 : " << n1.num1 << endl;
}

void look_at_num2(Number n1){
    cout<< "looking at n2 : "<<n1.num2<<endl;
}

int main()
{
    Number n1;
    n1.set_numbers(1, 2);
    n1.show_numbers();
    take_a_look_on_num1(n1);
    look_at_num2(n1);
}