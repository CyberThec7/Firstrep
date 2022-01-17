#include <iostream>
using namespace std;
int main()
{

	string firstname = "Wahab", lastname = "Alhamad", fullname = firstname +" "+lastname;// fullname = firs..+" "+ last.. das heißt Konkatenation oder Verknüpfung دمج

	cout << fullname<<"\n";
	string a = " you are wrong if you think you win the fight when you lose your manners ";
	cout << a.length()<<"\n"; // das heißt zahl den Text Alphabets : wieviel sind die Alphabet *** Fängt von 0 an ****** alles wird gerechnet das punkt und leertaste koma ... usw.
	cout << a.size() << "\n"; // die gleiche von a.length
	cout << a[23] << a[34]<< a[19]<< a[70]<<"\n"; // schreibt die Alphabet, die nimmt diese nummern
	cout << a.substr(12,40) << "\n"; // schreibt alle Alphabet von ... bis
	/*
	im nächsten Beispiel wir suchen nach einem kompletten Text oder n Wort oder n Alphabet und wollen wisssen
	wo sind die, in welchem adresse sind die (index), so nutzen wir als fester Wert string::npos (muss ich ihr Wert nicht wissen )
	dann schreibe ich so: size_t i/y/x .... = a.find("koko"); dann if (result == string::npos)... wie im Beispiel
	*/
	size_t result = a.find("koko"); // size_t ist ne Datatype wie int aber ohne - oder + das heißt 4/238/65 aber auch kein double
	if (result == string::npos)
	{
		cout << "Word not found!" << "\n";
	}
	// إن لم يكونا متساويتين, فهذا يعني أنه تم إيجاده الكلمة التي بحثنا عنها و سيتم طباعة رقم أول خانة تم عنده إيجاد الكلمة
	else
	{
		cout << "Word is found at index " << result << "\n";
	}

	 size_t result1 = a.find("think");
	 if (result1 == string::npos)
	 {
		 cout << "Word not found!";
	 }
	 // إن لم يكونا متساويتين, فهذا يعني أنه تم إيجاده الكلمة التي بحثنا عنها و سيتم طباعة رقم أول خانة تم عنده إيجاد الكلمة
	 else
	 {
		 cout << "Word is found at index " << result1<<"\n";
	 }
	 // oder kann so :
	int i = a.find("manners");
		 cout << "Word is found at index " << i<< endl; // endl = "\n"
		 cout << a.find("cat") << endl; // here da cat nicht im Text steht, bekommen wir das 18446744073709551615 als fest Wert (string::npos)
		 cout << a.find("you", 14) << endl; // here sucht er nach you ab die Adresse (index) 14 und gibt uns erste gefundenes Ergebnis
		 //****** WICHTIG******* So schreiben ist besser:
		
		 string str = "I have one cat. My cat like milk. pleas love cat";
		 string keyword = "when";
		
		 size_t ergebnis = str.find(keyword);
		 if (ergebnis != string::npos)
		 {
			 cout << "'" << keyword << "' is found at index " << ergebnis<<endl;
		 }
		 else
		 {
			 cout << "'" << keyword << "' is not found!"<<endl;
		 }
		 string keyword1 = "cat";
		 cout << str.rfind("c") << endl; // sucht nach letzte index, das von diesen Wert ausbesteht
		 cout << str.rfind("cat") << endl; // oder :
		 size_t ergebnis1 = str.rfind(keyword1);
		 if (ergebnis1 != string::npos)
		 {
			 cout << "'" << keyword1 << "' is found at index " << ergebnis1 << endl;
		 }
		 else
		 {
			 cout << "'" << keyword1 << "' is not found!" << endl;
		 }
		 a.replace(8, 7," asshole ");
		 cout << a<<endl;
		 str.swap(a); // wechsel die Werte
		 cout << "a = " << a << endl;
		 cout << "str = " << str << endl;
		 string d = a.append(str);// = string s3 = s1 + s2; دمج append ist schneller 
		 cout << d << endl;
		 string leer;
		 cout << leer.empty() << endl;// ergebnis ist 1, da true ist
		 cout << str.empty() << endl;// ergebnis ist 0, da false ist
		  // يحتوي على نص s هنا قمنا بتعريف متغير إسمه
		 string s = "I like cats";

		 // s هنا قمنا بمسح النص الموجود في المتغير
		 s.clear();

		 // و بالطبع لن يتم طباعة أي شيء لأنه فارغ s هنا قمنا بطباعة محتوى المتغير
		 cout << s;
		 
		 string q = "I like cats.";
		 string w = "I'm learning c++ from harmash.com";
		 string z = q;
		 cout << q.compare(w) << endl;    // s2 أقل من عدد أحرف s1 هنا سيتم طباعة 1- لأن عدد أحرف
		 cout << w.compare(q) << endl;    // s1 أكبر من عدد أحرف s2 هنا سيتم طباعة 1 لأن عدد أحرف
		 cout << q.compare(z) << endl;    // s3 يساوي عدد أحرف s1 هنا سيتم طباعة 0 لأن عدد أحرف
		 /*
		 
			ترجع 0 في حال كان حجمهم متساوي.
			ترجع 1 في حال كان عدد أحرف النص الذي قام باستدعائها أكبر.
			ترجع -1 في حال كان عدد أحرف النص الذي قام باستدعائها أصغر.

		 */
		 string str2 = "welcome harmash.com";

		 // str رقم 8 في النص index عند الـ "to " هنا قمنا بإضافة الكلمة
		 str2.insert(8,"to ");

		 // بعد أن قمنا بإجراء تعديل عليها str هنا قمنا بطباعة قيمة المتغير
		 cout << str2<<endl;
		 // alle mögliche oerationen auf String :

		 string s1 = "harmash";
		 string s2 = "google";
		 // متطابقين سيتم تنفيذ أمر الطباعة s2 و s1 إذا كان النصين
		 if (s1 == s2)
			 cout << "s1 == s2" << endl;

		 // غير متطابقين سيتم تنفيذ أمر الطباعة s2 و s1 إذا كان النصين
		 if (s1 != s2)
			 cout << "s1 != s2" << endl;

		 // سيتم تنفيذ أمر الطباعة s2 أكبر من عدد أحرف s1 إذا كان عدد أحرف
		 if (s1 > s2)
			 cout << "s1 > s2" << endl;

		 // سيتم تنفيذ أمر الطباعة s2 أكبر أو يساوي عدد أحرف s1 إذا كان عدد أحرف
		 if (s1 >= s2)
			 cout << "s1 >= s2" << endl;

		 // سيتم تنفيذ أمر الطباعة s2 أصغر من عدد أحرف s1 إذا كان عدد أحرف
		 if (s1 < s2)
			 cout << "s1 < s2" << endl;

		 // سيتم تنفيذ أمر الطباعة s2 أصغر أو يساوي عدد أحرف s1 إذا كان عدد أحرف
		 if (s1 <= s2)
			 cout << "s1 <= s2" << endl;

	return 0;
}

 