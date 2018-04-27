#include <stdio.h>
int buscar, encontrado, indice;
int arreglo[16]={1,4,6,8,10,12,14,16,18,20,22,24,25,26,28,30};
main(){
    printf("Ingresa un número:");
    scanf("%d", &buscar);
    printf("El valor que usted introdujo es: %d\n",buscar);
    encontrado = 0;
     for (indice=0;indice<16;indice++){
        if (arreglo[indice] == buscar){
            encontrado =1;
        }
     }
    if(encontrado==1){
        printf("Numero encontrado!");
     } else {
        printf("Numero no encontrado!\nLista de Numeros: ");
        for (indice=0; indice<16; indice++){
            (indice<3)?printf("%d, ",arreglo[indice]):printf("%d.",arreglo[indice]);
         }
       }
    getchar();
    return 0 ;
}
