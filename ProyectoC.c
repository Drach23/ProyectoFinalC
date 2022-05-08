#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

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

// declaracion de funciones
void LoginUsuario(),LoginUsuario(),menu1(),menu2(),menu3(),menu4(),menu5();
void Cuenta1();

// creacion de clientes
struct Usuario{
	char nombre[80];	
	char username[30];
	char domicilio[80];
	char email[80];
	float  celular;
	char Cuenta[80];
	int  NumeroCuenta;
	float ahorro;
	int vencimiento;} 
  Usuario1 = {"Luis Felipe Aguiniga Haro","Pipe","calle guyayaba #580 CP: 24503","luisaguiniga@hotmail.com",3320604050,"Credito",1,40500,2026},
  Usuario2 = {"Jorge Alexis Yahir Olague Rentería","SpartanoMX","lomas lejano del mundo #128 CP:36045","alexisolag@hotmail.com", 3325165070, "debito",2,50400,2025},
  Usuario3 = {"Roman Antonio Arechiga Rojas","romaanAnt","salto de agua #500 CP: 30125","RomanAnton@gmail.com",3333309369,"Credito",3,35000,2023},
  Usuario4 = {"Guillermo Antonio Arellano Cervantes","memingo","el tesoro #45 CP: 18504","memingo@gmail.com",3312204560,"Debito",4,27500,2028},
  Usuario5 = {"Diego Ricardo Aquino Chavez","Drach","puerto vallarta #1221 CP: 45625","drach2003@hotmail.com",3325165098,"Credito",5,55095,2025};
  
  

int main(){
	LoginUsuario();
}

void LoginUsuario() {
	do {
		i = 0;
		system("cls");
		printf("\n\t\t\tINICIO DE SESION\n");
		printf("\t\t\t-----------------\n");
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
		printf("\n\n\tBIENVENIDO DE NUEVO LUIS\n\n");
		system("pause");
		system("cls");
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
		system("cls");
		menu5();
	}
	else {
		printf("\n\n\tHa sobrepasado el numero maximo de intentos permitidos\n");
	}

}


void menu1(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
	printf("-----------------------------");
	printf("\n1. Cuenta\n2. deposito/retiro\n3. Transferencia\n4. Pago de servicios\n5. Invertir\n6. Terminos y condiciones\n7. salir de la cuenta\n8. Cerrar programa\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			printf("Cuenta");
			system("cls");
			Cuenta1();
			break;
		case 2:
			printf("deposito/retiro");
			system("cls");
			Deposito1();
			break;
		case 3:
			printf("Transferencia");
			system("cls");
			Transferencia1();
			break;
		case 4:
			printf("Pago de servicios");
			system("cls");
			servicios1();
			break;
		case 5:
			printf("Invertir");
			system("cls");
			inversion1();
			break;
		case 6:
			printf("Terminos y condiciones");
			system("cls");
			condiciones();
			break;
		case 7:
			system("cls");
			printf("\nSaliendo de la cuenta.....\n");
			printf("\nSesion cerrada\n\n");
			system("pause");
			system("cls");
			LoginUsuario();
			break;
		case 8:
			printf("Cerrando el programa");
			despedida();
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 7 \n");
	}
}


void menu2(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
		printf("\n1. Cuenta\n2. deposito/retiro\n3. Transferencia\n4. Pago de servicios\n5. Invertir\n6. Terminos y condiciones\n7. salir de la cuenta\n8. Cerrar programa\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			printf("Cuenta");
			system("cls");
			Cuenta2();
			break;
		case 2:
			printf("deposito/retiro");
			system("cls");
			Deposito2();
			break;
		case 3:
			printf("Transferencia");
			system("cls");
			Transferencia2();
			break;
		case 4:
			printf("Pago de servicios");
			system("cls");
			servicios2();
			break;
		case 5:
			printf("Invertir");
			system("cls");
			inversion2();
			break;
		case 6:
			printf("Terminos y condiciones");
			system("cls");
			condiciones2();
			break;
		case 7:
			system("cls");
			printf("\nSaliendo de la cuenta.....\n");
			printf("\nSesion cerrada\n\n");
			system("pause");
			system("cls");
			LoginUsuario();
			break;
		case 8:
			printf("Cerrando el programa");
			despedida();
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 7 \n");
	}
}




void menu3(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
	printf("\n1. Cuenta\n2. deposito/retiro\n3. Transferencia\n4. Pago de servicios\n5. Invertir\n6. Terminos y condiciones\n7. salir de la cuenta\n8. Cerrar programa\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			printf("Cuenta");
			system("cls");
			Cuenta3();
			break;
		case 2:
			printf("deposito/retiro");
			system("cls");
			Deposito3();
			break;
		case 3:
			printf("Transferencia");
			system("cls");
			Transferencia3();
			break;
		case 4:
			printf("Pago de servicios");
			system("cls");
			servicios3();
			break;
		case 5:
			printf("Invertir");
			system("cls");
			inversion3();
			break;
		case 6:
			printf("Terminos y condiciones");
			system("cls");
			condiciones3();
			break;
		case 7:
			system("cls");
			printf("\nSaliendo de la cuenta.....\n");
			printf("\nSesion cerrada\n\n");
			system("pause");
			system("cls");
			LoginUsuario();
			break;
		case 8:
			printf("Cerrando el programa");
			despedida();
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 7 \n");
	}
}

void menu4(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
	printf("\n1. Cuenta\n2. deposito/retiro\n3. Transferencia\n4. Pago de servicios\n5. Invertir\n6. Terminos y condiciones\n7. salir de la cuenta\n8. Cerrar programa\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
				case 1:
			printf("Cuenta");
			system("cls");
			Cuenta4();
			break;
		case 2:
			printf("deposito/retiro");
			system("cls");
			Deposito4();
			break;
		case 3:
			printf("Transferencia");
			system("cls");
			Transferencia4();
			break;
		case 4:
			printf("Pago de servicios");
			system("cls");
			servicios4();
			break;
		case 5:
			printf("Invertir");
			system("cls");
			inversion4();
			break;
		case 6:
			printf("Terminos y condiciones");
			system("cls");
			condiciones4();
			break;
		case 7:
			system("cls");
			printf("\nSaliendo de la cuenta.....\n");
			printf("\nSesion cerrada\n\n");
			system("pause");
			system("cls");
			LoginUsuario();
			break;
		case 8:
			printf("Cerrando el programa");
			despedida();
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 7 \n");
	}
}

void menu5(){
	int opcion;
	printf("\n\tBIENVENIDO AL MENU\n");
	printf("\n1. Cuenta\n2. deposito/retiro\n3. Transferencia\n4. Pago de servicios\n5. Invertir\n6. Terminos y condiciones\n7. salir de la cuenta\n8. Cerrar programa\n eleccion: ");
	scanf("%i",&opcion);
	switch(opcion){
						case 1:
			printf("Cuenta");
			system("cls");
			Cuenta5();
			break;
		case 2:
			printf("deposito/retiro");
			system("cls");
			Deposito5();
			break;
		case 3:
			printf("Transferencia");
			system("cls");
			Transferencia5();
			break;
		case 4:
			printf("Pago de servicios");
			system("cls");
			servicios5();
			break;
		case 5:
			printf("Invertir");
			system("cls");
			inversion5();
			break;
		case 6:
			printf("Terminos y condiciones");
			system("cls");
			condiciones5();
			break;
		case 7:
			system("cls");
			printf("\nSaliendo de la cuenta.....\n");
			printf("\nSesion cerrada\n\n");
			system("pause");
			system("cls");
			LoginUsuario();
			break;
		case 8:
			printf("Cerrando el programa");
			despedida();
			break;
		default:
			printf("Eleccion no valida, vuelva a intentarlo. ingresando un numero del 1 al 7 \n");
	}
}

// funciones para el primer usuario	
void Cuenta1(){
	    system("cls");
		printf("\n\tDatos de tu cuenta: ");
		printf("\n\t----------------------------------------");
		printf("\n\tNombre de usuario: %s",Usuario1.username);
		printf("\n\tTipo de cuenta: %s",Usuario1.Cuenta);
		printf("\n\tDinero en cuenta: %.2f",Usuario1.ahorro);
		printf("\n\tFecha de vencimiento de su tarjeta: %i\n\n",Usuario1.vencimiento);
		system("pause");
		system("cls");
		menu1();
	}
	
	
void Deposito1(){
	int opcion, opc;
	float retirar, deposito;
	printf("\n\t\t\tBIENVENIDO A DEPOSITOS/RETIROS\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nSi quiere realizar un retiro ingrese [1]\nSi quiere realizar un deposito ingrese [2]\nSi desea volver al menu principal presione [3]\neleccion: ");
	scanf("%i",&opcion);
	if (opcion == 1){
		system("cls");
		printf("\nEsta usted seguro de querer realizar un retiro?\n\ningrese [1] para continuar\ningrese[2] para volver a menu depositos\neleccion: ");
		scanf("%i",&opc);
		if (opc == 1){
			system("cls");
			printf("\nIngrese la cantidad de dinero que desea retirar: ");
			scanf("%f",&retirar);
			if (retirar > Usuario1.ahorro){
				printf("\nLa cantidad de dinero a retirar es mayor que la cantidad de dinero con la que cuenta\n\n");
				system("pause");
				system("cls");
				Deposito1();
			} else{
				Usuario1.ahorro = Usuario1.ahorro - retirar;
				printf("\nRETIRO REALIZADO EXITOSAMENTE\n\n");
				system("pause");
				system("cls");
				Deposito1();
				
			}
		} else if (opc = 2){
			printf("\nVOLVIENDO AL MENU\n\n");
				system("pause");
				system("cls");
				Deposito1();
		}else{
			fflush(stdin);
			printf("[ERROR] INGRESE UNA OPCION VALIDA");
			system("pause");
			system("cls");
			Deposito1();
		}
		
	}else if (opcion == 2){
		system("cls");
		printf("\nEsta usted seguro de querer realizar un Deposito?\n\ningrese [1] para continuar\ningrese[2] para volver a menu depositos\neleccion: ");
		scanf("%i",&opc);
		if (opc == 1){
			system("cls");
			printf("\ningrese la cantidad de dinero que desea depositar: ");
			scanf("%f",&deposito);
			Usuario1.ahorro = Usuario1.ahorro + deposito;
			printf("\nEL DEPOSITO HA SIDO REALIZADO EXITOSAMENTE\n\n");
			system("pause");
			system("cls");
			Deposito1();
		} if (opc == 2){
			system("cls");
			printf("\nVOLVIENDO AL MENU\n\n");
			system("pause");
			system("cls");
			Deposito1();
		}else{
			printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
			system("pause");
			system("cls");
			Deposito1();
		} 	
	}else if (opcion == 3){
		system("cls");
		printf("\nVOLVIENDO AL MENU PRINCIPAL\n");
		system("pause");
		system("cls");
		menu1();
	}else{
		printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
		system("pause");
		system("cls");
		Deposito1();
	}
		
}


void Transferencia1(){
	int opcion, opc, cuenta,seguridad;
	float transferir;
	printf("\n\t\t\tBIENVENIDO A TRANSFERENCIAS\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nSi quiere realizar una Transferencia ingrese [1]\nSi desea volver al menu principal presione [2]\neleccion: ");
	scanf("%i",&opcion);
	if (opcion == 1){
		printf("\nIngresa el numero de cuenta al cual le realizaras una transferencia bancaria: ");
		scanf("%i",&cuenta);
		printf("\nIngresa la cantidad de dinero que deseas transferir a la cuenta: ");
		scanf("%f",&transferir);
		system("cls");
		printf("\nEstas seguro de que quieres depositar $%2.f  en el numero de cuenta %i\nIngresa[1] para continuar\nIngresa[2] para corregir\neleccion: ",transferir,cuenta);
		scanf("%i",&opc);
		switch(opc){
			case 1:
				switch(cuenta){
					case 1:
						system("cls");
					    printf("\n[ERROR] NO SE PUEDEN REALIZAR TRANSFERENCIAS A LA MISMA CUENTA QUE LA ENVIA.\n\n");
					    system("pause");
					    system("cls");
					    Transferencia1();
					    break;
					case 2:
						system("cls");
						Usuario2.ahorro = Usuario2.ahorro + transferir;
						Usuario1.ahorro = Usuario1.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia1();
						break;
					case 3:
						system("cls");
						Usuario3.ahorro = Usuario3.ahorro + transferir;
						Usuario1.ahorro = Usuario1.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia1();
						break;
					case 4:
						system("cls");
						Usuario4.ahorro = Usuario4.ahorro + transferir;
						Usuario1.ahorro = Usuario1.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia1();
						break;
					case 5:
						system("cls");
						Usuario5.ahorro = Usuario5.ahorro + transferir;
						Usuario1.ahorro = Usuario1.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia1();
						break;
					default:
						printf("\n[ERROR] INGRESE UN NUMERO DE CUENTA VALIDA\n\n");
						system("pause");
						system("cls");
						Transferencia1();
			}
			case 2:
				system("cls");
				printf("\nSaliendo al menu de Transferencias\n\n");
				system("pause");
				system("cls");
				Transferencia1();
				break;
			default:
				system("cls");
				printf("\n[ERROR] SELECCIONE UNA OPCION VALIDA\n\n");
				system("pause");
				system("cls");
				Transferencia1();
		}
	}else if (opcion == 2){
		system("cls");
				printf("\nSaliendo al menu principal\n\n");
				system("pause");
				system("cls");
				menu1();
	}else {
		system("cls");
		printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n");
		system("pause");
		system("cls");
		Transferencia1();
	}
}

void servicios1(){
	int servicio, seguridad, opcion;
	float pago, recibo;
	printf("\n\t\t\tBIENVENIDO AL PAGO DE SERVICIOS");
	printf("\n\t\t----------------------------------------\n\n");
	printf("Ingresa[1] para pago de luz (CFE)\nIngresa[2] para pago del gas\nIngresa[3] para pagar el agua\nIngresa[4] para salir al menu principal\neleccion:");
	scanf("%i",&servicio);
	switch (servicio){
		case 1:
			system("cls");
			printf("\nUsted a elegido pagar servicio de luz (CFE)");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario1.ahorro){
					Usuario1.ahorro = Usuario1.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios1();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios1();
						 break;
				}
				case 2:
					system("cls");
					printf("\nHa decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f \n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios1();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("PAGO REALIZADO DE FORMA EXITOSA");
						system("pause");
						system("cls");
						servicios1();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios1();
					break;
				default:
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios1();	
			}
		case 2:
			system("cls");
			printf("\nUsted a elegido pagar servicio del gas\n");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario1.ahorro){
					Usuario1.ahorro = Usuario1.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios1();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios1();
						 break;
				}
				case 2:
					system("cls");
					printf("\nha decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f \n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios1();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("\nPAGO REALIZADO DE FORMA EXITOSA\n\n");
						system("pause");
						system("cls");
						servicios1();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios1();
					break;
				default:
					system("cls");
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios1();	
			}
		case 3:
			system("cls");
			printf("\nUsted a elegido pagar servicio del agua\n");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario1.ahorro){
					Usuario1.ahorro = Usuario1.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios1();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios1();
						 break;
				}
				case 2:
					system("cls");
					printf("\nha decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f\n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios1();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("\nPAGO REALIZADO DE FORMA EXITOSA\n\n");
						system("pause");
						system("cls");
						servicios1();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios1();
					break;
				default:
					system("cls");
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios1();	
			}
	    case 4: 
	    system("cls");
	     printf("\nHa escogido salir al menu principal\n\n");
		 system("pause");
		 system("cls");
		 menu1();
		 break;
		default:
		printf("[ERROR] INGRESE UNA OPCION VALIDA");
		system("pause");
		system("cls");
		servicios1();		
	}
}

void inversion1(){
	int plazo;
	float dinero, ganancia,porcentaje;
	printf("\n\t\t\tBIENVENIDO A INVERSION\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nAqui podra visualizar las ganancias que obtendria al invertir dinero con nosotros\n");
	printf("\nlos plazos son 3, 6 , 9 o 12 meses\n");
	printf("ingresa la cantidad de dinero que podrias invertir con nosotros: ");
	scanf("%f",&dinero);
	printf("Ahora ingresa el plazo que te gustaria invertirlo: ");
	scanf("%i",&plazo);
	switch(plazo){
		case 3:
			system("cls");
			porcentaje = (dinero * 10)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu1();
			break;
		case 6:
			system("cls");
			porcentaje = (dinero * 15)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu1();
			break;
		case 9:
			system("cls");
			porcentaje = (dinero * 20)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu1();
			break;
		case 12:
			system("cls");
			porcentaje = (dinero * 25)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu1();
			break;
		default:
			system("cls");
			printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
			system("pause");
			system("cls");
			inversion1();		
	}
}


void condiciones(){
	printf("\n\t\t\tTERMINOS Y CONDICIONES\n");
	printf("\t\t---------------------------------------------\n\n\n");
	printf("\nLorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris cursus at arcu eget euismod."); 
	printf("\nVestibulum bibendum quis risus vitae consequat. Mauris sit amet neque vel dui vestibulum dictum."); 
	printf("\nIn nec nunc magna. Suspendisse id ipsum laoreet sem tincidunt aliquam at eu lectus.") ;
	printf("\nMauris facilisis orci vel arcu varius pharetra. Nam placerat est lorem, in finibus libero dictum eget."); 
	printf("\nNullam molestie, arcu blandit vestibulum auctor, libero quam varius velit, interdum posuere tellus eros sit amet quam."); 
	printf("\nCurabitur quis lacus in lectus condimentum lacinia. Etiam faucibus tempor scelerisque. Nulla sapien elit, v");
	printf("\nehicula a euismod a, pellentesque sed massa. In quis leo nulla. Aenean ac odio ante. Aenean semper turpis lorem, n");
	printf("\non interdum nulla commodo vel.\n\n");
	system("pause");
	system("cls");
	menu1();
}

void despedida(){
	printf("\nMuchas gracias por usar nuestro software\n");
	printf("\nEste software fue creado por Diego Ricardo Aquino Chavez y Jorge Alexis Yahir Olague Rentería y se encuentra bajo licencia de software libre\n\n");
	printf("si piensas hacer uso del software solo haz mencion a nuestro github con el link: https://github.com/Drach23?tab=repositories");
	sleep(3);
	printf("Hasta pronto :D");
}



// funciones segundo usuario


void Cuenta2(){
	    system("cls");
		printf("\n\tDatos de tu cuenta: ");
		printf("\n\t----------------------------------------");
		printf("\n\tNombre de usuario: %s",Usuario2.username);
		printf("\n\tTipo de cuenta: %s",Usuario2.Cuenta);
		printf("\n\tDinero en cuenta: %.2f",Usuario2.ahorro);
		printf("\n\tFecha de vencimiento de su tarjeta: %i\n\n",Usuario2.vencimiento);
		system("pause");
		system("cls");
		menu2();
	}
void Deposito2(){
	int opcion, opc;
	float retirar, deposito;
	printf("\n\t\t\tBIENVENIDO A DEPOSITOS/RETIROS\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nSi quiere realizar un retiro ingrese [1]\nSi quiere realizar un deposito ingrese [2]\nSi desea volver al menu principal presione [3]\neleccion: ");
	scanf("%i",&opcion);
	if (opcion == 1){
		system("cls");
		printf("\nEsta usted seguro de querer realizar un retiro?\n\ningrese [1] para continuar\ningrese[2] para volver a menu depositos\neleccion: ");
		scanf("%i",&opc);
		if (opc == 1){
			system("cls");
			printf("\nIngrese la cantidad de dinero que desea retirar: ");
			scanf("%f",&retirar);
			if (retirar > Usuario2.ahorro){
				printf("\nLa cantidad de dinero a retirar es mayor que la cantidad de dinero con la que cuenta\n\n");
				system("pause");
				system("cls");
				Deposito2();
			} else{
				Usuario2.ahorro = Usuario2.ahorro - retirar;
				printf("\nRETIRO REALIZADO EXITOSAMENTE\n\n");
				system("pause");
				system("cls");
				Deposito2();
				
			}
		} else if (opc = 2){
			printf("\nVOLVIENDO AL MENU\n\n");
				system("pause");
				system("cls");
				Deposito2();
		}else{
			fflush(stdin);
			printf("[ERROR] INGRESE UNA OPCION VALIDA");
			system("pause");
			system("cls");
			Deposito2();
		}
		
	}else if (opcion == 2){
		system("cls");
		printf("\nEsta usted seguro de querer realizar un Deposito?\n\ningrese [1] para continuar\ningrese[2] para volver a menu depositos\neleccion: ");
		scanf("%i",&opc);
		if (opc == 1){
			system("cls");
			printf("\ningrese la cantidad de dinero que desea depositar: ");
			scanf("%f",&deposito);
			Usuario2.ahorro = Usuario2.ahorro + deposito;
			printf("\nEL DEPOSITO HA SIDO REALIZADO EXITOSAMENTE\n\n");
			system("pause");
			system("cls");
			Deposito2();
		} if (opc == 2){
			system("cls");
			printf("\nVOLVIENDO AL MENU\n\n");
			system("pause");
			system("cls");
			Deposito2();
		}else{
			printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
			system("pause");
			system("cls");
			Deposito2();
		} 	
	}else if (opcion == 3){
		system("cls");
		printf("\nVOLVIENDO AL MENU PRINCIPAL\n");
		system("pause");
		system("cls");
		menu2();
	}else{
		printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
		system("pause");
		system("cls");
		Deposito2();
	}
		
}
void Transferencia2(){
	int opcion, opc, cuenta,seguridad;
	float transferir;
	printf("\n\t\t\tBIENVENIDO A TRANSFERENCIAS\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nSi quiere realizar una Transferencia ingrese [1]\nSi desea volver al menu principal presione [2]\neleccion: ");
	scanf("%i",&opcion);
	if (opcion == 1){
		printf("\nIngresa el numero de cuenta al cual le realizaras una transferencia bancaria: ");
		scanf("%i",&cuenta);
		printf("\nIngresa la cantidad de dinero que deseas transferir a la cuenta: ");
		scanf("%f",&transferir);
		system("cls");
		printf("\nEstas seguro de que quieres depositar $%2.f  en el numero de cuenta %i\nIngresa[1] para continuar\nIngresa[2] para corregir\neleccion: ",transferir,cuenta);
		scanf("%i",&opc);
		switch(opc){
			case 1:
				switch(cuenta){
					case 2:
						system("cls");
					    printf("\n[ERROR] NO SE PUEDEN REALIZAR TRANSFERENCIAS A LA MISMA CUENTA QUE LA ENVIA.\n\n");
					    system("pause");
					    system("cls");
					    Transferencia2();
					    break;
					case 1:
						system("cls");
						Usuario1.ahorro = Usuario1.ahorro + transferir;
						Usuario2.ahorro = Usuario2.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia2();
						break;
					case 3:
						system("cls");
						Usuario3.ahorro = Usuario3.ahorro + transferir;
						Usuario2.ahorro = Usuario2.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia2();
						break;
					case 4:
						system("cls");
						Usuario4.ahorro = Usuario4.ahorro + transferir;
						Usuario2.ahorro = Usuario2.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia2();
						break;
					case 5:
						system("cls");
						Usuario5.ahorro = Usuario5.ahorro + transferir;
						Usuario2.ahorro = Usuario2.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia2();
						break;
					default:
						printf("\n[ERROR] INGRESE UN NUMERO DE CUENTA VALIDA\n\n");
						system("pause");
						system("cls");
						Transferencia2();
			}
			case 2:
				system("cls");
				printf("\nSaliendo al menu de Transferencias\n\n");
				system("pause");
				system("cls");
				Transferencia2();
				break;
			default:
				system("cls");
				printf("\n[ERROR] SELECCIONE UNA OPCION VALIDA\n\n");
				system("pause");
				system("cls");
				Transferencia2();
		}
	}else if (opcion == 2){
		system("cls");
				printf("\nSaliendo al menu principal\n\n");
				system("pause");
				system("cls");
				menu2();
	}else {
		system("cls");
		printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n");
		system("pause");
		system("cls");
		Transferencia2();
	}
}

void servicios2(){
	int servicio, seguridad, opcion;
	float pago, recibo;
	printf("\n\t\t\tBIENVENIDO AL PAGO DE SERVICIOS");
	printf("\n\t\t----------------------------------------\n\n");
	printf("Ingresa[1] para pago de luz (CFE)\nIngresa[2] para pago del gas\nIngresa[3] para pagar el agua\nIngresa[4] para salir al menu principal\neleccion:");
	scanf("%i",&servicio);
	switch (servicio){
		case 1:
			system("cls");
			printf("\nUsted a elegido pagar servicio de luz (CFE)");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario2.ahorro){
					Usuario2.ahorro = Usuario2.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios2();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios2();
						 break;
				}
				case 2:
					system("cls");
					printf("\nHa decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f \n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios2();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("PAGO REALIZADO DE FORMA EXITOSA");
						system("pause");
						system("cls");
						servicios2();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios2();
					break;
				default:
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios2();	
			}
		case 2:
			system("cls");
			printf("\nUsted a elegido pagar servicio del gas\n");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario2.ahorro){
					Usuario2.ahorro = Usuario2.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios2();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios2();
						 break;
				}
				case 2:
					system("cls");
					printf("\nha decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f \n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios2();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("\nPAGO REALIZADO DE FORMA EXITOSA\n\n");
						system("pause");
						system("cls");
						servicios2();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios2();
					break;
				default:
					system("cls");
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios2();	
			}
		case 3:
			system("cls");
			printf("\nUsted a elegido pagar servicio del agua\n");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario2.ahorro){
					Usuario2.ahorro = Usuario2.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios2();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios2();
						 break;
				}
				case 2:
					system("cls");
					printf("\nha decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f\n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios2();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("\nPAGO REALIZADO DE FORMA EXITOSA\n\n");
						system("pause");
						system("cls");
						servicios2();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios2();
					break;
				default:
					system("cls");
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios2();	
			}
	    case 4: 
	    system("cls");
	     printf("\nHa escogido salir al menu principal\n\n");
		 system("pause");
		 system("cls");
		 menu2();
		 break;
		default:
		printf("[ERROR] INGRESE UNA OPCION VALIDA");
		system("pause");
		system("cls");
		servicios2();		
	}
}

void inversion2(){
	int plazo;
	float dinero, ganancia,porcentaje;
	printf("\n\t\t\tBIENVENIDO A INVERSION\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nAqui podra visualizar las ganancias que obtendria al invertir dinero con nosotros\n");
	printf("\nlos plazos son 3, 6 , 9 o 12 meses\n");
	printf("ingresa la cantidad de dinero que podrias invertir con nosotros: ");
	scanf("%f",&dinero);
	printf("Ahora ingresa el plazo que te gustaria invertirlo: ");
	scanf("%i",&plazo);
	switch(plazo){
		case 3:
			system("cls");
			porcentaje = (dinero * 10)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu2();
			break;
		case 6:
			system("cls");
			porcentaje = (dinero * 15)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu2();
			break;
		case 9:
			system("cls");
			porcentaje = (dinero * 20)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu2();
			break;
		case 12:
			system("cls");
			porcentaje = (dinero * 25)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu2();
			break;
		default:
			system("cls");
			printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
			system("pause");
			system("cls");
			inversion2();		
	}
}


void condiciones2(){
	printf("\n\t\t\tTERMINOS Y CONDICIONES\n");
	printf("\t\t---------------------------------------------\n\n\n");
	printf("\nLorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris cursus at arcu eget euismod."); 
	printf("\nVestibulum bibendum quis risus vitae consequat. Mauris sit amet neque vel dui vestibulum dictum."); 
	printf("\nIn nec nunc magna. Suspendisse id ipsum laoreet sem tincidunt aliquam at eu lectus.") ;
	printf("\nMauris facilisis orci vel arcu varius pharetra. Nam placerat est lorem, in finibus libero dictum eget."); 
	printf("\nNullam molestie, arcu blandit vestibulum auctor, libero quam varius velit, interdum posuere tellus eros sit amet quam."); 
	printf("\nCurabitur quis lacus in lectus condimentum lacinia. Etiam faucibus tempor scelerisque. Nulla sapien elit, v");
	printf("\nehicula a euismod a, pellentesque sed massa. In quis leo nulla. Aenean ac odio ante. Aenean semper turpis lorem, n");
	printf("\non interdum nulla commodo vel.\n\n");
	system("pause");
	system("cls");
	menu2();
}

//funciones usuario 3:

void Cuenta3(){
	    system("cls");
		printf("\n\tDatos de tu cuenta: ");
		printf("\n\t----------------------------------------");
		printf("\n\tNombre de usuario: %s",Usuario3.username);
		printf("\n\tTipo de cuenta: %s",Usuario3.Cuenta);
		printf("\n\tDinero en cuenta: %.2f",Usuario3.ahorro);
		printf("\n\tFecha de vencimiento de su tarjeta: %i\n\n",Usuario3.vencimiento);
		system("pause");
		system("cls");
		menu3();
	}
void Deposito3(){
	int opcion, opc;
	float retirar, deposito;
	printf("\n\t\t\tBIENVENIDO A DEPOSITOS/RETIROS\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nSi quiere realizar un retiro ingrese [1]\nSi quiere realizar un deposito ingrese [2]\nSi desea volver al menu principal presione [3]\neleccion: ");
	scanf("%i",&opcion);
	if (opcion == 1){
		system("cls");
		printf("\nEsta usted seguro de querer realizar un retiro?\n\ningrese [1] para continuar\ningrese[2] para volver a menu depositos\neleccion: ");
		scanf("%i",&opc);
		if (opc == 1){
			system("cls");
			printf("\nIngrese la cantidad de dinero que desea retirar: ");
			scanf("%f",&retirar);
			if (retirar > Usuario3.ahorro){
				printf("\nLa cantidad de dinero a retirar es mayor que la cantidad de dinero con la que cuenta\n\n");
				system("pause");
				system("cls");
				Deposito3();
			} else{
				Usuario3.ahorro = Usuario3.ahorro - retirar;
				printf("\nRETIRO REALIZADO EXITOSAMENTE\n\n");
				system("pause");
				system("cls");
				Deposito3();
				
			}
		} else if (opc = 2){
			printf("\nVOLVIENDO AL MENU\n\n");
				system("pause");
				system("cls");
				Deposito3();
		}else{
			fflush(stdin);
			printf("[ERROR] INGRESE UNA OPCION VALIDA");
			system("pause");
			system("cls");
			Deposito3();
		}
		
	}else if (opcion == 2){
		system("cls");
		printf("\nEsta usted seguro de querer realizar un Deposito?\n\ningrese [1] para continuar\ningrese[2] para volver a menu depositos\neleccion: ");
		scanf("%i",&opc);
		if (opc == 1){
			system("cls");
			printf("\ningrese la cantidad de dinero que desea depositar: ");
			scanf("%f",&deposito);
			Usuario3.ahorro = Usuario3.ahorro + deposito;
			printf("\nEL DEPOSITO HA SIDO REALIZADO EXITOSAMENTE\n\n");
			system("pause");
			system("cls");
			Deposito3();
		} if (opc == 2){
			system("cls");
			printf("\nVOLVIENDO AL MENU\n\n");
			system("pause");
			system("cls");
			Deposito3();
		}else{
			printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
			system("pause");
			system("cls");
			Deposito3();
		} 	
	}else if (opcion == 3){
		system("cls");
		printf("\nVOLVIENDO AL MENU PRINCIPAL\n");
		system("pause");
		system("cls");
		menu3();
	}else{
		printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
		system("pause");
		system("cls");
		Deposito3();
	}	
}

void Transferencia3(){
	int opcion, opc, cuenta,seguridad;
	float transferir;
	printf("\n\t\t\tBIENVENIDO A TRANSFERENCIAS\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nSi quiere realizar una Transferencia ingrese [1]\nSi desea volver al menu principal presione [2]\neleccion: ");
	scanf("%i",&opcion);
	if (opcion == 1){
		printf("\nIngresa el numero de cuenta al cual le realizaras una transferencia bancaria: ");
		scanf("%i",&cuenta);
		printf("\nIngresa la cantidad de dinero que deseas transferir a la cuenta: ");
		scanf("%f",&transferir);
		system("cls");
		printf("\nEstas seguro de que quieres depositar $%2.f  en el numero de cuenta %i\nIngresa[1] para continuar\nIngresa[2] para corregir\neleccion: ",transferir,cuenta);
		scanf("%i",&opc);
		switch(opc){
			case 1:
				switch(cuenta){
					case 3:
						system("cls");
					    printf("\n[ERROR] NO SE PUEDEN REALIZAR TRANSFERENCIAS A LA MISMA CUENTA QUE LA ENVIA.\n\n");
					    system("pause");
					    system("cls");
					    Transferencia3();
					    break;
					case 1:
						system("cls");
						Usuario1.ahorro = Usuario1.ahorro + transferir;
						Usuario3.ahorro = Usuario3.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia3();
						break;
					case 2:
						system("cls");
						Usuario3.ahorro = Usuario2.ahorro + transferir;
						Usuario3.ahorro = Usuario3.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia3();
						break;
					case 4:
						system("cls");
						Usuario4.ahorro = Usuario4.ahorro + transferir;
						Usuario3.ahorro = Usuario3.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia3();
						break;
					case 5:
						system("cls");
						Usuario5.ahorro = Usuario5.ahorro + transferir;
						Usuario3.ahorro = Usuario3.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia3();
						break;
					default:
						printf("\n[ERROR] INGRESE UN NUMERO DE CUENTA VALIDA\n\n");
						system("pause");
						system("cls");
						Transferencia3();
			}
			case 2:
				system("cls");
				printf("\nSaliendo al menu de Transferencias\n\n");
				system("pause");
				system("cls");
				Transferencia3();
				break;
			default:
				system("cls");
				printf("\n[ERROR] SELECCIONE UNA OPCION VALIDA\n\n");
				system("pause");
				system("cls");
				Transferencia3();
		}
	}else if (opcion == 2){
		system("cls");
				printf("\nSaliendo al menu principal\n\n");
				system("pause");
				system("cls");
				menu3();
	}else {
		system("cls");
		printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n");
		system("pause");
		system("cls");
		Transferencia3();
	}
}

void servicios3(){
	int servicio, seguridad, opcion;
	float pago, recibo;
	printf("\n\t\t\tBIENVENIDO AL PAGO DE SERVICIOS");
	printf("\n\t\t----------------------------------------\n\n");
	printf("Ingresa[1] para pago de luz (CFE)\nIngresa[2] para pago del gas\nIngresa[3] para pagar el agua\nIngresa[4] para salir al menu principal\neleccion:");
	scanf("%i",&servicio);
	switch (servicio){
		case 1:
			system("cls");
			printf("\nUsted a elegido pagar servicio de luz (CFE)");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario3.ahorro){
					Usuario3.ahorro = Usuario3.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios3();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios3();
						 break;
				}
				case 2:
					system("cls");
					printf("\nHa decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f \n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios3();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("PAGO REALIZADO DE FORMA EXITOSA");
						system("pause");
						system("cls");
						servicios3();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios3();
					break;
				default:
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios3();	
			}
		case 2:
			system("cls");
			printf("\nUsted a elegido pagar servicio del gas\n");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario3.ahorro){
					Usuario3.ahorro = Usuario3.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios3();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios3();
						 break;
				}
				case 2:
					system("cls");
					printf("\nha decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f \n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios3();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("\nPAGO REALIZADO DE FORMA EXITOSA\n\n");
						system("pause");
						system("cls");
						servicios3();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios3();
					break;
				default:
					system("cls");
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios3();	
			}
		case 3:
			system("cls");
			printf("\nUsted a elegido pagar servicio del agua\n");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario3.ahorro){
					Usuario3.ahorro = Usuario3.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios3();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios3();
						 break;
				}
				case 2:
					system("cls");
					printf("\nha decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f\n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios3();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("\nPAGO REALIZADO DE FORMA EXITOSA\n\n");
						system("pause");
						system("cls");
						servicios3();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios3();
					break;
				default:
					system("cls");
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios3();	
			}
	    case 4: 
	    system("cls");
	     printf("\nHa escogido salir al menu principal\n\n");
		 system("pause");
		 system("cls");
		 menu3();
		 break;
		default:
		printf("[ERROR] INGRESE UNA OPCION VALIDA");
		system("pause");
		system("cls");
		servicios3();		
	}
}
void inversion3(){
	int plazo;
	float dinero, ganancia,porcentaje;
	printf("\n\t\t\tBIENVENIDO A INVERSION\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nAqui podra visualizar las ganancias que obtendria al invertir dinero con nosotros\n");
	printf("\nlos plazos son 3, 6 , 9 o 12 meses\n");
	printf("ingresa la cantidad de dinero que podrias invertir con nosotros: ");
	scanf("%f",&dinero);
	printf("Ahora ingresa el plazo que te gustaria invertirlo: ");
	scanf("%i",&plazo);
	switch(plazo){
		case 3:
			system("cls");
			porcentaje = (dinero * 10)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu3();
			break;
		case 6:
			system("cls");
			porcentaje = (dinero * 15)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu3();
			break;
		case 9:
			system("cls");
			porcentaje = (dinero * 20)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu3();
			break;
		case 12:
			system("cls");
			porcentaje = (dinero * 25)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu3();
			break;
		default:
			system("cls");
			printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
			system("pause");
			system("cls");
			inversion3();		
	}
}


void condiciones3(){
	printf("\n\t\t\tTERMINOS Y CONDICIONES\n");
	printf("\t\t---------------------------------------------\n\n\n");
	printf("\nLorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris cursus at arcu eget euismod."); 
	printf("\nVestibulum bibendum quis risus vitae consequat. Mauris sit amet neque vel dui vestibulum dictum."); 
	printf("\nIn nec nunc magna. Suspendisse id ipsum laoreet sem tincidunt aliquam at eu lectus.") ;
	printf("\nMauris facilisis orci vel arcu varius pharetra. Nam placerat est lorem, in finibus libero dictum eget."); 
	printf("\nNullam molestie, arcu blandit vestibulum auctor, libero quam varius velit, interdum posuere tellus eros sit amet quam."); 
	printf("\nCurabitur quis lacus in lectus condimentum lacinia. Etiam faucibus tempor scelerisque. Nulla sapien elit, v");
	printf("\nehicula a euismod a, pellentesque sed massa. In quis leo nulla. Aenean ac odio ante. Aenean semper turpis lorem, n");
	printf("\non interdum nulla commodo vel.\n\n");
	system("pause");
	system("cls");
	menu3();
}
// cuenta 4 funciones: 


void Cuenta4(){
	    system("cls");
		printf("\n\tDatos de tu cuenta: ");
		printf("\n\t----------------------------------------");
		printf("\n\tNombre de usuario: %s",Usuario4.username);
		printf("\n\tTipo de cuenta: %s",Usuario4.Cuenta);
		printf("\n\tDinero en cuenta: %.2f",Usuario4.ahorro);
		printf("\n\tFecha de vencimiento de su tarjeta: %i\n\n",Usuario4.vencimiento);
		system("pause");
		system("cls");
		menu4();
	}
void Deposito4(){
	int opcion, opc;
	float retirar, deposito;
	printf("\n\t\t\tBIENVENIDO A DEPOSITOS/RETIROS\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nSi quiere realizar un retiro ingrese [1]\nSi quiere realizar un deposito ingrese [2]\nSi desea volver al menu principal presione [3]\neleccion: ");
	scanf("%i",&opcion);
	if (opcion == 1){
		system("cls");
		printf("\nEsta usted seguro de querer realizar un retiro?\n\ningrese [1] para continuar\ningrese[2] para volver a menu depositos\neleccion: ");
		scanf("%i",&opc);
		if (opc == 1){
			system("cls");
			printf("\nIngrese la cantidad de dinero que desea retirar: ");
			scanf("%f",&retirar);
			if (retirar > Usuario4.ahorro){
				printf("\nLa cantidad de dinero a retirar es mayor que la cantidad de dinero con la que cuenta\n\n");
				system("pause");
				system("cls");
				Deposito4();
			} else{
				Usuario4.ahorro = Usuario4.ahorro - retirar;
				printf("\nRETIRO REALIZADO EXITOSAMENTE\n\n");
				system("pause");
				system("cls");
				Deposito4();
				
			}
		} else if (opc = 2){
			printf("\nVOLVIENDO AL MENU\n\n");
				system("pause");
				system("cls");
				Deposito4();
		}else{
			fflush(stdin);
			printf("[ERROR] INGRESE UNA OPCION VALIDA");
			system("pause");
			system("cls");
			Deposito4();
		}
		
	}else if (opcion == 2){
		system("cls");
		printf("\nEsta usted seguro de querer realizar un Deposito?\n\ningrese [1] para continuar\ningrese[2] para volver a menu depositos\neleccion: ");
		scanf("%i",&opc);
		if (opc == 1){
			system("cls");
			printf("\ningrese la cantidad de dinero que desea depositar: ");
			scanf("%f",&deposito);
			Usuario4.ahorro = Usuario4.ahorro + deposito;
			printf("\nEL DEPOSITO HA SIDO REALIZADO EXITOSAMENTE\n\n");
			system("pause");
			system("cls");
			Deposito4();
		} if (opc == 2){
			system("cls");
			printf("\nVOLVIENDO AL MENU\n\n");
			system("pause");
			system("cls");
			Deposito4();
		}else{
			printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
			system("pause");
			system("cls");
			Deposito4();
		} 	
	}else if (opcion == 3){
		system("cls");
		printf("\nVOLVIENDO AL MENU PRINCIPAL\n");
		system("pause");
		system("cls");
		menu4();
	}else{
		printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
		system("pause");
		system("cls");
		Deposito4();
	}	
}

void Transferencia4(){
	int opcion, opc, cuenta,seguridad;
	float transferir;
	printf("\n\t\t\tBIENVENIDO A TRANSFERENCIAS\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nSi quiere realizar una Transferencia ingrese [1]\nSi desea volver al menu principal presione [2]\neleccion: ");
	scanf("%i",&opcion);
	if (opcion == 1){
		printf("\nIngresa el numero de cuenta al cual le realizaras una transferencia bancaria: ");
		scanf("%i",&cuenta);
		printf("\nIngresa la cantidad de dinero que deseas transferir a la cuenta: ");
		scanf("%f",&transferir);
		system("cls");
		printf("\nEstas seguro de que quieres depositar $%2.f  en el numero de cuenta %i\nIngresa[1] para continuar\nIngresa[2] para corregir\neleccion: ",transferir,cuenta);
		scanf("%i",&opc);
		switch(opc){
			case 1:
				switch(cuenta){
					case 4:
						system("cls");
					    printf("\n[ERROR] NO SE PUEDEN REALIZAR TRANSFERENCIAS A LA MISMA CUENTA QUE LA ENVIA.\n\n");
					    system("pause");
					    system("cls");
					    Transferencia4();
					    break;
					case 1:
						system("cls");
						Usuario1.ahorro = Usuario1.ahorro + transferir;
						Usuario4.ahorro = Usuario4.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia4();
						break;
					case 2:
						system("cls");
						Usuario2.ahorro = Usuario2.ahorro + transferir;
						Usuario4.ahorro = Usuario4.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia4();
						break;
					case 3:
						system("cls");
						Usuario3.ahorro = Usuario3.ahorro + transferir;
						Usuario4.ahorro = Usuario4.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia4();
						break;
					case 5:
						system("cls");
						Usuario5.ahorro = Usuario5.ahorro + transferir;
						Usuario4.ahorro = Usuario4.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia4();
						break;
					default:
						printf("\n[ERROR] INGRESE UN NUMERO DE CUENTA VALIDA\n\n");
						system("pause");
						system("cls");
						Transferencia4();
			}
			case 2:
				system("cls");
				printf("\nSaliendo al menu de Transferencias\n\n");
				system("pause");
				system("cls");
				Transferencia4();
				break;
			default:
				system("cls");
				printf("\n[ERROR] SELECCIONE UNA OPCION VALIDA\n\n");
				system("pause");
				system("cls");
				Transferencia4();
		}
	}else if (opcion == 2){
		system("cls");
				printf("\nSaliendo al menu principal\n\n");
				system("pause");
				system("cls");
				menu4();
	}else {
		system("cls");
		printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n");
		system("pause");
		system("cls");
		Transferencia4();
	}
}

void servicios4(){
	int servicio, seguridad, opcion;
	float pago, recibo;
	printf("\n\t\t\tBIENVENIDO AL PAGO DE SERVICIOS");
	printf("\n\t\t----------------------------------------\n\n");
	printf("Ingresa[1] para pago de luz (CFE)\nIngresa[2] para pago del gas\nIngresa[3] para pagar el agua\nIngresa[4] para salir al menu principal\neleccion:");
	scanf("%i",&servicio);
	switch (servicio){
		case 1:
			system("cls");
			printf("\nUsted a elegido pagar servicio de luz (CFE)");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario4.ahorro){
					Usuario4.ahorro = Usuario4.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios4();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios4();
						 break;
				}
				case 2:
					system("cls");
					printf("\nHa decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f \n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios4();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("PAGO REALIZADO DE FORMA EXITOSA");
						system("pause");
						system("cls");
						servicios4();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios4();
					break;
				default:
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios4();	
			}
		case 2:
			system("cls");
			printf("\nUsted a elegido pagar servicio del gas\n");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario4.ahorro){
					Usuario4.ahorro = Usuario4.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios4();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios4();
						 break;
				}
				case 2:
					system("cls");
					printf("\nha decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f \n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios4();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("\nPAGO REALIZADO DE FORMA EXITOSA\n\n");
						system("pause");
						system("cls");
						servicios4();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios4();
					break;
				default:
					system("cls");
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios4();	
			}
		case 3:
			system("cls");
			printf("\nUsted a elegido pagar servicio del agua\n");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario4.ahorro){
					Usuario4.ahorro = Usuario4.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios4();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios4();
						 break;
				}
				case 2:
					system("cls");
					printf("\nha decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f\n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios4();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("\nPAGO REALIZADO DE FORMA EXITOSA\n\n");
						system("pause");
						system("cls");
						servicios4();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios4();
					break;
				default:
					system("cls");
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios4();	
			}
	    case 4: 
	    system("cls");
	     printf("\nHa escogido salir al menu principal\n\n");
		 system("pause");
		 system("cls");
		 menu4();
		 break;
		default:
		printf("[ERROR] INGRESE UNA OPCION VALIDA");
		system("pause");
		system("cls");
		servicios4();		
	}
}
void inversion4(){
	int plazo;
	float dinero, ganancia,porcentaje;
	printf("\n\t\t\tBIENVENIDO A INVERSION\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nAqui podra visualizar las ganancias que obtendria al invertir dinero con nosotros\n");
	printf("\nlos plazos son 3, 6 , 9 o 12 meses\n");
	printf("ingresa la cantidad de dinero que podrias invertir con nosotros: ");
	scanf("%f",&dinero);
	printf("Ahora ingresa el plazo que te gustaria invertirlo: ");
	scanf("%i",&plazo);
	switch(plazo){
		case 3:
			system("cls");
			porcentaje = (dinero * 10)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu4();
			break;
		case 6:
			system("cls");
			porcentaje = (dinero * 15)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu4();
			break;
		case 9:
			system("cls");
			porcentaje = (dinero * 20)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu4();
			break;
		case 12:
			system("cls");
			porcentaje = (dinero * 25)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu4();
			break;
		default:
			system("cls");
			printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
			system("pause");
			system("cls");
			inversion4();		
	}
}


void condiciones4(){
	printf("\n\t\t\tTERMINOS Y CONDICIONES\n");
	printf("\t\t---------------------------------------------\n\n\n");
	printf("\nLorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris cursus at arcu eget euismod."); 
	printf("\nVestibulum bibendum quis risus vitae consequat. Mauris sit amet neque vel dui vestibulum dictum."); 
	printf("\nIn nec nunc magna. Suspendisse id ipsum laoreet sem tincidunt aliquam at eu lectus.") ;
	printf("\nMauris facilisis orci vel arcu varius pharetra. Nam placerat est lorem, in finibus libero dictum eget."); 
	printf("\nNullam molestie, arcu blandit vestibulum auctor, libero quam varius velit, interdum posuere tellus eros sit amet quam."); 
	printf("\nCurabitur quis lacus in lectus condimentum lacinia. Etiam faucibus tempor scelerisque. Nulla sapien elit, v");
	printf("\nehicula a euismod a, pellentesque sed massa. In quis leo nulla. Aenean ac odio ante. Aenean semper turpis lorem, n");
	printf("\non interdum nulla commodo vel.\n\n");
	system("pause");
	system("cls");
	menu4();
}
//usuario 5 y ultimo


void Cuenta5(){
	    system("cls");
		printf("\n\tDatos de tu cuenta: ");
		printf("\n\t----------------------------------------");
		printf("\n\tNombre de usuario: %s",Usuario5.username);
		printf("\n\tTipo de cuenta: %s",Usuario5.Cuenta);
		printf("\n\tDinero en cuenta: %.2f",Usuario5.ahorro);
		printf("\n\tFecha de vencimiento de su tarjeta: %i\n\n",Usuario5.vencimiento);
		system("pause");
		system("cls");
		menu5();
	}
void Deposito5(){
	int opcion, opc;
	float retirar, deposito;
	printf("\n\t\t\tBIENVENIDO A DEPOSITOS/RETIROS\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nSi quiere realizar un retiro ingrese [1]\nSi quiere realizar un deposito ingrese [2]\nSi desea volver al menu principal presione [3]\neleccion: ");
	scanf("%i",&opcion);
	if (opcion == 1){
		system("cls");
		printf("\nEsta usted seguro de querer realizar un retiro?\n\ningrese [1] para continuar\ningrese[2] para volver a menu depositos\neleccion: ");
		scanf("%i",&opc);
		if (opc == 1){
			system("cls");
			printf("\nIngrese la cantidad de dinero que desea retirar: ");
			scanf("%f",&retirar);
			if (retirar > Usuario5.ahorro){
				printf("\nLa cantidad de dinero a retirar es mayor que la cantidad de dinero con la que cuenta\n\n");
				system("pause");
				system("cls");
				Deposito5();
			} else{
				Usuario5.ahorro = Usuario5.ahorro - retirar;
				printf("\nRETIRO REALIZADO EXITOSAMENTE\n\n");
				system("pause");
				system("cls");
				Deposito5();
				
			}
		} else if (opc = 2){
			printf("\nVOLVIENDO AL MENU\n\n");
				system("pause");
				system("cls");
				Deposito5();
		}else{
			fflush(stdin);
			printf("[ERROR] INGRESE UNA OPCION VALIDA");
			system("pause");
			system("cls");
			Deposito5();
		}
		
	}else if (opcion == 2){
		system("cls");
		printf("\nEsta usted seguro de querer realizar un Deposito?\n\ningrese [1] para continuar\ningrese[2] para volver a menu depositos\neleccion: ");
		scanf("%i",&opc);
		if (opc == 1){
			system("cls");
			printf("\ningrese la cantidad de dinero que desea depositar: ");
			scanf("%f",&deposito);
			Usuario5.ahorro = Usuario5.ahorro + deposito;
			printf("\nEL DEPOSITO HA SIDO REALIZADO EXITOSAMENTE\n\n");
			system("pause");
			system("cls");
			Deposito5();
		} if (opc == 2){
			system("cls");
			printf("\nVOLVIENDO AL MENU\n\n");
			system("pause");
			system("cls");
			Deposito5();
		}else{
			printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
			system("pause");
			system("cls");
			Deposito5();
		} 	
	}else if (opcion == 3){
		system("cls");
		printf("\nVOLVIENDO AL MENU PRINCIPAL\n");
		system("pause");
		system("cls");
		menu5();
	}else{
		printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
		system("pause");
		system("cls");
		Deposito5();
	}	
}

void Transferencia5(){
	int opcion, opc, cuenta,seguridad;
	float transferir;
	printf("\n\t\t\tBIENVENIDO A TRANSFERENCIAS\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nSi quiere realizar una Transferencia ingrese [1]\nSi desea volver al menu principal presione [2]\neleccion: ");
	scanf("%i",&opcion);
	if (opcion == 1){
		printf("\nIngresa el numero de cuenta al cual le realizaras una transferencia bancaria: ");
		scanf("%i",&cuenta);
		printf("\nIngresa la cantidad de dinero que deseas transferir a la cuenta: ");
		scanf("%f",&transferir);
		system("cls");
		printf("\nEstas seguro de que quieres depositar $%2.f  en el numero de cuenta %i\nIngresa[1] para continuar\nIngresa[2] para corregir\neleccion: ",transferir,cuenta);
		scanf("%i",&opc);
		switch(opc){
			case 1:
				switch(cuenta){
					case 5:
						system("cls");
					    printf("\n[ERROR] NO SE PUEDEN REALIZAR TRANSFERENCIAS A LA MISMA CUENTA QUE LA ENVIA.\n\n");
					    system("pause");
					    system("cls");
					    Transferencia5();
					    break;
					case 1:
						system("cls");
						Usuario1.ahorro = Usuario1.ahorro + transferir;
						Usuario5.ahorro = Usuario5.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia5();
						break;
					case 2:
						system("cls");
						Usuario3.ahorro = Usuario2.ahorro + transferir;
						Usuario5.ahorro = Usuario5.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia5();
						break;
					case 3:
						system("cls");
						Usuario5.ahorro = Usuario3.ahorro + transferir;
						Usuario5.ahorro = Usuario5.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia5();
						break;
					case 4:
						system("cls");
						Usuario4.ahorro = Usuario4.ahorro + transferir;
						Usuario5.ahorro = Usuario5.ahorro - transferir;
						printf("\nTRANSFERENCIA REALIZADA DE MANERA EXITOSA.\n\n");
						system("pause");
						system("cls");
						Transferencia5();
						break;
					default:
						printf("\n[ERROR] INGRESE UN NUMERO DE CUENTA VALIDA\n\n");
						system("pause");
						system("cls");
						Transferencia5();
			}
			case 2:
				system("cls");
				printf("\nSaliendo al menu de Transferencias\n\n");
				system("pause");
				system("cls");
				Transferencia5();
				break;
			default:
				system("cls");
				printf("\n[ERROR] SELECCIONE UNA OPCION VALIDA\n\n");
				system("pause");
				system("cls");
				Transferencia5();
		}
	}else if (opcion == 2){
		system("cls");
				printf("\nSaliendo al menu principal\n\n");
				system("pause");
				system("cls");
				menu5();
	}else {
		system("cls");
		printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n");
		system("pause");
		system("cls");
		Transferencia5();
	}
}

void servicios5(){
	int servicio, seguridad, opcion;
	float pago, recibo;
	printf("\n\t\t\tBIENVENIDO AL PAGO DE SERVICIOS");
	printf("\n\t\t----------------------------------------\n\n");
	printf("Ingresa[1] para pago de luz (CFE)\nIngresa[2] para pago del gas\nIngresa[3] para pagar el agua\nIngresa[4] para salir al menu principal\neleccion:");
	scanf("%i",&servicio);
	switch (servicio){
		case 1:
			system("cls");
			printf("\nUsted a elegido pagar servicio de luz (CFE)");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario2.ahorro){
					Usuario5.ahorro = Usuario5.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios5();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios5();
						 break;
				}
				case 2:
					system("cls");
					printf("\nHa decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f \n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios5();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("PAGO REALIZADO DE FORMA EXITOSA");
						system("pause");
						system("cls");
						servicios5();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios5();
					break;
				default:
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios5();	
			}
		case 2:
			system("cls");
			printf("\nUsted a elegido pagar servicio del gas\n");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario5.ahorro){
					Usuario5.ahorro = Usuario5.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios5();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios5();
						 break;
				}
				case 2:
					system("cls");
					printf("\nha decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f \n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios5();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("\nPAGO REALIZADO DE FORMA EXITOSA\n\n");
						system("pause");
						system("cls");
						servicios5();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios5();
					break;
				default:
					system("cls");
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios5();	
			}
		case 3:
			system("cls");
			printf("\nUsted a elegido pagar servicio del agua\n");
			printf("\nDesea pagarlo con el saldo de su cuenta o depositando dinero?\n\nIngrese[1] para pagar con dinero de la cuenta\nIngrese[2] para depositar el pago\nIngrese[3] para volver a el menu de servicios\neleccion: ");
			scanf("%i",&opcion);
			switch (opcion){
				case 1:
					system("cls");
					printf("\nHa decidido pagar con el dinero en su cuenta");
					printf("\nIngrese la cantidad que va a pagar: ");
					scanf("%f",&pago);
					if (pago < Usuario5.ahorro){
					Usuario5.ahorro = Usuario5.ahorro - pago;
					printf("\nPAGO REALIZADO DE MANERA EXITOSA\n\n");
					system("pause");
					system("cls");
					servicios5();
					break;
				   	}else{
						printf("\nLa cantidad a pagar es mayor a su saldo\n\n");
						system("pause");
						system("cls");
						servicios5();
						 break;
				}
				case 2:
					system("cls");
					printf("\nha decidido pagar con efectivo\n");
					printf("\nIngrese la cantidad que va a pagar\n: ");
					scanf("%f",&pago);
					printf("\nIngrese su pago: ");
					scanf("%f",&recibo);
					if (pago > recibo){
						pago = pago - recibo;
						printf("\nEl dinero ingresado es menor a la cantidad a pagar, ha pagado $%2.f le faltan $%2.f\n\n",recibo,pago);
						system("pause");
						system("cls");
						servicios5();
						break;
					}else if (pago <= recibo) {
						pago = pago - recibo;
						printf("\nPAGO REALIZADO DE FORMA EXITOSA\n\n");
						system("pause");
						system("cls");
						servicios5();
						break;
					}
				case 3:
					system("cls");
					printf("\nSaliendo al menu de servicios\n\n");
					system("pause");
					system("cls");
					servicios5();
					break;
				default:
					system("cls");
					printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
					system("pause");
					system("cls");
					servicios5();	
			}
	    case 4: 
	    system("cls");
	     printf("\nHa escogido salir al menu principal\n\n");
		 system("pause");
		 system("cls");
		 menu5();
		 break;
		default:
		printf("[ERROR] INGRESE UNA OPCION VALIDA");
		system("pause");
		system("cls");
		servicios5();		
	}
}

void inversion5(){
	int plazo;
	float dinero, ganancia,porcentaje;
	printf("\n\t\t\tBIENVENIDO A INVERSION\n");
	printf("\t\t---------------------------------------------\n");
	printf("\nAqui podra visualizar las ganancias que obtendria al invertir dinero con nosotros\n");
	printf("\nlos plazos son 3, 6 , 9 o 12 meses\n");
	printf("ingresa la cantidad de dinero que podrias invertir con nosotros: ");
	scanf("%f",&dinero);
	printf("Ahora ingresa el plazo que te gustaria invertirlo: ");
	scanf("%i",&plazo);
	switch(plazo){
		case 3:
			system("cls");
			porcentaje = (dinero * 10)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu5();
			break;
		case 6:
			system("cls");
			porcentaje = (dinero * 15)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu5();
			break;
		case 9:
			system("cls");
			porcentaje = (dinero * 20)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu5();
			break;
		case 12:
			system("cls");
			porcentaje = (dinero * 25)/100;
			ganancia = dinero + porcentaje;
			printf("\nHa seleccionado invertir $%.2f en un plazo de %i meses, lo cual le daria una ganancia de: $%.2f\n",dinero,plazo,porcentaje);
			printf("\nel total de su dinero seria: $%.2f\n\n",ganancia);
			system("pause");
			system("cls");
			menu5();
			break;
		default:
			system("cls");
			printf("\n[ERROR] INGRESE UNA OPCION VALIDA\n\n");
			system("pause");
			system("cls");
			inversion5();		
	}
}


void condiciones5(){
	printf("\n\t\t\tTERMINOS Y CONDICIONES\n");
	printf("\t\t---------------------------------------------\n\n\n");
	printf("\nLorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris cursus at arcu eget euismod."); 
	printf("\nVestibulum bibendum quis risus vitae consequat. Mauris sit amet neque vel dui vestibulum dictum."); 
	printf("\nIn nec nunc magna. Suspendisse id ipsum laoreet sem tincidunt aliquam at eu lectus.") ;
	printf("\nMauris facilisis orci vel arcu varius pharetra. Nam placerat est lorem, in finibus libero dictum eget."); 
	printf("\nNullam molestie, arcu blandit vestibulum auctor, libero quam varius velit, interdum posuere tellus eros sit amet quam."); 
	printf("\nCurabitur quis lacus in lectus condimentum lacinia. Etiam faucibus tempor scelerisque. Nulla sapien elit, v");
	printf("\nehicula a euismod a, pellentesque sed massa. In quis leo nulla. Aenean ac odio ante. Aenean semper turpis lorem, n");
	printf("\non interdum nulla commodo vel.\n\n");
	system("pause");
	system("cls");
	menu5();
}
