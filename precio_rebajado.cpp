#include <iostream>
#include <tgmath.h>
using namespace std;


float calcula_rebaja (float precio_original, float porcentaje_rebaja)
{
	float nuevo_precio;
	nuevo_precio = precio_original*(100-porcentaje_rebaja)/100;
	nuevo_precio = round( nuevo_precio*100) /100;
	return nuevo_precio;		
}

int main(int argc, char *argv[]) {
	float precio;
	float precio_rebajado;
	string producto;
	
	cout << "Introduce el nombre del producto:\n";
	cin >> producto;
	
	cout << "Introduce el precio del producto:\n";
	cin >> precio;	
	
	precio_rebajado = calcula_rebaja(precio, 15);
	cout << "El precio rebajado un 15% del artículo " 
		<< producto << " es " << precio_rebajado << " euros\n";
	
	
	return 0;
}

