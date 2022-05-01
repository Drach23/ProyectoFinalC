#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//declaracion de funciones para usar en todo el codigo
void menu(), adecuacion(), Login(), UserLogin(), LoginAdmin(), Cuenta1();



struct Usuario{
	char UserName[12];
	int NIP;
	char Tcuenta[7];
	int IDcuenta;
	float ahorro;	
} Usuario1={"Alexis",1234,"Credito",1,6000},
  Usuario2={"Luis",5678,"Debito",2,4000},
  Usuario3={"Roman",8765,"Debito",3,5500},
  Usuario4={"Guillermo",4321,"Debito",4,4200},
  Usuario5={"Diego",1221,"Debito",5,5200};
  


int main(){
	UserLogin();
	return 0;
}


void menu(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
	printf("\n1. opcion 1\n2. opcion 2\n3. opcion 3\n4. opcion 4\n5. opcion 5\n6. opcion 6\n7. opcion 7\n8. opcion 8\n9. opcion 9\n10. opcion 10\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			printf("Opcion");
			break;
		case 2:
			printf("opcion 2");
			break;
		case 3:
			printf("opcion 3");
			break;
		case 4:
			printf("opcion 4");
			break;
		case 5:
			printf("opcion 5");
			break;
		case 6:
			printf("opcion 6");
			break;
		case 7:
			printf("opcion 7");
			break;
		case 8:
			printf("opcion 8");
			break;
		case 9:
			printf("opcion 9");
			break;
		case 10:
			printf("opcion 10");
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 10 \n");
	}
}

void UserLogin(){
	int intento = 0; 
	int acceso = 0;
	char usuario;
	int clave;
	do{
	
	printf("\n\t\t\tINICIO DE SESION");
	printf("\n\tUSUARIO: ");
	scanf("%c",&usuario);
	printf("\n\tNIP: ");
	scanf("%i",&clave);
	
	if ((usuario == Usuario1.UserName) && (clave == Usuario1.NIP)){
		acceso = 1;
		printf("Bienvenido al sistema");
}else{
	printf("Usuario y/o NIP incorrectos");
	intento ++;
	system("pause");
}
}while(intento < 3 && acceso == 0);
}




void Cuenta1(){
	printf("bienvenido a cuenta 1");
}



