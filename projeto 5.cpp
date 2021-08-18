#include<iostream>

int main(){
	int numero1;
	int numero2;
	
	std::cout << "Digite um numero\n";
	std::cin >> (numero1);
	
	std::cout << "Digite outro numero\n";
	std::cin >> (numero2);
	
	int resultado = numero1 + numero2;
	if (resultado > 20) {
		std:: cout << resultado + 8;
	}
	else {std:: cout << resultado - 5;
	}
	}
	
	
	

