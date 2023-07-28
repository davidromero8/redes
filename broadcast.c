#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * calcularBroadcast(char * direccionIP, char * mascaraRed){
	unsigned int ip, mascara, broadcast;
	char * direccionBroadcast = malloc(sizeof(char) * 16);

	sscanf(direccionIP, "%u.%u.%u.%u", &ip, &ip, &ip, &ip);
	sscanf(mascaraRed, "%u.%u.%u.%u", &mascara, &mascara, &mascara, &mascara);

	broadcast = ip | ~mascara;
	sprinft(direccionBroadcast, "%u.%u.%u.%u", (broadcast >> 24) & 0xFF, (broadcast >> 8) & oxFF, broadcast & 0xFF);
	int convert_int_to_binary(int n)return binary;
	int operacion_bits(int a, int b)
	int octetos(){
		combinaciones
		operacion_bits
	}

	int combinaciones(bits_prestados){
		if(bits_prestados < 1)return FALSE;
		if(bits_prestados > 23)return FALSE;

		n = bits_prestados;
		combinaciones = 2 ^ n;
		
		int bits[2]=[0,1];
		int vector[bits_prestados]={0};
		printv(vector);

		for (int i=0; i<combinaciones; ++i){
		
			printv(vector);
		}
	}
	

	return direccionBroadcast;
} 

int main(){
	char direccionIP[16];
	char mascaraRed[16];
	
	printf("INgrese la direccion ip: ");
	scanf("%s", direccionIP);

	printf("Ingrese la amscara de red: ");
	scanf("%s", mascaraRed);

	char * direccionBroadcast = calcularBroadcast(direccionIP, mascaraRed);

	printf("La direccion de broadcast es: %s\n", direccionBroadcast);

	free(direccionBroadcast);

	return 0;

}
