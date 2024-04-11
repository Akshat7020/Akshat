//Create a class having a string pointer as an member and then store a string into it during the object creation.
//Thereafter you need to design a member function which can calculate total words present into teh string.
#include<iostream>
#include<cstring>
using namespace std;
class count{
    private:
    char *name;
    public:
    count(char *n):name(n){
        name=new char[strlen(n)+1];
        strcpy (name,n);
    }
    int words(){
        int word_count=0;
        bool inword=false;
        for(int i=0;name[i] !='\0';i++){
            if(isalpha(name[i])&& !inword){
                inword=true;
                word_count++;
            }
            else if(!isalpha(name[i])&& inword){
                inword=false;
            }
        }
        return word_count;
    }
    ~count(){
        delete[] name;
    }
};

int main(){
    count obj("Hello, My name is AKSHAT. ");
    cout<<"Total words in string = "<<obj.words()<<endl;
    return 0;
}