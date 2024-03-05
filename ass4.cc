#include<iostream>
using namespace std;
class calculator{
	private:
		float c;
		char z;
	public:
	int   compute( int a ,  int b){
		cout<<"SUM OF INT AND INT--"<<endl;
		c=a+b;
		return c;
	}
	float compute(float a , int b){
		cout<<"SUM OF FLOAT AND INT--"<<endl;
		c=a+b;
		return c;
	}
	double compute(double a, int b ){
		cout<<"SUM OF DOUBLE AND INT--"<<endl;
		c=a+b;
		return c;
	}
	int compute(char a, char b){
		cout<<"SUM OF CHAR AND CHAR--"<<endl;
		return a+b;
	}
	char compute(char a , int b){
		cout<<"SUM CHAR AND INT--"<<endl;
		z=a+b;
		return z;
	}

	int compute(){
		int a=10,b=20;
		cout<<"SUM OF NON PAMATERIZE--"<<endl;
		c=a+b;
		return c;
	}
};
int main(){
	calculator obj;
	
	cout<<obj.compute(4,2)<<endl;
	cout<<obj.compute( 12.1f , 10)<<endl;
	cout<<obj.compute(1223.5,4)<<endl;
	cout<<obj.compute('a', 3)<<endl;
	cout<<obj.compute('a','b')<<endl;
	cout<<obj.compute()<<endl;
	return 0;
}