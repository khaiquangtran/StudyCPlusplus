#include <iostream>
using namespace std;

#define PI 3.1425
#define msg(x) #x
#define c cout

#ifndef PI
	#define PI 3
#endif // !PI

int main()
{
	cout << PI << endl;

	cout << msg(helllo) << endl;

	c << "world" << endl;
	return 0;
}
