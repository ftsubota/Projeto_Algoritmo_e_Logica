#include<iostream>

int main(){
	
	float f = 0;
	float k = 0;
	float c = 0;
	
	std::cout << "Qual a temperatura em graus Fahrenheit?:\n";
	std::cin >> f;
	
	c =  ((f - 32) * 5 / 9 );
	std::cout << "A temperatura em graus Celsius e: \n" << c;
	
	k = c + 273.15;
	std::cout << "\n A temperatura em graus Kelvin e: \n" << k;	
	
	
	
	
}
