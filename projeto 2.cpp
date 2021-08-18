#include<iostream>

int main(){
	int numero1;
	int numero2;
	
	std::cout <<"Digite um numero 1\n";
	std::cin >> (numero1);
	
	std::cout <<"Digite um numero 2\n";
	std::cin >> (numero2);
	
	int resultado = numero1 + numero2;
	if (resultado > 10){
		std::cout << resultado;
	}
	
	
}
