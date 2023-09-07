// Programa que hace un arbolito de navidad, pero con el mismo número de pisos hacia arriba y hacia abajo

#include <stdio.h>
#include <math.h>

int GenerarArbol(int Floors, int IsMirrored){
	
	if (IsMirrored == 2){
		int Space = 0;
		while (Space < Floors - 2){
			Space ++;
			printf(" ");
		}
		printf("====\n");
		
		int Space2 = 0;
		while (Space2 < Floors - 1){
			Space2++;
			printf(" ");
		} printf("||");
		
		
	} else {
		int Space = 0;
		
		while (Space < Floors - 1){
			Space ++;
			printf(" ");
		}
		printf("+");	
		
	}
	int i = 1;
	while (i < Floors){
		i++;
		int Step1 = (Floors - i);
		int Step2 = (i * 2);
	
		if (IsMirrored == 2){
		
			Step1 = i;
			Step2 = (Floors - i) * 2;
		}
		
		printf("\n");
		// Espacios
		int Space = 0;
		while (Space < Step1){
			Space ++;
			printf(" ");
		}
		int Character = 0;
		while (Character < Step2 - 1){
			Character ++;
			if (Character%7 == 0){
				printf("*");
			} else if (Character < (Step2 / 2) ){
				printf("/");
			} else if (Character == (Step2 /2) ){
				printf("||");
			} else if (Character > (Step2 /2) ){
				printf("\\");
			}
		}
	}
	printf("\n");
	if (IsMirrored == 2){
		int Space = 0;
		while (Space < Floors - 1){
			Space ++;
			printf(" ");
		}
		printf("+");
		printf("\n");
	} else {
		int Space = 0;
		while (Space < Floors - 1){
			Space++;
			printf(" ");
		}
		printf("||\n");
		Space = 0;
		while (Space < Floors - 2){
			Space++;
			printf(" ");
		}
		printf("====\n");
	}
}

int ReflejarArbol(int Floors){
	GenerarArbol(Floors, 2);
}

int InputDeUsuario(int Input, int Style){
	switch(Style) {
		case 1:
			printf("Usted eligio que su arbol se reflejara, generando... \n");
			GenerarArbol(Input,1);
			ReflejarArbol(Input);
			break;
		case 2:
			printf("Usted eligio que su arbol no se reflejara, generando... \n");
			GenerarArbol(Input,1);
			break;
		default:
			
			printf("El input %d, no se encuentra en la lista de opciones.\n", Style);
			break;
		
	}

}

int main(){
	
	while (1){
		printf("Inserta la cantidad de pisos deseada (Numeros enteros positivos): \n");
		int Num;
		scanf("%d",&Num);
		
		printf("Inserta 1 si quieres que tu arbol se refleje, 2 si deseas que no se refleje. \n");
		int Num2;
		scanf("%d",&Num2);
		
		InputDeUsuario(Num, Num2);
		
		printf("Escriba 2 si quiere finalizar el programa, de lo contrario, otorgue cualquier otro input: \n");
		int UserInputChoice;
		scanf("%d", &UserInputChoice);
		
		if (UserInputChoice == 2){
			break;
		}
		
	}
	
	return 0;
}
