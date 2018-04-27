#include<stdio.h>
#define dimension 3
main()
{
	int indice,j;
	float menor,AUX,valor;
	float arreglo[dimension];
	int pos_menor,alto,central,bajo;
    clrscr();

	/* lee el vector */
	for(indice=0;indice<dimension;indice++)
	  {
		printf( "arreglo[%i] = ",indice);
		scanf("%f",&arreglo[indice]);
	  }

	/* Ordena por Selecci¢n */
	for(indice=0;indice<dimension;indice++)
	  {
		menor=arreglo[indice];
		pos_menor=indice;
		for(j=indice+1;j<dimension;j++)
		  {
			if(menor>arreglo[j])
			  {
				menor=arreglo[j];
				pos_menor=j;
			  }
		   }
		AUX=arreglo[indice];
		arreglo[indice]=arreglo[pos_menor];
		arreglo[pos_menor]=AUX;
	  }

	/* imprime el vector */
	for(indice=0;indice<dimension;indice++)
	  {
		printf("arreglo[%i]=%f\n",indice,arreglo[indice]);
	  }
    printf("\n¨Qu‚ valor desea buscar? ");
	scanf("%f",&valor);
    bajo=0;
	alto=dimension-1;
    central=(bajo+alto)/2;

    /* busqueda binaria */
	while(bajo<=alto&&arreglo[central]!=valor)
	  {
		if(valor<arreglo[central]) alto=central-1;
		else bajo=central+1;
		central=(bajo+alto)/2;
	  }
    if(valor==arreglo[central]) printf("El valor se encuentra en la posición %i",central);
	else printf("El valor no se encuentra");
    getch();
}
