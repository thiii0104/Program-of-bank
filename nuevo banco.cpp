//App Bancaria ATM American Black

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <unistd.h>

int main(){

    int contrasena;

    char concor[] = "Contraseña correcta, bienvenido a su cuenta";
    char conin[] = "Contraseña incorrecta, por favor intente de nuevo";

    system("clear");

    printf("Banco ATM American Black\n\n");

    printf("Ingrese su contraseña: ");
    scanf("%d", &contrasena);

    while(contrasena != 7520)
    {
        printf("%s\n", conin);

        sleep(2);

        system("clear");

        printf("Ingrese su contraseña: ");
        scanf("%d", &contrasena);
    }

    system("clear");

    printf("%s\n\n", concor);

    char cuenta[] = "NAME";

    printf("Bienvenido a su cuenta: %s\n\n", cuenta);

    int saldo = 100000;
    int opc = 0;
    int deposito;

    while(opc != 7)
    {
        printf("=========== MENU ===========\n\n");

        printf("Operaciones disponibles:\n"
               "[1]. Consultar saldo\n"
               "[2]. Retirar dinero\n"
               "[3]. Transferir dinero\n"
               "[4]. Pagar servicios\n"
               "[5]. Consultar CBU\n"
               "[6]. Depositar dinero\n"
               "[7]. Salir\n\n");

        printf("Seleccione una opcion: ");
        scanf("%d", &opc);

        system("clear");

        switch(opc)
        {
            case 1:
            {
                printf("Su saldo es de: $%d\n", saldo);

                sleep(2);

                system("clear");

                break;
            }

            case 2:
            {
                int retiro;

                printf("Ingrese el monto a retirar: ");
                scanf("%d", &retiro);

                if(retiro > saldo)
                {
                    printf("Fondos insuficientes\n");
                }
                else
                {
                    saldo -= retiro;

                    printf("Retiro exitoso\n");
                    printf("Su nuevo saldo es de: $%d\n", saldo);
                }

                system("clear");

                break;
            }

            case 3:
            {
                int opcionPersona;
                int transferencia;

                char personas[20][100] = {
                    "Alejandro Gonzalez",
                    "Maria Lopez",
                    "Juan Perez",
                    "Lucia Fernandez",
                    "Carlos Sanchez",
                    "Sofia Ramirez",
                    "Diego Torres",
                    "Valentina Gomez",
                    "Mateo Diaz",
                    "Isabella Flores",
                    "Ana Martinez",
                    "Luis Rodriguez",
                    "Camila Hernandez",
                    "Gabriel Silva",
                    "Martina Castro",
                    "Daniel Morales",
                    "Victoria Ortiz",
                    "Francisco Ramirez",
                    "Emilia Gomez",
                    "Pablo Fernandez"
                };

                printf("Transferencia a:\n\n");

                for(int i = 0; i < 20; i++)
                {
                    printf("[%d]. %s\n", i + 1, personas[i]);
                }

                printf("\nSeleccione una persona: ");
                scanf("%d", &opcionPersona);

                if(opcionPersona < 1 || opcionPersona > 20)
                {
                    printf("Persona no valida\n");
                }
                else
                {
                    printf("Transferencia a: %s\n",
                           personas[opcionPersona - 1]);

                    printf("Ingrese el monto a transferir: ");
                    scanf("%d", &transferencia);

                    if(transferencia > saldo)
                    {
                        printf("Fondos insuficientes\n");
                    }
                    else
                    {
                        saldo -= transferencia;

                        printf("Transferencia realizada con exito\n");
                        printf("Su nuevo saldo es de: $%d\n", saldo);
                        printf("Presione enter para limpiar la pantalla...");
                        getchar();
                        
                    }
                }


                system("clear");

                break;
            }

            case 4:
            {
                int pago;

                printf("Ingrese el monto a pagar: ");
                scanf("%d", &pago);

                if(pago > saldo)
                {
                    printf("Fondos insuficientes\n");
                }
                else
                {
                    saldo -= pago;

                    printf("Pago realizado con exito\n");
                    printf("Su nuevo saldo es de: $%d\n", saldo);
                }


                system("clear");

                break;
            }

            case 5:
            {
                printf("Su CBU es: 092378561273834\n");

                system("clear");

                break;
            }

            case 6:
            {
                printf("Cuanto vas a depositar?\n");

                scanf("%d", &deposito);

                saldo += deposito;

                printf("Deposito realizado con exito\n");
                printf("Su nuevo saldo es de: $%d\n", saldo);

                system("clear");

                break;
            }

            case 7:
            {
                printf("Gracias por usar Banco ATM American Black\n");
                printf("Vuelva pronto!\n");

                break;
            }

            default:
            {
                printf("Opcion no valida\n");

                sleep(2);

                system("clear");

                break;
            }
        }
    }

    return 0;
}
