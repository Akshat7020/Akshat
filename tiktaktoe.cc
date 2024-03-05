#include<iostream>
using namespace std;
class tik{
    private:
    char table[3][3]={{'1','2','3',},
                    {'4','5','6'},
                    {'7','8','9'} };
                    char player = 'x';
                    int r, c;
    public:
    void display(){
        cout<<"Tic-Tac-Toe"<<endl;
        cout<<""<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"| "<<table[i][j]<<" ";
            }
            cout<<"|"<<endl;
            cout<<""<<endl;
        }
    }
    bool check(){
        for(int i=0;i<3;++i){
            if((table[i][0]==table[i][1] && table[i][1]==table[i][2]||
                table[0][i]==table[1][i] && table[1][i]==table[2][i] )){
                    return true;
                }
        }
        if((table[0][0]==table[1][1] && table[1][1]==table[2][2] ||
        table[0][2] ==table[1][1] && table[1][1]==table[2][0])){
                return true;
        }
        return false;
    }
    bool draw(){
        for(int i=0;i<3;++i){
            for(int j=0;j<3;++j){
                if (table [i][j]!='x' && table[i][j]!='o'){
                    return false;
                }
            }
        }
        return true;
    }
    void he(){
        while (true){
            display();
            cout<<"player "<<player <<" enter row and column="<<endl;
            cin>>r>>c;
        if(r >= 0 && r < 3 && c >= 0 && c < 3 && table[r][c] != 'x' && table[r][c] != 'o') {
            table[r][c] = player;

            if(check()) {
                display();
                cout << "Player " << player << " wins!" << endl;
                break;
            } else if(draw()) {
                display();
                cout << "It's a draw!" << endl;
                break;
            } else {
                player = (player == 'x') ? 'o' : 'x';
            }
        } else {
            cout << "Invalid move! Try again." << endl;
        }
    }
    }

};
int main(){
    tik obj;
    obj.check();
    obj.draw();
    obj.he();
    return 0;
}