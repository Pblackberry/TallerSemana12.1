#include <stdio.h>
#include "funciones.h"



int main (int argc, char *argv[]) {
    int condicion, servicio;
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
            break;
        }
    }while(condicion !=4);
    printf("fin del programa");
    return 0;
}


























