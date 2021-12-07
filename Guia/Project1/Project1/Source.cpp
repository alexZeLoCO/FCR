#include <iostream>		//Input Output Stream

using namespace std;		//Sexually Transmitted Diseases (STD)

double media(int vector[], int l) {
	int suma = 0;
	for (int i = 0; i < l; i++) {
		suma = suma + vector[i];
	}
	return (double)suma / l;
}

int  main() {
	cout << "Hello World!" << endl;
	/*
	std  ==> Standard
	cout ==> Console Output
	endl ==> End Line
	*/

	int edad;			//Mod Tipo Nom
	cin >> edad;		//cin ==> Console Input

	bool x = (edad >= 0);
	if (x) {
		cout << "Edad válida" << endl;
	}
	else {
		while (edad < 0) {
			cout << "Edad no válida. \n \t Introduzca edad: ";
			cin >> edad;
			cout << endl;
		}
	}
	
	int numeros[4];			//Tipo nombre [longitud]
	int numeros2[] = { 1,2,3 };		//Tipo nombre [] = {valor1,valor2,...,valorn};

	for (int i = 0; i < 4; i++) {			//No existe vector.length()
		cin >> numeros[i];				//vector[i] ==> acceder a posición i del vector
	}

	for (int i = 0; i < 3; i++) {
		cout << numeros2[i] << endl;
	}

	cout << "La media del vector introducido: " << media(numeros,4) << endl;
	cout << "La media del vector por defecto: " << media(numeros2,3) << endl;

	char caracter = 'a';
	char cadena[] = "Hello World!";
	cout << cadena << endl;

	return 0;			//Retornar algo

	/*
	* MODIFICADORES:
	*	\n			==>	Salto de línea
	*	\t			==> Tabulación
	* 
	*	signed		==> Positivos y Negativos
	*	unsigned	==> Positivos
	* 
	*	const		==> Constante (final)
	*/

	/*
	* PUNTEROS:
	* int num = 9;
	* int* puntero ==> Puntero: Apuntar a la posición en memoria de una variable tipo int
	* puntero = &num;		==> Almacenar posición de num en puntero
	* 
	*		Sintaxis:	tipo* nombre;
	*					nombre = &nombre2; (nombre es el puntero, nombre2 es la variable)
	* 
	* cout << num;			(9)
	* cout << puntero;		(511)
	*/

	//printf("Hoy cobramos %.2f€. Mañana es %d.",cobro,dia);
}