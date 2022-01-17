#include <iostream>
using namespace std;
int main()
{
    // لتخزين المعلومات التي سيدخلها المستخدم لاحقاً email و name قمنا بتجهيز المتغيرين
    string name;
    string email;
    // name هنا سيطلب من المستخدم إدخال إسمه و من ثم سيتم تخزين الإسم الذي يدخله في المتغير
    cout << "Enter your name: ";
    // cin nimmt nur ein Wort oder Alphabet oder zahl oder character
    cin >> name; // damit die nachname oder irgendwas noch schreiben here muss es sohne leertaste schreiben oder schreib noch >> ..... ansonsten was du here als zweitens schreiben wird bei Email geschrieben werden
    // email هنا سيطلب من المستخدم إدخال بريده الإلكتروني و من ثم سيتم تخزين البريد الذي يدخله في المتغير
    cout << "Enter your email: ";
    cin >> email;
    // في الأخير قمنا بعرض المعلومات التي يدخلها المستخدم بشكل مرتب
    cout << "\n\n---------------------";
    cout << "\nName = " << name; // <- name فقط في المتغير Mhamad لاحظ أنه قام بوضع
    cout << "\nEmail = " << email; // <- بشكل تلقائي email في المتغير Harmush لاحظ أنه قام بوضع
   // to macke cin take more than one word, we use this :getline(cin, name);
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // في الأخير قمنا بعرض المعلومات التي يدخلها المستخدم بشكل مرتب
    cout << "Welcome " << name;

    return 0;
}