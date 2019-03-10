#include <stdio.h>
#include <math.h>
#define TAM 15

float media15(int vectorm[TAM]){
	float suma = 0;
	for (int i = 0; i < TAM; i++){
		(float)vectorm[i];
		suma = suma + vectorm[i];
	}
	suma = suma / TAM;
	return suma;
}

float varianza15(int vectorv[TAM], int mediav){
	float varianza2 = 0;
	for (int i = 0; i < TAM; i++)
	{
		varianza2 = varianza2 + pow(vectorv[i]-mediav,2);
	}
	varianza2 = varianza2 / TAM;
	return varianza2;
}

float desviacion15(float varianzav){
	float dt = sqrt(varianzav);
	return dt;
}


int main (){
	printf("Algoritmo que calcula la varianza, media y desviación tipica de un conjunto de numeros.\n\n");
	int vector[TAM];
	for (int i = 0; i < TAM; i++){
		printf("Introduce el valor en la posicion %d: ", i);
		scanf("%d",&vector[i]);
	}
	float media = media15(vector);
	float varianza = varianza15(vector, media);
	float desviacion = desviacion15(varianza);
	printf("\nLa media de ese conjunto es %.2f\n", media);
	printf("La varianza de ese conjunto es %.2f\n", varianza);
	printf("La desviacion tipica de ese conjunto es %.2f\n", desviacion);
	return 0;
}
