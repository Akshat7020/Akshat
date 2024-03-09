#include<iostream>
using namespace std;
class user{
    private:
    string name;
    int birth_year;
    int birth_day;
    int birth_month;
    double salary;
    public:
    user(string n, int b_y, int b_d, int b_m, double sal){
        name=n;
        birth_year=b_y;
        birth_month=b_m;
        birth_day=b_d;
        salary=sal;
    }
    bool operator==(const user& other) const {
        return (birth_year == other.birth_year &&
                birth_month == other.birth_month &&
                birth_day == other.birth_day);
    }
    static double average(user& obj1, user& obj2){
        int av =(obj1.salary+obj2.salary)/2.0;
        return av;
    }
    void increment(double pre){
        salary *= ( 1.0 + pre/100.0);
    }
    int getsalary(){
        return salary;
    }
};
int main(){
    user obj1("akshat", 2005, 1, 2, 150000 );
    user obj2("manu", 2005, 13, 2, 120000 );

    int result = (obj1 == obj2)?0:(obj1.getsalary()<obj2.getsalary()?1:-1);
    cout<<"RESULT= "<<result<<endl;

    int average_sal= user::average(obj1,obj2);
    cout<<"YOUR AVERAGE SALARY OF OBJ1 AND OBJ2= "<<average_sal<<endl;

    obj1.increment(5);
    obj2.increment(10);

    cout<<"AFTER INCREMENT OF OBJ1= "<<obj1.getsalary()<<endl;
    cout<<"AFTER INCREMENT OF OBJ2= "<<obj2.getsalary()<<endl;
    return 0;
}