#include<iostream>
using namespace std;
class B;
class A{
    private:
    int a;
    public:
    A(int a):a(a){}
    int friend operator+(A& obja, B& objb);
};
class B{
    private:
    int b;
    public:
    B(int b):b(b){}
    int friend operator+(A& obja, B& objb);
};
int operator+(A& obja, B& objb){
    return obja.a+objb.b;
}

int main(){
    A obja(30);
    B objb(40);
    int result =(obja+objb);
    cout<<result;
    return 0;
}
