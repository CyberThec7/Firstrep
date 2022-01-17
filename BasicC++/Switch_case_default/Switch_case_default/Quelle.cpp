#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "please enter value for x\n";
	cin >> x;
	switch (x)
	{
	case 12 :
		cout << "its case one \n";
		break;
	case 33 :
		cout << "its case two \n";
		break;
	case 94 :
		cout << "its case 100 \n";
		break;
	default :
		cout << "its defualt case \n";
	}
	/*
		was in switch geht nur int - byte - short - char - String - enum.
		es kann nicht sein mit float oder double 
	    muss fest wert auch kann nicht sein >= oder <= ...usw.
	*/
	char i=3;
	switch (i)     // x إختبر قيمة المتغير
	{
	case 1:     // في حال كانت تساوي 1 أو 2 أو 3 سيتم تنفيذ أمر الطباعة
	case 2:
	case 3:
		cout << "i contain 1 or 2 or 3";
		break;

	default:    // في حال كانت لا تساوي أي قيمة من القيم الموضوعة سيتم تنفيذ أمر الطباعة الموضوع فيها
		cout << "i contain a different value";
	}
	return 0;
}