//12 inches = 1 feet
//any number divided by 12 is equal to feet
//any number multiply by 12 is equal to inches

#include<iostream>
using namespace std;
class small_unit;
class large_unit;

class small_unit{
    private:
    int inches;
    public:
    small_unit(int inches):inches(inches){}
    operator large_unit();

    void display(){
        cout<<"In inches = "<<inches<<" inches"<<endl;
    }
};

class large_unit{
    private:
    int feet;
    public:
    large_unit(int feet):feet(feet){}
    void display(){
    cout<<"In feets = "<<feet<<"feet"<<endl;
    }
};

small_unit::operator large_unit(){
    return large_unit(inches/12);
}

int main(){
    small_unit obj(120);
    large_unit obj1=obj;

    obj.display();
    obj1.display();
    return 0;
}