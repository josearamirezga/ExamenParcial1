// Programa que imprime 10 números, a partir del número entero que se le otorga (En orden positivo).
#include <stdio.h>

int main(){
	
	while(1){
		
		printf("Elegir el numero del cual se quiere obtener los siguientes 10 enteros: \n");
		int Num;
		scanf("%d",&Num);
		
		printf("El numero seleccionado es:%d\n", Num);
		printf("Los 10 números siguientes son:\n"); 
		
		int i = 1;
		while (i <= 10){
			i++;
			int NumSum = Num + i;
			printf("%d\n",NumSum);
			
		}
		printf("Escriba 2 si quiere finalizar el programa, de lo contrario, otorgue cualquier otro input: \n");
		int UserInputChoice;
		scanf("%d", &UserInputChoice);
		
		if (UserInputChoice == 2){
			break;
		}
		
	}	
	return 0;
}
