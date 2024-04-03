#include <iostream>
using namespace std;

void setGameScore() {

}

void updateGameScore() {
		
}

int main() {
	int num1; int num2;
	char oprator;
	cout << "enter 2 numbers " << endl;
	cin >> num1 >> num2;
	cout << "enter operator ";
	cin >> oprator;
	switch (oprator) {
		case'+':
			cout << "the sum =" << num1 + num2;
			break;
		case'-':
			cout << "the sub = " << num1 - num2;
			break;
		case '*':
			cout << "tne product =" << num1 * num2;
			break;
		case'/':
			cout << "the quatient=" << num1 / num2;
			break;
		case '&': 
			cout << "result is = " << pow(num1, num2);
	}

	return 0;
}
