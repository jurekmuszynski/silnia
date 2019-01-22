

#include <iostream>

int num;

using namespace std;

int factorial(int n){
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n-1);
	}
}

int main()
{
	cout << "enter your number: " << endl;
	cin >> num;
	cout << factorial(num) << endl;
}