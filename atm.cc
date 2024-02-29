#include<iostream>
using namespace std;
class atm{
    public:
    double balance= 500;
    double add;
    double id[10];
	double pin[10];
	void dta_id(){
		id[0]=123456;
		id[1]=123455;
		id[2]=123444;
		id[3]=123333;
		id[4]=122222;
		id[5]=111111;
	}
	void dta_pin(){
		pin[0]=1234;
		pin[1]=1233;
		pin[2]=1222;
		pin[3]=1111;
		pin[4]=4444;
		pin[5]=4321;
		
	}
	bool check() {
        cout << "enter your ID=" << endl;
        cin >> id[6];
        cout << "Enter your PIN=" << endl;
        cin >> pin[6];
        
        for (int i = 0; i < 6; ++i) {
            if (id[6] == id[i] && pin[6] == pin[i])
                return true;
        }
        return false;
    }
	
    void menu(){
        cout<<"**********MENU**********"<<endl;
        cout<<"1. Check Money"<<endl;
        cout<<"2. Deposite Money"<<endl;
        cout<<"3. Wirhdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"************************"<<endl;
        cout<<""<<endl;
    }
    void money(){
        cout<<"Your Money="<<balance<<endl;
    }
    void Deposite(){
        cout<<"Deposite Money="<<endl;
        cin>>add;
        balance += add;
        cout<<"Your Current Balance="<<balance<<endl;
    }
    void withdraw(){
        cout<<"Withdraw Money="<<endl;
        double withdr;
        cin>>withdr;
        if(withdr<=balance)
        balance -= withdr;
        else
        cout<<"Not Enough Money";
        cout<<"Your balance="<<balance<<endl;
    }
    
};
int main(){
    int c;
    atm obj;
    obj.dta_id();
    obj.dta_pin();
    if (obj.check()){
	
    do{
    obj.menu();
    cout<<"Enter your choice="<<endl;
    cin>>c;
    switch (c)
    {
    case 1:
    obj.money();
        break;
    case 2:
    obj.Deposite();
        break;
    case 3:
    obj.withdraw();
    break;
    }
    }
    while(c!=4);
}
    else{
    cout<<obj.check();
}
    return 0;
}






