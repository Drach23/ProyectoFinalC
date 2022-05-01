#include <stdio.h>
#include <string.h> /* gets, strcmp */
#include <stdlib.h> /* system */

#define TECLA_ENTER 13
#define TECLA_BACKSPACE 8
#define LONGITUD 12
#define LongitudN 4
#define MAX_INTENTOS 3

#define NUMERO_USUARIOS 5

//declaraciones para user
	char usuario[LONGITUD + 1];
	char clave[LongitudN + 1];
	int intento = 0;
	int ingresa = 0;
	char caracter;
	int i = 0;
    int j = 0;

    // Declaración e inicialización de arreglos de usuarios y claves 
    char usuarios[NUMERO_USUARIOS][LONGITUD + 1] = {"Luis", "Alexis", "Roman", "Guillermo", "Diego"};
    char claves[NUMERO_USUARIOS][LongitudN + 1] = {"1234", "5678", "4321", "8765", "0666"};

void LoginUsuario(),Login();
int main(){
	Login();
}

void Login(){
	int Tcuenta;
	printf("\nIngrese [1] si su cuenta es de cliente\nIngrese [2] si cuenta es de administrador\n\neleccion: ");
	scanf("%i",&Tcuenta);
	switch(Tcuenta){
		case 1:
		system("PAUSE");
		system("cls");
		LoginUsuario();
		break;
		case 2:
		system("cls");
		break;
		default:
			printf("\n\tSeleccione una opcion valida");
	}
}





void LoginUsuario() {
	do {
		i = 0;
		system("cls");
		printf("\n\t\t\tINICIO DE SESION\n");
		printf("\t\t\t---------------\n");
		printf("\n\tUSUARIO: ");
		fflush(stdin);
		gets(usuario);
		printf("\tCLAVE: ");
		while (caracter = getch()) {
			if (caracter == TECLA_ENTER) {
				clave[i] = '\0';
				break;
				
			} else if (caracter == TECLA_BACKSPACE) {
				if (i > 0) {
					i--;
					printf("\b \b");
				}
				
			} else {
				if (i < LongitudN) {
					printf("*");
					clave[i] = caracter;
					i++;
				}
			}
		}
		
        /* El usuario y clave debe coincidir con alguno de los que se encuentran en el array */
        for (j = 0; j < NUMERO_USUARIOS; ++j) {
            if (strcmp(usuario, usuarios[0]) == 0 && strcmp(clave, claves[0]) == 0) {
            	ingresa = 1;
                break; 
            }else if (strcmp(usuario, usuarios[1]) == 0 && strcmp(clave, claves[1]) == 0){
            	ingresa = 2;
            	break;
            	
			}else if (strcmp(usuario, usuarios[2]) == 0 && strcmp(clave, claves[2]) == 0){
            	ingresa = 3;
            	break;
        }else if (strcmp(usuario, usuarios[3]) == 0 && strcmp(clave, claves[3]) == 0){
            	ingresa = 4;
            	break;
        }else if (strcmp(usuario, usuarios[4]) == 0 && strcmp(clave, claves[4]) == 0){
            	ingresa = 5;
            	break;
        }
    }

        if (ingresa == 0) {
            printf("\n\tUsuario y/o clave son incorrectos\n");
            intento++;
            getchar();
        }
		
		
	} while (intento < MAX_INTENTOS && ingresa == 0);
	
	if (ingresa == 1) {
		system("cls");
		printf("\n\n\tBienvenido al Sistema Luis\n");
		system("pause");
		menu1();
	}else if (ingresa == 2){
		system("cls");
		printf("\nBienvenido al sistema Alexis\n");
		system("pause");
		menu2();
	}else if (ingresa == 3){
		system("cls");
		printf("\nBienvenido al sistema Roman\n");
		system("pause");
		menu3();
	}else if (ingresa == 4){
		system("cls");
		printf("\nBienvenido al sistema Guillermo\n");
		system("pause");
		menu4();
	}
	else if (ingresa == 5){
		system("cls");
		printf("\nBienvenido al sistema Diego\n");
		system("pause");
		menu5();
	}
	else {
		printf("\n\n\tHa sobrepasado el numero maximo de intentos permitidos\n");
	}

}

void menu1(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
	printf("\n1. Cuenta\n2. deposito/retiro\n3. Transferencia\n4. Pago de servicios\n5. Invertir\n6. Terminos y condiciones\n7. salir\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			printf("Cuenta");
			break;
		case 2:
			printf("deposito/retiro");
			break;
		case 3:
			printf("Transferencia");
			break;
		case 4:
			printf("Pago de servicios");
			break;
		case 5:
			printf("Invertir");
			break;
		case 6:
			printf("Terminos y condiciones");
			break;
		case 7:
			printf("Salir");
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 7 \n");
	}
}

void menu2(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
	printf("\n1. Cuenta\n2. deposito/retiro\n3. Transferencia\n4. Pago de servicios\n5. Invertir\n6. Terminos y condiciones\n7. salir\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			printf("Cuenta");
			break;
		case 2:
			printf("deposito/retiro");
			break;
		case 3:
			printf("Transferencia");
			break;
		case 4:
			printf("Pago de servicios");
			break;
		case 5:
			printf("Invertir");
			break;
		case 6:
			printf("Terminos y condiciones");
			break;
		case 7:
			printf("Salir");
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 7 \n");
	}
}
void menu3(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
	printf("\n1. Cuenta\n2. deposito/retiro\n3. Transferencia\n4. Pago de servicios\n5. Invertir\n6. Terminos y condiciones\n7. salir\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			printf("Cuenta");
			break;
		case 2:
			printf("deposito/retiro");
			break;
		case 3:
			printf("Transferencia");
			break;
		case 4:
			printf("Pago de servicios");
			break;
		case 5:
			printf("Invertir");
			break;
		case 6:
			printf("Terminos y condiciones");
			break;
		case 7:
			printf("Salir");
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 7 \n");
	}
}
void menu4(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
	printf("\n1. Cuenta\n2. deposito/retiro\n3. Transferencia\n4. Pago de servicios\n5. Invertir\n6. Terminos y condiciones\n7. salir\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			printf("Cuenta");
			break;
		case 2:
			printf("deposito/retiro");
			break;
		case 3:
			printf("Transferencia");
			break;
		case 4:
			printf("Pago de servicios");
			break;
		case 5:
			printf("Invertir");
			break;
		case 6:
			printf("Terminos y condiciones");
			break;
		case 7:
			printf("Salir");
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 7 \n");
	}
}
void menu5(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
	printf("\n1. Cuenta\n2. deposito/retiro\n3. Transferencia\n4. Pago de servicios\n5. Invertir\n6. Terminos y condiciones\n7. salir\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			printf("Cuenta");
			break;
		case 2:
			printf("deposito/retiro");
			break;
		case 3:
			printf("Transferencia");
			break;
		case 4:
			printf("Pago de servicios");
			break;
		case 5:
			printf("Invertir");
			break;
		case 6:
			printf("Terminos y condiciones");
			break;
		case 7:
			printf("Salir");
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 7 \n");
	}
}
