void ingresoServicio(int *ids1, int *ids2, int *ids3, char *ns1, char *ns2, char *ns3, int *precio1, int *precio2, int *precio3)
{
    int pregunta, seleccion;
    printf("---------Menu Servicios----------\n");
    printf("1) Peluqeria: corte de pelo, $15\n");
    printf("2) Veterinaria: consulta veterinaria, $45\n");
    printf("3) Hospedaje: hotel canino, $70\n");
    precio1=0;
    ids1=0;
    do{

        printf("escoja el servicio a facturar: \n");
        scanf("%d", &seleccion);
        if (seleccion==1){
            printf("Ingrese el ID del servicio");
            scanf("%d", &ids1);
            printf("ingrese el nombre del servicio\n");
            scanf("%s", ns1);
            printf("Ingrese el precio del servicio: \n");
            scanf("%d", &precio1);
        }else if(seleccion==2){
            printf("Ingrese el ID del servicio");
            scanf("%d", &ids2);
            printf("ingrese el nombre del servicio\n");
            scanf("%s", ns2);
            printf("Ingrese el precio del servicio: \n");
            scanf("%d", &precio2);
        }else if(seleccion==3){
            printf("Ingrese el ID del servicio");
            scanf("%d", &ids3);
            printf("ingrese el nombre del servicio\n");
            scanf("%s", ns3);
            printf("Ingrese el precio del servicio: \n");
            scanf("%d", &precio3);
        }
        printf("Desea ingresar otro servicio? (1.si 2.no)\n");
        scanf("%d", &pregunta);
    }while(pregunta!=2);

    return;
}

void imprimirFactura(int id, char nombre,  char raza, int edad, char apellido, char ns1, char ns2, char ns3){
    printf("-------------Factura--------------\n");
    printf("datos de la mascota: \n");
    printf("Id: %d     Nombre: %s     Edad: %d      Dueno: %s\n", id, nombre, edad, apellido);
    return;
}