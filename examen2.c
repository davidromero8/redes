//David Romero
//Redes de computadoras

#include <stdio.h>

int main(){
	int vec[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 33, 54, 7};
	//calcula numero de elementos en el arreglo
	int num_eleme = sizeof(vec) / sizeof(vec[0]);
	int num, i, j;
	//guarda el numero de combinaciones
	int combinaciones[num_eleme][2];
	int num_combinaciones = 0;

	printf("Ingresa un numero: ");
	scanf("%d", &num);
	
	//busca las combinciones de elementos
	for(i = 0; i < num_eleme; i++){
		for (j = i + 1; j < num_eleme; j++){
			//verifica si la suma de los elementos es igual al numero dado
			if(vec[i] + vec[j] == num){	
				//guarda las posiciones encontradas
				combinaciones[num_combinaciones][0] = i;
				combinaciones[num_combinaciones][1] = j;
				num_combinaciones++;
			}
		}
	}

	if (num_combinaciones > 0){
		//imprime las combinaciones con sus posiciones
		for (i = 0; i < num_combinaciones; i++){
			printf("\nSuma %d: %d + %d = %d\n", i + 1, vec[combinaciones[i][0]], vec[combinaciones[i][1]], num);
			printf("Posicion de suma: %d y %d\n\n", combinaciones[i][0], combinaciones[i][1]);
		}
	}else {
		printf("No hay combinaciones\n");
	}

	return 0;
}
