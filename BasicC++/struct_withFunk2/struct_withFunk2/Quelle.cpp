#include <iostream>
using namespace std;
struct Book // funktion in Struct
{
    string title;
    string author;
    double price;
    int numberOfPages;

    // تقوم بطباعة كل قيم المتغيرات الموجودة فيه Book عند استدعاء من أي كائن ننشئه من printInfo هنا قمنا بتعريف دالة إسمها
    void printInfo()
    {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Price: " << price << "$\n";
        cout << "Number of pages: " << numberOfPages << "\n";
    }
};
void printInfo(struct Book* book)
{
    cout << "Title: " << book->title << "\n";
    cout << "Author: " << book->author << "\n";
    cout << "Price: " << book->price << "$\n";
    cout << "Number of pages: " << book->numberOfPages << "\n";
}
int main()
{
    struct Book book;
    // book هنا قمنا بإعطاء قيم لمتغيرات الكائن
    book.title = "C++ for beginners";
    book.author = "Mhamad Harmush";
    book.price = 9.99;
    book.numberOfPages = 420;

    // حتى تقوم بطباعة القيم الموجودة فيه book من الكائن printInfo() هنا قمنا باستدعاء الدالة
    book.printInfo();
    printInfo(&book);

    return 0;
}