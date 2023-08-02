//David Romero
//Redes de computadoras

#include <stdio.h>

//conertir numero en vector con separacion d digitos
int num_vec(int num, int arr[]){
	int dig = 0;
	int temp = num;

	//bucle hasta que temp sea 0, ademas de eliminar segundo digito y contarlos
	while (temp !=0){ 
		temp /= 10;
		dig++;
	}

	//posicion del array
	int i = dig - 1;
	
	//separa los digitos del numero y los guarda en el vector
	while (num != 0){
		arr[i] = num % 10;
		num /= 10;
		i--;
	}
	return dig; //devuelve tamano de vector
}

//funcion para sumar un valor al digito especificado
void suma(int arr[], int size, int posicion, int sum_dig){
	arr[posicion] += sum_dig;

	int mayor = 0;
	
	//solo permite un digito por posicion
	for (int i = size - 1; i >= 0; i--){
		arr[i] += mayor;
		mayor = arr[i] / 10;
		arr[i] %= 10;
	}
	
	
	if (mayor > 0 ){	
		size++;
		for (int i = size - 1; i > 0; i--){
			arr[i] = arr[i - 1];
		}
		arr[0] = mayor % 10;
	}
}

int main(){
	int num, posicion, sum_dig;
	printf("Ingrese un numer: ");
	scanf("%d", &num);

	int arr[20]; //definimos un tamano maximo del vector
	
	int size = num_vec(num, arr);

	printf("Vector: [");
	for (int i = 0; i < size; i++){
		printf("%d", arr[i]);
		if (i != size - 1)
			printf(",");
				
	}
	printf("]\n");

	printf("Ingrese la posicion a sumar: ");
	scanf("%d", &posicion);

	printf("Ingrese el valor de suma: ");
	scanf("%d", &sum_dig);
	
	//suma el valor en la posicion dada y ajusta los digitos
	suma(arr, size, posicion, sum_dig);

	printf("Resultado: [");
	for (int i = 0; i < size; i++){
		printf("%d", arr[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("]\n");

	return 0;

}












































