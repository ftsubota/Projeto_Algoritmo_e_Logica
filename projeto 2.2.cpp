#include<iostream>

int main(){
	
	float c = 0;
	float f = 0;
	
	std::cout << "Qual a temperatura em graus celsius?\n";
	std::cin >> c;
	
	f = (9 * c + 160) / 5;
	
	std::cout << "A temperatura em graus Fahrenheit e:\n" <<f;
	
	
	return 0;
	
}
