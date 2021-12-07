#include <iostream>

using namespace std;

int main()
{
	float a = -3.2;
	float b = 3.3;
	float c = -3.3;
	float d = 3.4;
	float e = -3.4;
	float f = 3.5;

	int g = -4345;
	unsigned int h = 250;
	int i = - 3467;
	unsigned int j = 467;
	int k = -1245;
	unsigned int l = 345;
	
	char texto[] = "ÁcFgZárs";
	char cadena[] = "ÙíçTñ$%";

	long long x = 5000000000;
	int y = 2000000000;
	long long z;
	z = x + y;
	cout << "x: " << x << " y: " << y << " Resultado z: " << z << endl;
	// La salida del programa como has visto no es coherente.
	// Modifica el programa para que imprima un mensaje si el resultado
	// produce desbordamiento 
	// Y sino que imprima el resultado correcto

	system("pause");

	return 0;
}