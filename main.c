#include <stdio.h>
#include "funciones.h"



int main (int argc, char *argv[]) {
    int condicion, servicio, servicio2, servicio3, numservicio, numservicio2;
    int id, edad, ids1, ids2, ids3, precio1, precio2, precio3;
    char nombre[50], raza[50], apellido[50], ns1[50], ns2[50], ns3[50];
    do{
        condicion=ingresarOpcion();
        switch(condicion){
            case 1:
            ingresoMascota(&id, &nombre, &raza, &edad, &apellido);

            break;

            case 2: 
            servicio=ingresarServicio();
            printf("desea ingresar otro servicio? (1.si o 2.no)");
            scanf("%d", &numservicio);
            if(numservicio==1){
                servicio2=ingresarServicio();
            }
            printf("desea ingresar otro servicio? (1.si o 2.no)");
            scanf("%d", &numservicio2);
            if(numservicio2==1){
                servicio3=ingresarServicio();
            }
            break;

            case 3:
                printf("----------------------Factura----------------------\n");
                printf("Datos de la mascota:\n");
                printf("Id: %d     Nombre: %s     tipo: %s     edad: %d      Dueno: %s\n", id, nombre, raza, edad, apellido);
                printf("Servicio: \n");
                printf("ID            nombre            precio\n");
            if(servicio==1){
                printf("1             Peluqueria        $15\n");
            }else if(servicio==2){
                printf("2             Consulta          $45\n");
            }else if(servicio==3){
                printf("3             Hospedaje         $70\n");
            }

            if(servicio2==1){
                printf("1             Peluqueria        $15\n");
            }else if(servicio2==2){
                printf("2             Consulta          $45\n");
            }else if(servicio2==3){
                printf("3             Hospedaje         $70\n");
            }

            if(servicio3==1){
                printf("1             Peluqueria        $15\n");
            }else if(servicio3==2){
                printf("2             Consulta          $45\n");
            }else if(servicio3==3){
                printf("3             Hospedaje         $70\n");
            }
            break;

            
        }
    }while(condicion !=4);
    printf("fin del programa");
    return 0;
}


























