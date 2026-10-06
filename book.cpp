#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    float price;

    // Parameterized constructor
    Book(string t, float p) {
        title = t;
        price = p;
    }

    // Copy constructor
    Book(const Book &b) {
        title = b.title;
        price = b.price;
    }

    // Destructor
    ~Book() {
        cout << "Book destroyed" << endl;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1("C++ Basics", 500);
    Book b2(b1);

    cout << "Original book:" << endl;
    b1.display();
    cout << "Copied book:" << endl;
    b2.display();
    return 0;
}
