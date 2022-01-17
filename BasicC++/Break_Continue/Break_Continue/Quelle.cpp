#include <iostream>
using namespace std;
int main()
{
	
	for (int i = 1; i < 10; i++)
	{
		
			if (i == 9)
			{ 
				break; // lässt die Schlrife nicht weiter...... nach 8, das heißt die 9 wird nicht geschrieben 
			}
			// في كل دورة سيتم فحص قيمة العداد, عندما تصبح تساوي 3 سيتم الإنتقال إلى الدورة التالية في الحلقة بدون تنفيذ أمر الطباعة الموضوع بعدها
			if (i == 3) 
			{
				continue; // nummer 3 wird nicht geschrieben 
			}
			cout << "NO hell no no no no "<<i <<"\n";
	}	//****************************************************************************************************************************************
	for (int x = 1; x <= 60; x++)
	{
		// في كل دورة سيتم فحص قيمة العداد, في حال كانت زوجية سيتم الإنتقال إلى الدورة التالية في الحلقة بدون تنفيذ أمر الطباعة الموضوع بعدها
		if (x % 2 == 0)
		{
			continue;
		}
		cout << "WTF" << x << "\n";
	}
	return 0;
}