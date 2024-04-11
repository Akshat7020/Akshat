#include<iostream>
using namespace std;
class matrix{
private:
    int square[3][3];
public:
    void set(){
        cout << "Enter the elements of matrix: ";
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> square[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cout<<square[i][j]<< " ";
            }
            cout << endl;
        }
    }
    matrix operator+(matrix& obj2){
        matrix obj3;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                obj3.square[i][j] = this->square[i][j] + obj2.square[i][j];
            }
        }
        return obj3;
    }
};
int main(){
    matrix obj1, obj2;
    
    obj1.set();
    obj2.set();

    matrix obj3 = obj1 + obj2 + obj1;

    cout << "The Sum of two matrices is: " << endl;

    obj3.display();

    return 0;
}