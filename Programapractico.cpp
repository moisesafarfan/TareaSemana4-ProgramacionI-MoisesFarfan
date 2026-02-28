#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	string nombre;
	double precioprod;
	int cantidad;
	double subtotal;
	double iva;
	double total;

cout << "Ingresa tu nombre completo: " <<endl;
getline (cin, nombre);

cout << "Ingrese el precio del producto: " << endl;
cin >> precioprod;

cout << "Cuantas unidades compro: " << endl;
cin >> cantidad;

subtotal = cantidad * precioprod;
iva = subtotal * 0.12;
total = iva + subtotal;

cout << "Cliente: " << nombre << endl;
cout << fixed << setprecision(2);
cout << "Subtotal: " << "Q" << subtotal <<endl;
cout << "IVA: " << "Q" << iva << endl;
cout << "Total a pagar: " <<"Q" << total << endl << endl;
cout << "Desarrollado por: Moisés Abinadi Farfan González" << endl;

return 0;

}
