#include <functional>
#include <iostream>
using namespace std;

int f(int a, int b) {
  return a + b;
}

int main() {
  
  	// std::function wrapping traditional
  	// function
	function<int(int, int)> calc = f;
  	cout << "Sum: " << calc(8, 2) << endl;
    
  	// std::function wrapping a lambda
    // expression
    calc = [](int a, int b) { return a * b; };
  	cout << "Product: " << calc(8, 2);
    return 0;
}
