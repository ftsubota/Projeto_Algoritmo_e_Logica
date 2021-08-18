#include<iostream>

int main(){
	int numero;
	
	std::cout <<"Digite um numero";
	std::cin >>numero;
	
	if (numero < 0){
		std::cout <<"Numero Negativo!" <<numero;
		
	}
	
	if (numero == 0){
		std::cout <<"Numero Nulo!" <<numero;
	}
	
	if (numero > 0){
		std::cout <<"Numero Positivo!" <<numero;
	}
	
	
	
	
}
