#include <iostream>
#include <tgmath.h>
using namespace std;

//en esta funcion se crea el precio con la rebaja incluida
float calcula_rebaja (float precio_original, float porcentaje_rebaja)
{
	float nuevo_precio;
	nuevo_precio = precio_original*(100-porcentaje_rebaja)/100;
	nuevo_precio = round( nuevo_precio*100) /100;
	return nuevo_precio;		
}
float calcula_rebaja_vip(float precio){
	float precio_vip;
	precio_vip =(precio*0.75);
	return precio_vip;
}
	float calcula_rebaja_alumno(float precio){
		float precio_alumno;
		precio_alumno =(precio*0.60);
		return precio_alumno;
	}
		float calcula_en_dolares(float precio){
			float dolares;
			dolares =(precio*1.09);
			return dolares;
		}
int main(int argc, char *argv[]) {
	float precio;
	float precio_rebajado,precio_vip,precio_alumno,precio_en_dolares;
	string producto;
	//se le pide los datos del producto 
	cout << "Introduce el nombre del producto:\n";
	cin >> producto;
	
	cout << "Introduce el precio del producto:\n";
	cin >> precio;	
	//posteriormente se llama a la funcion precio rebajado para calcularlo
	precio_rebajado = calcula_rebaja(precio, 15);
	cout << "El precio rebajado un 15% del artículo " 
		<< producto << " es " << precio_rebajado << " euros\n";
	precio_vip=calcula_rebaja_vip(precio);
	cout<<"el precio del"<< producto <<" para un cliente VIP es de "<< precio_vip<<endl;
	precio_alumno=calcula_rebaja_alumno(precio);
	cout<<"el precio del"<< producto <<" para un alumno es de "<< precio_alumno <<endl;
	precio_en_dolares=calcula_en_dolares(precio);
	cout<<"el precio del producto en dolares es "<<precio_en_dolares<<endl ;
	return 0;
}

