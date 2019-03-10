#include <stdio.h>
#define TAM 15
#define TAM2 2

void leerVector(int vectorl[TAM]){
	for (int i = 0; i < TAM; i++){
		printf("Introduce el entero en la posicion %d: ",i);
		scanf("%d",&vectorl[i]);
	}
}

void parImpar(int vectorp[TAM], int vectorp2[TAM2]){
	int par;
	vectorp2[0] = 0;
	vectorp2[1] = 0;
	for (int i = 0; i < TAM; ++i){
		par = vectorp[i] % 2;
		if (par == 0){
			vectorp2[0]++;
		}
		else{
			vectorp2[1]++;
		}
	}
}

int main(){
	int vector[TAM];
	int vector2[TAM2];
	leerVector(vector);
	parImpar(vector,vector2);
	if(vector2[1] == 0){
		printf("Todos los numeros introducidos son pares.\n");
	}
	else{
		if(vector2[0] == 0){
			printf("Todos los numeros introducidos son impares.\n");
		}
		else{
			printf("Entre los numeros introducidos hay %d numeros pares y %d numeros impares.\n", vector2[0], vector2[1]);
		}
	}
	return 0;
}