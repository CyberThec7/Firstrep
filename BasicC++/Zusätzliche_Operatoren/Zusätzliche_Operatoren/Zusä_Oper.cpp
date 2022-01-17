#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    /*
        variable x = (expression) ? value if true : value if false
        (?:) er macht was if macht 
    
    */
    // b إن لم تكن كذالك سيتم وضع القيمة 30 في المتغير ,b تساوي 1 سيتم وضع القيمة 20 في المتغير a إذا كانت قيمة المتغير
    int b = (a == 1) ? 20 : 30;

    cout << "b = " << b;

    // C++ هنا قمنا بطباعة الحجم الذي يتطلبه كل نوع جاهز في لغة
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;
    cout << "Size of long long int: " << sizeof(long long int) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;
   // int و نوعه x هنا قمنا بتعريف متغير إسمه
        int x = 5;

    // x هنا قمنا بطباعة الحجم الذي تم حجزه في الذاكرة من أجل المتغير
    cout << "Size of x in memory: " << sizeof(int) << " Byte\n";
    cout << "Size of x in memory: " << sizeof(char) << " Byte\n";
    // int و نوعه x هنا قمنا بتعريف متغير إسمه
    int h = 5;
    /*
        يستخدم لمعرفة عنوان المساحة المخصصة في الذاكرة للشيء الذي يتم وضعه بعده مباشرةً   &
    */
    // في الذاكرة x هنا قمنا بطباعة عنوان المساحة التي تم تخصيصها للمتغير
    cout << "Address of h in memory: " << &h<<"\n";
    // x و قمنا بتعريفه كمؤشر للمتغير y هنا قمنا بتعريف متغير إسمه
    // أصبحا يشيران لنفس القيمة المخزنة في الذاكرة y و المتغير x إذاً المتغير
    int* y = &x;
    // x و التي هي نفسها قيمة المتغير y هنا قمنا بطباعة القيمة الموضوعة في المتغير
    cout << "y contain x value which is: " << *y<<"\n";

//********************************************************************************************************
     // o هنا قمنا بتعريف متغير إسمه
    int o;
    /*
        , wird benutzt um mehrere mathematiscge Operationen ausführen in einem Variabel
    
    */
    // s تساوي 1, ثم أضفنا عليها 2, ثم ضربناها بالرقم 5. و في النهاية وضعنا الناتج في المتغير x هنا قمنا بجعل قيمة
    int s = (o = 1, o += 2, o *= 5);
    // s هنا قمنا بطباعة قيمة المتغير
    cout << "s = ((1) + 2) * 5 = " << s<< "\n";
     

    return 0;
}