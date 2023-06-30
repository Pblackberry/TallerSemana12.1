#include <stdio.h>

int ingresarOpcion(){
    int opcion=0;
    printf("1. Ingresar Mascota\n");
    printf("2. Menu servicios\n");
    printf("3. Facturar\n");
    printf("4. Salir\n");
    printf("Seleccione una accion a realizar: \n");
    scanf("%d", &opcion);

    return opcion;
}

void ingresoMascota(int *id, char *nombre, char *raza, int *edad, char *apellido){
    printf("Ingrese el id de la mascota: \n");
    scanf("%d", id);

    printf("Ingrese el nombre de la mascota: \n");
    scanf("%s", nombre);

    printf("Ingrese el tipo de mascota: \n");
    scanf("%s", raza);

    printf("Ingrese la edad de la mascota: \n");
    scanf("%d", edad);

    printf("Ingrese el apellido del dueño: \n");
    scanf("%s", apellido);

    return;

}

int ingresarServicio(){
    int pregunta, seleccion;
    printf("---------Menu Servicios----------\n");
    printf("1) Peluqeria: corte de pelo, $15\n");
    printf("2) Veterinaria: consulta veterinaria, $45\n");
    printf("3) Hospedaje: hotel canino, $70\n");
    printf("Que servicio desea facturar?");
    scanf("%d", &pregunta);
    
    return pregunta;
}


