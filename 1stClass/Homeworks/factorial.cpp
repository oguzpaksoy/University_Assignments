#include <iostream>
using namespace std;

struct Factorial{
	int num;
	int factorial=1;
};

int main() {
	Factorial a;
    cout << "Enter a positive integer: ";
    cin >> a.num;

    if (a.num < 0)
        cout << "Factorial of a negative number doesn't exist!";
    else {
        for(int i = 1; i<= a.num; ++i) { 
            a.factorial *= i;
        }
        cout << "Factorial of " << a.num << " = " << a.factorial;    
    }

    return 0;
}
