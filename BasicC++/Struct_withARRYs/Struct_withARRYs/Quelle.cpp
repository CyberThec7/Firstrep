#include <iostream>
using namespace std;
struct student // ARRAY in STRUCT********
{
	int stu_ID;
	string stu_name;
	float stu_durchschnitt;
	float stu_noten[3];
};
// STRUCT in ARRY*********
struct schuler 
{
	int stu_ID =0;
	string stu_name;
	float stu_durchschnitt;
	float stu_noten[3];
};
int main()
{
	student x;
	x.stu_ID = 245;
	x.stu_name = "Wahab Alhamad";
	x.stu_noten[0] = 86;
	x.stu_noten[1] = 89;
	x.stu_noten[2] = 90;
	x.stu_durchschnitt = 1.3;
	for (int i=0; i <3; i++)
	{
		cout << x.stu_noten[i] << endl;
	}
	
	schuler jungs[6];
	jungs[0].stu_ID = 3555;
	jungs[0].stu_durchschnitt = 1.4;
	jungs[1].stu_ID = 2365; 
	cout << x.stu_durchschnitt << endl << jungs->stu_ID << endl;
	// ................... usw.
	for (int i = 0; i < 6; i++) 
	{
		cout << "enter schuler stu_ID ,stu_name, stu_durchschnitt ,stu_noten[3]"<<"\n";
		cin>> jungs[i].stu_ID >> jungs[i].stu_name >> jungs[i].stu_durchschnitt;
	
	 cout << jungs[i].stu_ID << " "<<jungs[i].stu_name << " " << jungs[i].stu_durchschnitt << endl;
	}
}