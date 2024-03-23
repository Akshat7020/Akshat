#include <iostream>
using namespace std;
class Library {
private:
    double isbns[3];
    string titles[3];
public:
    Library() {
        isbns[0] = 1234567890123;
        titles[0] = "C++ BOOK";
        isbns[1] = 23445678901234;
        titles[1] = "MATHS";
        isbns[2] = 3456789012345;
        titles[2] = "NETWORKING";
    }
    void find( double number) {
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
    double num;
    cout << "Enter the ISBN of the book: ";
    cin >> num;
    library.find(num);
    return 0;
}

