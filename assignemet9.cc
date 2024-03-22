#include <iostream>
using namespace std;
class Number {
private:
    int num;
public:
    Number(int n){
        num=n;
    }
    void display(){
        cout<<"YOUR ANSWERE= "<<num<<endl;
    }
    friend Number operator+( Number obj,  Number obj1);
    friend Number operator-(Number obj, Number obj1);
};

Number operator+( Number obj,  Number obj1) {
    int add = obj.num + obj1.num;
    return Number(add);
}
Number operator-( Number obj, Number obj1){
    int min = obj.num - obj1.num;
    return Number(min);
}

int main() {
    Number obj(5);
    Number obj1(10);
    Number add = obj + obj1;
    Number min= obj - obj1;
    add.display();
    min.display();
    return 0;
}
