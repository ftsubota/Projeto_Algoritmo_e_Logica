#include<iostream>

int main(){

	int numero;
	
	std::cout << "Digite um numero inteiro:";
	std::cin >> numero;
	
	if (numero % 2 == 0) {
		std::cout << "Numero Par: " << numero;
	} else {
		std::cout << "Numero impar: " << numero;
	}
	
	return 0;
}
