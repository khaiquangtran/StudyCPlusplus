#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream file;
	file.open("text.txt");

	if (file.is_open())
		cout << "File is opened" << endl;
	else
	{
		cout << "File is not existing" << endl;
		return 0;
	}
	string name;
	int age;
	getline(file, name);
	file >> age;
	file.close();
	cout << "Name " << name << endl;
	cout << "Age " << age << endl;

	return 0;
}
