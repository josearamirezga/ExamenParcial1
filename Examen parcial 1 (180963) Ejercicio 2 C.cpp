//Programa que suma N números enteros a partir de 0 (Tomando en cuenta números negativos).

#include <stdio.h>
#include <math.h>
int main(){
	while (1){
		
		printf("Elegir el número N, del cual se obtendra la suma a partir del 0: \n");
		int Num;
		scanf("%d",&Num);
		
		printf("El numero seleccionado es:%d\n", Num);
		printf ("La suma gaussiana del 0 al número %d, es:\n", Num);
		
		int AbsolNum = powf(powf(Num,2), 0.5);
		int StoredVar = 0;
		
		int i = 0;
		
		while (i <= AbsolNum){
			
			i++;
			StoredVar = StoredVar + i;
			
		}
		
		StoredVar = (StoredVar * Num)/AbsolNum;
		printf("%d \n", StoredVar);
		
		printf("Escriba 2 si quiere finalizar el programa, de lo contrario, otorgue cualquier otro input: \n");
		int UserInputChoice;
		scanf("%d", &UserInputChoice);
		
		if (UserInputChoice == 2){
			break;
		}
		
	}
	return 0;
}
