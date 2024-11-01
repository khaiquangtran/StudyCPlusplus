#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream file("text.txt", ios::trunc);
	file << "hello" << endl;
	file << 25 << endl;
	file.close();

	return 0;
}
