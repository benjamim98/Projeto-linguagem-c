#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	printf("ol� jos� benjamim\n");
	
	int idade = 0;
	
	printf("digite a sua idade\n");
	scanf("%d", &idade);
	
	printf("A IDADE DIGITADA FOI %d\n", idade);

    if(idade >= 18 && idade < 25){
    	printf("voc� � maior de idade, mas tem menos que 25 anos\n");
    }else{
        if(idade >=25){
		    printf("voc� tem mais que 25\n");
		}else{    
			printf("voc� � menor de idade\n");
        }
   }

    switch(idade){
    	case 1:{
		    printf("idade � um\n");
		    break;
	}
	case 10:{
		printf("idade � dez\n");
		break;
	}
	case 11:{
		printf("idade � onze\n");
		break;
	}
	default: {
		printf("n�o consequi achar um valor valido para sua resposta\n");
		break;
	}
	
}
}	
