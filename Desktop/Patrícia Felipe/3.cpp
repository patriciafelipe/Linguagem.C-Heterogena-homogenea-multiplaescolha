#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int num;
	
	printf("\n Escolha uma das op��es: 1: BigMac, 2: Quarteir�o, 3: MacChicken, 4: Cheddar MacMelt, 5: MacMax");
	printf("\n Digite o n�mero do seu lanche de 1 a 5: ");
	scanf("%d", &num);
	
	switch(num){
	case 1:
		printf(" BigMac \n");
		break;
		
	case 2:
		printf("Quarteir�o \n");
		break;
		
	case 3:
		printf("MacChicken \n");
		break;
		
	case 4:
		printf("Cheddar MacMelt \n");
		break;
		
	case 5:
		printf("MacMax \n");
		break;
		
	default:
		printf(" Valor Inv�lido \n");
	}
	system("PAUSE");
  return 0;
}	
