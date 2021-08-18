#include<iostream>

int main(){
	
	float f = 0;
	float c = 0;
	
	std::cout << "Qual a temperatura em graus fahrenheit:\n";
	std::cin >> f;
	
	c = ((f - 32) * 5 / 9 );
	
	std::cout << "A temperatura em graus Celsius e:\n" << c;
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	

}
