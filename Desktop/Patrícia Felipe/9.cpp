#include <stdio.h>
#include <stdlib.h>

int  main ( int argc,char*argv[]){
	int n;
 	
	printf ("Digite o último número da placa do veiculo: \n");
	scanf ("%d",&n);
	
		switch(n){
		case 1:
			printf ("O veiculo nao pode transitar nas segundas-feiras! \n");
		break;

		case 2:
			printf ("O veiculo nao pode transitar nas segundas-feiras! \n");
		break;
	
		case 3:
			printf ("O veiculo nao pode transitar nas tercas-feiras! \n");
		break;
	
		case 4:
			printf ("O veiculo nao pode transitar nas tercas-feiras! \n");
		break;

		case 5:
			printf ("O veiculo nao pode transitar nas quartas-feiras! \n");
		break;
	
		case 6:
			printf("O veiculo nao pode transitar nas quartas-feiras! \n");
		break;
	
		case 7:
			printf("O veiculo nao pode transitar nas quintas-feiras! \n");
		break;
	
		case 8:
			printf("O veiculo nao pode transitar nas quintas-feiras! \n");
		break;
	
		case 9:
			printf("O veiculo nao pode transitar nas sextas-feiras! \n");
		break;
	
		case 0:
			printf("O veiculo nao pode transitar nas sextas-feiras! \n");
		break;
	
		default:
			printf("Numero incorreto. Digite um final de placa de 0 a 9! \n");
	}
	system("PAUSE");
	return  0 ;
}

