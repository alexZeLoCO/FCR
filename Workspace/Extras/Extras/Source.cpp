#include <iostream>

using namespace std;

 void poneCeros(int v[], int len) {
	for (int i = 0; i < len; i++) {
		if (v[i] < 0) {
			v[i] = 0;
		}
	}
}

 void imprimeVector(int v[], int len) {
	 cout << "Inicio vector:" << endl;
	 for (int i = 0; i < len; i++) {
		 cout << i << ": \t" << v[i] << endl;
	 }
	 cout << "Fin vector" << endl;
 }

 int cuentaVocales(char cadena[], int len) {
	 int suma = 0;
	 for (int i = 0; i < len; i++) {
		 if (cadena[i] == 'a' or cadena[i] == 'e' or cadena[i] == 'i' or cadena[i] == 'o' or cadena[i] == 'u') {
			 suma = suma + 1;
		 }
	 }
	 return suma;
 }

 int cuentaEspacios(char cadena[], int len) {
	 int suma = 0;
	 for (int i = 0; i < len; i++) {
		 if (cadena[i] == (char)" ") {
			 suma = suma + 1;
		 }
	 }
	 return suma;
 }

int main() {
	char cadena[] = "Hello World";
	int len = 11;

	cout << "Número de letras: " << len << "\n Número de vocales: " << cuentaVocales(cadena, len) << "\n Número de consonantes: " << len - cuentaVocales(cadena, len)-cuentaEspacios(cadena,len) << endl;

	return 0;

}