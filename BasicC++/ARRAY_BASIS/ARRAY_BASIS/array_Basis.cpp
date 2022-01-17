/*#include <iostream>
using namespace std;
int main()
{
	int salary[10];
	float sum = 0.0;
	for (int i = 0; i < 10; i++)
	{
		cout << "please enter 10 Salaries for 10 Employee \n";
		cin >> salary[i];
		cout << "the salary after 10% is  \n";
	}
	for (int i = 0; i < 10; i++)
	{
	salary[i] += salary[i] * 0.10;// salary[i]+= salary[i] heißt salary[i]+ salary[i]
	cout << salary[i] << "\n";
	}
	for (int i = 0; i < 10; i++)
	{
		sum += salary[i];
	}
	cout << "Summe ist  " << sum << "\n";
	cout << "AVG is  " << sum / 10 << "\n";
}*/// kann noch verbessern und verküzer sein
#include <iostream>
using namespace std;
int main()
{
int salary[10];
float sum = 0.0;
	for (int i = 0; i < 10; i++)
	{
	cout << "please enter 10 Salaries for 10 Employee \n";
	cin >> salary[i];// [i] da der nutzer gibt uns die Werte
	cout << "the salary after 10% is  \n";
	salary[i] += salary[i] * 0.10;// salary[i]+= salary[i] heißt salary[i]+ salary[i]
	cout << salary[i] << "\n";
	}
	for (int i=0; i<10; i++)
	{ 
		sum += salary[i];	
	}
	cout << "Summe ist  " << sum << "\n";
	cout << "AVG is  " << sum / 10 << "\n";

	// هنا قمنا بتعريف مصفوفة تتألف من 5 عناصر حيث وضعنا فيها 5 قيم رقمية و كل قيمة سيتم وضعها في عنصر
	int arr[] = { 1, 2, 3, 4, 5 };

	// n على حجم نوع أول عنصر فيها, و من ثم قمنا بتخزين الناتج في المتغير arr هنا قمنا بقسمة عدد عناصر المصفوفة
	int n = sizeof(arr) / sizeof(arr[0]);

	// n الذي قمنا بتخزينه في المتغير arr هنا قمنا بطباعة عدد عناصر المصفوفة
	cout << "Number of elements in the array is: " << n<<endl;
	// الحلقة foreach في C++:

	// هنا قمنا بإنشاء مصفوفة تحتوي على 3 قيم نصية
	string fruits[] = { "Apple", "Banana", "Orange" };

	// element في المتغير fruits هنا في كل دورة سيتم تخزين قيمة عنصر من عناصر المصفوفة
	for (string element : fruits)
	{
		// element هنا سيتم عرض القيمة التي تخزنت في المتغير
		cout << element << endl;
	}
	return 0;
}