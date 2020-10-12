#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
struct Date
{
	int day;
	int month;
	int year;
	
	void Fill()
	{
		cout << "Day -> ";
		cin >> day;
		cout << "Month -> ";
		cin >> month;
		cout << "Year -> ";
		cin >> year;
	}
	void FillData(int min, int max)
	{
		day = 1 + rand() % 31;
		month = 1 + rand() % 12;
		year = min + (rand() % (max - min));
	}
	void PrintDate()
	{
		cout << day << "." << month << "." << year << endl;
	}
};

struct Worker
{
	Date date;
	string FirstName;
	string LastName;
	double salary;
	int age;
	void Fill()
	{
		string sn[6] = { "qwe", "rty", "uio", "asd", "fgh", "jkl" };
		string n[6] = { "qqq","www","eee","rrr","yyy","uuu" };
		int b, c;
		c = rand() % 5;
		b = rand() % 5;
		FirstName = n[b];
		LastName = sn[c];
		age = 22 + rand() % 39;
		salary = rand() % 2000;
		date.FillData(1960, 2000);
	}
	void View()
	{
		cout << "First name\tLast name\tSalary\tAge\t\n";
		cout << FirstName << setw(17) << LastName << setw(13) << salary << setw(7) << age << endl;
		date.PrintDate();
	}
};


void Fill(Worker* w)
{
	cout << "First name -> ";
	getline(cin, w->FirstName);
	cout << "Last name -> ";
	getline(cin, w->LastName);
	cout << "Salary -> ";
	cin >> w->salary;
	cout << "Age -> ";
	cin >> w->age;
}
void View(Worker* w)
{
	cout << "First name\tLast name\tSalary\tAge\t\n";
	cout << w->FirstName << setw(17) << w->LastName << setw(8) << w->salary << setw(7) << w->age << endl;
}
void main()
{
	srand(time(0));
	Worker Zahar;
	/*Zahar.FirstName = "Zahar";
	Zahar.LastName = "Ivanov";
	Zahar.salary = 700;
	Zahar.age = 25;*/
	/*cout << "First name -> "<< ZaharFirstName << endl;
	cout << "Last name -> "<< ZaharLastName << endl;
	cout << "Salary -> "<< Zaharsalary << endl;
	cout << "Age -> "<< Zaharage << endl;*/

	/*cout << "First name\tLast name\tSalary\tAge\t\n";
	cout << Zahar.FirstName << setw(17) << Zahar.LastName << setw(13) << Zahar.salary << setw(7) << Zahar.age << endl;*/

	Worker Petro;

	/*cout << "First name -> " ;
	getline(cin, Petro.FirstName);
	cout << "Last name -> " ;
	getline(cin, Petro.LastName);
	cout << "Salary -> ";
	cin >> Petro.salary;
	cout << "Age -> ";
	cin >> Petro.age;*/

	Zahar.Fill();
	Zahar.View();
}