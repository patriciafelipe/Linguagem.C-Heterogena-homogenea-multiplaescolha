#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float hora, manha, tarde, noite;
	
	printf("\n Digite a Hora da Chegada: ");
	scanf("%f", &hora);
	
	if(hora >= 5 && hora < 12.59){
		printf(" Turno Manhã \n");
	}
	
	else
		if(hora >= 13 && hora < 20.59){
			printf(" Turno Tarde \n");
		}
		
	else
		if(hora >= 21 || hora <= 4.59){
			printf(" Turno Noite \n");
		}
		
			system("PAUSE");
  return 0;
}	
