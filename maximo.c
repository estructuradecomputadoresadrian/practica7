#include <stdio.h>
#include <math.h>
#define TAN 10

void inicializa(int vector2[TAN]){
	for (int i = 0; i < TAN; i++)
	{
		printf("Introduce el valor en la posicion %d: ", i);
		scanf("%d",&vector2[i]);
	}
}

int maximo(int vector3[TAN]){
	int max = vector3[0];
	for (int i2 = 0; i2 < TAN; i2++)
	{
		if(vector3[i2] > max){
			max = vector3[i2];
		}
	}
	return(max);
}



int main() {
	int vector[TAN];
	inicializa(vector);
	int maximo2 = maximo(vector);
	printf("El valor maximo del vector introducido es %d.\n" ,maximo2);
	return 0;
}