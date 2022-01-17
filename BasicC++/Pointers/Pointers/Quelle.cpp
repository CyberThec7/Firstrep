#include <iostream>
using namespace std;
void swap1(int, int);
void swap(int&, int&);
void swap2(int*, int*);
int main()
{
    string language = "Arabic";

    // في الذاكرة language هنا قمنا بتعريف مؤشر لعنوان المتغير
    string* ptr = &language;

    // language هنا قمنا بطباعة قيمة المتغير
    cout << "language = " << language << endl;

    // في الذاكرة language هنا قمنا بطباعة عنوان المتغير
    cout << "Address of language = " << &language << endl;

    // في الذاكرة ptr هنا قمنا بطباعة عنوان المؤشر
    cout << "Address of ptr in memory = " << &ptr << endl;

    // language و التي هي عنوان المتغير ptr هنا قمنا بطباعة القيمة الموجودة في المؤشر
    cout << "Value of ptr in memory = " << ptr << endl;

    // language في الذاكرة و التي هي قيمة المتغير ptr هنا قمنا بطباعة القيمة التي يشير إليها عنوان المؤشر
    cout << "Value that ptr point to = " << *ptr << endl;
//*** Beispiel 2:***********************************************************************************************************************

    int x = 1;
    int y = 2;
    int* poi,*poi2;
    poi = &x;
    cout << "*poi = " << *poi << endl;
    // y يشير إلى عنوان المتغير poi هنا قمنا بجعل المؤشر
    poi2 = &y;
    // y من جديد و التي أصبحت قيمة المتغير poi هنا قمنا بطباعة قيمة المتغير الذي يشير إليه
  //cout << "*poi = " << *poi << endl;
  swap1(x, y);
  cout << "look what happend with x : " << x << endl;
  cout << "look what happend with y : " << y << endl;
  cout << "look what happend with x : " << &x << "  " << poi<< endl;
  cout << "look what happend with y : " << &y << "  " << poi2 << endl;
 swap(x, y);
  cout << "look what happend with x : " << x << endl;
  cout << "look what happend with y : " << y << endl;// ****ACHTUNG nun andere WEISE FÜR GLEICHE ERGEBNISS***** swap == swap2 ****
  cout << "look what happend with x : " << &x << "  " << poi << endl;
  cout << "look what happend with y : " << &y << "  " << poi2 << endl;// ****ACHTUNG nun andere WEISE FÜR GLEICHE ERGEBNISS***** swap == swap2 ****

  swap2(poi,poi2);// kann so geschrieben swap2(&x,&y);
  cout << "look what happend with x : " << x << endl;
  cout << "look what happend with y : " << y << endl;
  cout << "look what happend with x : " << &x << "  " << poi << endl;
  cout << "look what happend with y : " << &y << "  " << poi2 << endl;
//**************************************************************************************************************************************

  //من خلال المؤشر قمنا بتغيير قيمة المتغير
  int* klr = &x;
  // إلى 5 poi هنا قمنا بتغير قيمة المتغير الذي يشير إليه المؤشر
  *klr = 5;
  // للتأكد ما إن كانت قد تغيرت أم لا x هنا قمنا بطباعة قيمة المتغير
  cout << "x = " << x << endl;
  // x و التي هي نفسها قيمة المتغير poi هنا قمنا بطباعة قيمة المتغير الذي يشير إليه
  cout << "*klr = " << *klr;
  //************************************************************************************************************************************

 float durchssschnitt = 6.7;
 float* point = &durchssschnitt;
 cout << point << endl;
 cout << &point << endl;
 cout << *point << endl;
 *point += 100;
 cout <<"das durchschnitt ist :" << durchssschnitt << endl;
 //*************************************************************************************************************************************

 int msg[] = { 1,2,3,4,5,6 };// du musst wissen das msg selber ist nen Pointer und bezeichnet auf das ersten Wert in Array 
 cout << *msg + 2 << endl;
 int* poin = msg;
 *poin = 9;// da haben wir das erste Wert im Array gewechselt  
 cout << msg[0] << endl;
 cout << poin << endl;
 poin++;
 cout << poin << endl;// here wird 4 Byte mehr auf die Adresse von poin, da ist er int 
 *poin = 30;
 for (int i = 0; i < 6; i++)
     cout << msg[i] << endl;
 //*************************************************************************************************************************************
 int mog[] = { 1,24,56,7,68,97,4,3,588,456,56 };
 int* prt;
 prt = mog;
 
 cout << prt << endl;
 prt++;
 cout << prt<< endl;// here wird 4 Byte mehr auf die Adresse von prt, da ist er int 
//**************************************************************************************************************************************

char mig[] = "WAHHAB";
char* prit;
 prit = mig;
 *prit = 'Z';
 prit++;
 *prit = 'O';// here wird 1 Byte mehr auf die Adresse von prt, da ist er char
 prit += 2;
 *prit = 'P';
 cout << mig<< endl;

  
//**************************************************************************************************************************************
    int zahlen[5] = { 2245,245,8676,212,998 };
    // wichtig: das normale Weise die elemente zu ausdruckemn:
    for (int i = 0; i < 5; i++)
        cout << zahlen[i] << " ";
    cout << endl;
    // wichtig ** die elemente mit pointer zu schreiben/ ausdrucken:
    for (int i = 0; i < 5; i++)
        cout << *(zahlen + i)<< " ";// ACHTUNG wenn du den star * nicht schreiben dann  wird die Adressen ausgedrugt werden
    cout << endl;
    for (int i = 0; i < 5; i++)
        cout << zahlen + i << " ";// ACHTUNG hier nur Adressen
    cout << endl;

  return 0;
}
void swap1(int ö, int ä)
{
    int temp;
    temp = ä;
    ä = ö;
    ö = temp;
}
void swap(int& ö, int& ä)
{
    int temp;
    temp = ä;
    ä = ö;
    ö = temp;
}
void swap2(int*d, int*r)
{
    int temp;
    temp = *d;
    *d = *r;
    *r = temp;
}
