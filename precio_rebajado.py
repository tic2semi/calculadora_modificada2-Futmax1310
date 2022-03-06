
def calcula_rebaja (precio_original, porcentaje_rebaja):
	nuevo_precio = precio_original*(100-porcentaje_rebaja)/100;
	nuevo_precio = round( nuevo_precio*100) /100;
	return nuevo_precio;		



producto = input("Introduce el nombre del producto: ");
precio = float ( input("Introduce el precio del producto: "));

precio_rebajado = calcula_rebaja(precio, 15);
print("El precio rebajado un 15% del artículo", producto, 
      "es", precio_rebajado, " euros\n"); 
