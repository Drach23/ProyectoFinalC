#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu();

int main(){
	menu();
	cobro();
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
	
	void cobro(){
		printf("esto es el cobro")
		system("PAUSE")
	}
}