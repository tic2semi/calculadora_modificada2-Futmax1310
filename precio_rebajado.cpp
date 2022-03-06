#include <iostream>
#include <tgmath.h>
using namespace std;

//Crea una función a través de la cual calcula y devuelve el precio con el descuento aplicado
float calcula_rebaja (float precio_original, float porcentaje_rebaja)				
{
	float nuevo_precio;
	nuevo_precio = precio_original*(100-porcentaje_rebaja)/100;
	nuevo_precio = round( nuevo_precio*100) /100;
	return nuevo_precio;		
}

//Crea una función a través de la cual calcula y obtendremos el precio pero cambiado de euros a dolares
void calcular_dolares (float dolares[3], float precio_rebajado, float precio_rebajado_vip, float precio_rebajado_instituto)				
{
	dolares[0] = precio_rebajado*1.09;
	dolares[1] = precio_rebajado_vip*1.09;
	dolares[2] = precio_rebajado_instituto*1.09;
}

int main(int argc, char *argv[]) {
	//define las variables que emplearemos en el programa
	float precio;
	float precio_rebajado;
	float precio_rebajado_vip;
	float precio_rebajado_instituto;
	float dolares[3];
	string producto;
	
	//Pide al usuario el nombre del prodfucto que desea
	cout << "Introduce el nombre del producto:\n";
	cin >> producto;
	
	//Pide al usuario el precio del producto antes mencionado
	cout << "Introduce el precio del producto:\n";
	cin >> precio;	
	
	//Asigna el valor que devuelve la función a la variable precio_rebajado
	precio_rebajado = calcula_rebaja(precio, 15);        
	
	/* Debido a que podemos asignar cualquier porcentaje de rebaja cambiando el 
	segundo número, lo que hacemos para calcular el 25% es cambiarlo por el 15 */
	precio_rebajado_vip = calcula_rebaja(precio, 25);
	
	//Del mismo modo, lo hacemos con 40 para calcular el 40% de rebaja
	precio_rebajado_instituto = calcula_rebaja(precio, 40);
	
	//calculamos el prefcio de los tres en dolares
	calcular_dolares (dolares, precio_rebajado, precio_rebajado_vip, precio_rebajado_instituto);
	
	//Le informa al usuario del precio con la rebaja aplicada
	cout << "El precio rebajado un 15% del artículo " << producto << " es " << precio_rebajado << " euros y en dolares es " << dolares[0] << "\n";
	
	cout << "El precio rebajado un 25% para los clientes vip del artículo " 
		<< producto << " es " << precio_rebajado_vip << " euros y en dolares es " << dolares[1] << "\n";
	
	cout << "El precio rebajado un 40% para los clientes del instituto del artículo " 
		<< producto << " es " << precio_rebajado_instituto << " euros y en dolares es " << dolares[2] << "\n";
	
	
	return 0;
}