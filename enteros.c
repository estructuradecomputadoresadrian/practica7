#include <stdio.h>
#define TAM 20
#define TAM2 3

void enteros(int vectore[TAM], int vectore2[TAM2]){
	vectore2[0]=0;
	vectore2[1]=0;
	vectore2[2]=0;
	for (int i = 0; i < TAM; i++){
		if (vectore[i] > 0){
			vectore2[0]++;
		}
		else{
			if (vectore2[i] < 0){
				vectore2[1]++;
			}
			else{
				vectore2[2]++;
			}
		}
	}
}

int main (){
	int vector[TAM];
	int vector2[TAM2];
	printf("Algoritmo que calcula los positivos, negativos y numeros nulos dentro de un conjunto de numeros.\n\n");
	for (int i = 0; i < TAM; i++)
	{
		printf("Introduce el entero en la posicion %d: ", i);
		scanf("%d",&vector[i]);
	}
	enteros(vector,vector2);
	if (vector2[2]==0){
		printf("De los numeros introducidos %d son positivos, %d son negativos y no hay ningun numero que valga cero.\n",vector2[0],vector2[1]);
	}
	else{
		printf("De los numeros introducidos %d son positivos, %d son negativos y %d de los numeros valen 0.\n",vector2[0],vector2[1],vector2[2]);
	}		
	return 0;
	
}