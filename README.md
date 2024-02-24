#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	printf("olá josé benjamim\n");
	
	int idade = 0;
	
	printf("digite a sua idade\n");
	scanf("%d", &idade);
	
	printf("A IDADE DIGITADA FOI %d\n", idade);

    if(idade >= 18 && idade < 25){
    	printf("você é maior de idade, mas tem menos que 25 anos\n");
    }else{
        if(idade >=25){
		    printf("vocÊ tem mais que 25\n");
		}else{    
			printf("você é menor de idade\n");
        }
   }

    switch(idade){
    	case 1:{
		    printf("idade é um\n");
		    break;
	}
	case 10:{
		printf("idade é dez\n");
		break;
	}
	case 11:{
		printf("idade é onze\n");
		break;
	}
	default: {
		printf("não consequi achar um valor valido para sua resposta\n");
		break;
	}
	
}
}	
