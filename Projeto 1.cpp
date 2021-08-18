#include<iostream>

int main(){
	int numero;
	std::cout <<"Digite um numero";
	std::cin >> numero;
	
	if (numero > 20){
		std::cout << numero;
	}	
	else{
		std::cout <<"Tente novamente";
	}
	
}
