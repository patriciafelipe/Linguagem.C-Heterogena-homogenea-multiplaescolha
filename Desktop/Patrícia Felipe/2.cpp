#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float alt, peso, imc altu;
	
	printf("\n Digit seu peso: ");
	scanf("%d", &peso);
	
	printf("\n Digite sua altura: ");
	scanf("%d", &altu);
	
	alt= altu*altu;
	imc=(peso/alt);
	
	printf("\n Seu IMC é de: %f", imc);
	
	if(imc<18){
		printf("Magreza");
	}
	
	
	else{
		if(imc>=25 && imc <29.9){
	printf("\n Sobrepeso");
	}
