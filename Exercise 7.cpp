#include <iostream>
#include <string>

using namespace std;

class Book{
    string bookName;
    int ISBN;
    string authorName;
    string publisherName;

    public:

    Book(string BN, int isbn, string author, string publisher){
        bookName = BN;
        ISBN = isbn;
        authorName = author;
        publisherName = publisher;
    }

    string getBookInfo(){
        string isbn = to_string(ISBN);

        return "Book: " + bookName + "\nISBN: " + isbn + "\nAuthor: " + authorName + "\nPublisher: " + publisherName; 
    } 

    bool bookQuery(string bookName){
        if (this->bookName == bookName){
            cout << this->getBookInfo() << endl;
            return true;
        } 
        return false;
    }

    bool ISBNQuery(int ISBN){
        if (this->ISBN == ISBN){
            cout << this->getBookInfo() << endl;
            return true;
        }
        return false;
    }

    bool authorQuery(string authorName){
        if (this->authorName == authorName){
            cout << this->getBookInfo() << endl;
            return true;
        }
        return false;
    }

    bool publisherQuery(string publisherName){
        if (this->publisherName == publisherName){
            cout << this->getBookInfo() << endl;
            return true;
        }
        return false;
    }
};

int main(){
    Book library[5] = {
        Book("Veronika Decides to Die", 1001, "Paulo Coelho", "HarperCollins"),
        Book("If We Were Villains", 1002, "M.L. Rio", "Flatiron Books"),
        Book("The Secret History", 1003, "Donna Tartt", "Knopf"),
        Book("The Alchemist", 1004, "Paulo Coelho", "HarperOne"),
        Book("Babel", 1005, "R.F. Kuang", "Harper Voyager")
    };

    cout << "--- Full Library Catalog ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << library[i].getBookInfo() << endl << endl;
    }

    cout << "--- Testing Search Queries ---" << endl;
    bool foundName = false;
    for (int i = 0; i < 5; i++) {
        if (library[i].bookQuery("If We Were Villains")) {
            foundName = true;
        }
    }
    if (!foundName) cout << "Result: Book not found." << endl;

    bool foundAuthor = false;
    for (int i = 0; i < 5; i++) {
        if (library[i].authorQuery("Paulo Coelho")){
            foundAuthor = true;
        }
    }
    if (!foundAuthor) cout << "Result: Author not found." << endl;

    bool foundISBN = false;
    for (int i = 0; i < 5; i++) {
        if (library[i].ISBNQuery(1001)){
            foundISBN = true;
        }
    }

    if (!foundISBN) cout << "Result: ISBN not found." << endl;

    bool foundPublisher = false;
    for (int i = 0; i < 5; i++) {
        if (library[i].publisherQuery("Flatiron Books")){
            foundPublisher = true;
        }
    }

    if (!foundPublisher) cout << "Result: Publisher not found." << endl;
}