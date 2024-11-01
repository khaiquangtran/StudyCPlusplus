#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	string sex;
	friend ofstream& operator<<(ofstream& ofs, Student& s);
	friend ifstream& operator>>(ifstream& ifs, Student& s);
};

ifstream& operator>>(ifstream& ifs, Student& s)
{
	ifs >> s.name >> s.age >> s.sex;
	return ifs;
}

ofstream& operator<<(ofstream& ofs, Student& s)
{
	ofs << s.name << endl;
	ofs << s.age << endl;
	ofs << s.sex << endl;
	return ofs;
}

int main()
{
	ofstream file("infor.txt", ios::trunc);

	Student a;
	a.name = "khai";
	a.age = 25;
	a.sex = "male";

	file << a;
	file.close();

	ifstream ofile("infor.txt");

	Student b;
	if (ofile.is_open()) cout << "File is opened" << endl;
	else return 0;

	ofile >> b;

	cout << b.name << endl;
	cout << b.age << endl;
	cout << b.sex << endl;

	return 0;
}
