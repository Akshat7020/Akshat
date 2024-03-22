#include<iostream>
using namespace std;
class integer{
    private:
    int n;
    int total=0;
    public:
    void getdata(){
        cout<<"Enter any positive integer= "<<endl;
        cin>>n;
    }
    int sum(){
        for(int i=1;i<=n;i++){
        total=total+i*(i+1)/2;
        }
        return total;
    }
};
int main(){
    integer obj;
    obj.getdata();
    cout<<"Your output is= "<<obj.sum()<<endl;
    return 0;
}