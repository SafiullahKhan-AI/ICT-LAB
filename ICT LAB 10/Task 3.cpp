#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string title;
    double price;

public:
    void setTitle(string t){
        title = t;
    }

    void setPrice(double p) {
        if (p >= 0){
            price = p;
        } 
        else{
            cout << "Invalid price! Price cannot be negative." << endl;
        }
    }

    string getTitle(){
        return title;
    }
    double getPrice(){
        return price;
    }
};

int main(){
    Book b1;
    b1.setTitle("Programming Fundamentals");
    b1.setPrice(200);
    b1.setPrice(400);  
    cout << "Book Title: " << b1.getTitle() << endl;
    cout << "Updated Price: Rs  " << b1.getPrice() << endl;
    return 0;
}
