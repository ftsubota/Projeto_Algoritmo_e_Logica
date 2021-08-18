#include<iostream>

int main(){
	
	float c = 0;
	float k = 0;
	
	std::cout << "Qual a temperatura em graus celsius:\n";
	std::cin >> c;
	
	k = c + 273.15;
	
	std::cout << "A temperatura em graus Kelvin e:\n" <<k;	
	
	
	return 0;
}
