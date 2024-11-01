#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, string> m;
	m.insert(pair<int, string>(1, "car"));
	m.insert(pair<int, string>(2, "bicycle"));

	map<int, string>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}

	map<int, string>::iterator itr1;
	itr1 = m.find(2);

	cout << itr1->second;

	return 0;
}
