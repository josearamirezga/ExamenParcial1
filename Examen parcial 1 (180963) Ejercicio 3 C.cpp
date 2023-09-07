// Programa que obtiene los impares de una lista de enteros (tomando en cuenta los numeros negativos).
#include <stdio.h>
#include <math.h>
int main(){
	while (1){
		printf("Elegir el rango N, del cual se obtendran los números impares a partir del 0: \n");
		int Num;
		scanf("%d",&Num);
	
		printf("Los números impares de 0 al %d, son:\n", Num);
		int AbsolNum = powf(powf(Num,2), 0.5);
		
		int i = 0;
		while (i <= AbsolNum){
			i++;
			if (i%2 == 1){
				int CorrectVal = (i * Num)/AbsolNum;
				printf("%d\n",CorrectVal);
			
			}
		}
		
		printf("Escriba 2 si quiere finalizar el programa, de lo contrario, otorgue cualquier otro input: \n");
		int UserInputChoice;
		scanf("%d", &UserInputChoice);
		
		if (UserInputChoice == 2){
			break;
		}
		
		
		
	}
	
	
	
}
