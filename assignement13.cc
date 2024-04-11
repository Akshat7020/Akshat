#include<iostream>
using namespace std;
class pizza{
    private:
    int no_of_pizza;
    public:
    int number_pizza(){
        cout<<"Number of pizza = "<<endl;
        cin>>no_of_pizza;
        return no_of_pizza;
    }
};
class fries:public pizza{
    private:
    int no_of_packets;
    public:
    int number_fries(){
        cout<<"Number of Fries packets = "<<endl;
        cin>>no_of_packets;
        return no_of_packets;
    }
};

class total:public fries{
    private:
    int pizza=120;
    int fries=50;
    int grand_total;
    public:
    int sum(){
        int pizza_total=number_pizza()*pizza;
        int fries_total=number_fries()*fries;
        int result=pizza_total+fries_total;
        return result;
    }
};
int main(){
    total obj;
    cout<<"Your Grand Total is = "<<obj.sum();
    return 0;
}