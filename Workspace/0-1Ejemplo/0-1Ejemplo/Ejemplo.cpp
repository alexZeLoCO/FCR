#include <iostream>

using namespace std;
/*
int suma(int n1, int n2) {
	return n1 + n2;
}

int main() {
	cout << "Hello World" << endl;
	cout << "Valor: " << 3 << endl;

	signed int num;
	cin >> num;
	const unsigned int n = 5;

	if (num < n) {
		cout << "Es menor";
	} else{
		cout << "Es mayor";
	}
	cout << endl;

	int vector[5];
	for (int i = 0; i < 5; i++) {
		cout << vector[i];
	}
	cout << endl;

	char cadena[] = "Hola";

	return 0;
}
*/

void set23(int& number)
{
	number = 23;
}

int main()
{
	int i = 10;

	set23(i);
	cout << "i now contains: " << i << endl;

	int* p;          // p is a pointer to an int
	int number = 101; // number is an int

	cout << "number: " << number << endl;

	p = &number; // copy to p the address of number. p now points to number
	*p = 555;    // write 555 in the address pointed by p, i.e., in number

	cout << "number: " << number << endl;
	cout << "*p: " << *p << endl;

	return 0;
}
