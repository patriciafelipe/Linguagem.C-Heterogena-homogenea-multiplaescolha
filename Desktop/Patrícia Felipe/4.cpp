#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int num;
	
	printf("\n Escolha u Número de 1 a 12: 1: Janeiro , 2: Fevereiro, 3: Março, 4: Abril , 5: Maio, 6: Junho, 7: Julho, 8: Agosto, 9: Setembro, 10: Outubro, 11: Novembro, 12: Dezembro");
	printf("\n Digite o número do mês correspondente: ");
		scanf("%d", &num);
		
	switch(num){
	case 1:
		printf(" Janeiro \n");
		break;
		
	case 2:
		printf("Fevereiro \n");
		break;
		
	case 3:
		printf("Março \n");
		break;
		
	case 4:
		printf("Abril \n");
		break;
		
	case 5:
		printf("Maio \n");
		break;
		
	case 6:
		printf("Junho \n");
		break;
		
	case 7:
		printf("Julho \n");
		break;
		
	case 8:
		printf("Agosto \n");
		break;
		
	case 9:
		printf("Setembro \n");
		break;
		
	case 10:
		printf("Outubro \n");
		break;
		
	case 11:
		printf("Novembro \n");
		break;
		
	case 12:
		printf("Dezembro \n");
		break;
		
		
	default:
		printf(" Valor Inválido \n");
	}

	system("PAUSE");
  return 0;
}	
