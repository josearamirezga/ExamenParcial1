// Programa que obtiene la tabla de multiplicar de un numero hasta el 10.

#include <stdio.h>
#include <math.h>
int main(){
	
	while (1){
		
		printf("Elegir el numero N del cual se desea obtener los 10 primeros multiplos: \n");
		int Num;
		scanf("%d",&Num);
	
		printf("La tabla de multiplicar hasta el 10 de %d es:\n ---------------------------- \n", Num);
		
		int i = 0;
		while(i < 10){
			i++;
			int MultIndex = Num * i;
			printf("%d Multiplicado por %d =  %d  \n", Num, i, MultIndex);
			
		}
		
		printf("---------------------------- \n");
		
		printf("Escriba 2 si quiere finalizar el programa, de lo contrario, otorgue cualquier otro input: \n");
		int UserInputChoice;
		scanf("%d", &UserInputChoice);
		
		if (UserInputChoice == 2){
			break;
		}
	}
	
	return 0;
}
