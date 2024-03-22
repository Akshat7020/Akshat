#include <iostream>
using namespace std;
class Library {
private:
    int isbns[3];
    string titles[3];
public:
    Library() {
        isbns[0] = 1;
        titles[0] = "C++ BOOK";
        isbns[1] = 2;
        titles[1] = "MATHS";
        isbns[2] = 3;
        titles[2] = "NETWORKING";
    }
    void find( int number) {
        bool found = false;
        for (int i = 0; i < 3; ++i) {
            if (isbns[i] == number) {
                cout << "Book found: " << titles[i] << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Book with ISBN " << number << " is not available in the library." << endl;
        }
    }
};
int main() {
    Library library;
    int num;
    cout << "Enter the ISBN of the book: ";
    cin >> num;
    library.find(num);
    return 0;
}

