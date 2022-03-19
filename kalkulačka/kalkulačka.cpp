
#include <iostream>
#include <cmath>
#include "kalkulačka.h"
void plus()
{
	char answer;
	long num;
	int result;
	long num2;
	std::cout << "Addition Selected" << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "Enter your number -> ";
	std::cin >> num;
	std::cout << "Enter your second number -> ";
	std::cin >> num2;
	
	result = num + num2;
	
	
	std::cout << "The result is = " << result << std::endl;
	std::cout << "Do you wish to add again y/n" << std::endl;
	std::cin >> answer;
	if (!(answer != 'Y' && answer != 'y')) {
		plus();
	}
	else {

		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Thank you for using this calculator" << std::endl;

	}
}

void minus()
{
	char answer;
	long num;
	int result;
	long num2;
	std::cout << "Subtraction Selected" << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "Enter your number -> ";
	std::cin >> num;
	std::cout << "Enter your second number -> ";
	std::cin >> num2;

	result = num - num2;


	std::cout << "The result is = " << result << std::endl;
	std::cout << "Do you wish to subtract again y/n" << std::endl;
	std::cin >> answer;
	if (!(answer != 'Y' && answer != 'y')) {
		minus();
	}
	else {

		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Thank you for using this calculator" << std::endl;

	}
}



void krat()
{
	char answer;
	long num;
	int result;
	long num2;
	std::cout << "Multiplication Selected" << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "Enter your number -> ";
	std::cin >> num;
	std::cout << "Enter your second number -> ";
	std::cin >> num2;

	result = num * num2;


	std::cout << "The result is = " << result << std::endl;
	std::cout << "Do you wish to multiply again y/n" << std::endl;
	std::cin >> answer;
	if (!(answer != 'Y' && answer != 'y')) {
		krat();
	}
	else {

		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Thank you for using this calculator" << std::endl;

	}
}



void deleno()
{
	char answer;
	long num;
	double result;
	long num2;
	std::cout << "Division Selected" << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "Enter your number -> ";
	std::cin >> num;
	std::cout << "Enter your second number -> ";
	std::cin >> num2;

	if (num && num2 != 0) {
		result = num / num2;
	}
	else {
		std::cout << "You cant divide with zero !!!" << std::endl;
	}


	std::cout << "The result is = " << result << std::endl;
	std::cout << "Do you wish to divide  again y/n" << std::endl;
	std::cin >> answer;
	if (!(answer != 'Y' && answer != 'y')) {
		deleno();
	}
	else {

		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Thank you for using this calculator" << std::endl;

	}
}


void mocnina()
{
	char answer;
	long num;
	double result;
	long num2;
	std::cout << "Exponentiation Selected" << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "Enter your number -> ";
	std::cin >> num;
	std::cout << "Enter your exponent -> ";
	std::cin >> num2;

	if (num2 == 0) {
		result = 1;
	}
	else {

			result = pow(num, num2);
		
}
	std::cout << "The result is = " << result << std::endl;
	std::cout << "Do you wish to calculate Exponents again y/n" << std::endl;
	std::cin >> answer;
	if (!(answer != 'Y' && answer != 'y')) {
		mocnina();
	}
	else {

		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Thank you for using this calculator" << std::endl;

	}
	}



void procenta()
{
	long num;
	char answer;
	int result;
	long num2;
	std::cout << "Percentage Selected" << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "Enter your number -> ";
	std::cin >> num;
	std::cout << "Enter required percentage of first number -> ";
	std::cin >> num2;

	if (num2 == 1) {
		result = num;
	}
	else if (num2 == 0) {
		result = 0;
	}
	else {

	
	result = (num / 100) * num2;

	}
	std::cout << "The result is = " << result << std::endl;
	std::cout << "Do you wish to calculate percentages again y/n" << std::endl;
	std::cin >> answer;
	 if (!(answer != 'Y' && answer != 'y')) {
		procenta();
	}
	else {

	    std::cout << "-----------------------------------" << std::endl;
		std::cout << "Thank you for using this calculator" << std::endl;

	}
	
}



void odmocnina() 
{
	char answer;
	long num;
	double result;
	std::cout << "Root Selected" << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "Enter your number -> ";
	std::cin >> num;
	
	result = sqrt(num);
	


	std::cout << "The result is = " << result << std::endl;
	std::cout << "Do you wish to calculate Exponents again y/n" << std::endl;
	std::cin >> answer;
	if (!(answer != 'Y' && answer != 'y')) {
		odmocnina();
	}
	else {

		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Thank you for using this calculator" << std::endl;

	}
}


void faktorial() 
{
	char answer;
	long num;
	int result = 1;
	std::cout << "Factorial Selected" << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "Enter your number -> ";
	std::cin >> num;
	

	if (num < 0) {
		std::cout << "There are not negative factorials " << std::endl;
		faktorial();
	}
	else if(num ==0) {
		result = 1;
	}
	else {
		for (int i = 1; i <= num; i++) {
			result *= i;
		}
	}
	
	


	std::cout << "The result is = " << result << std::endl;
	std::cout << "Do you wish to use Factorials again y/n" << std::endl;
	std::cin >> answer;
	if (!(answer != 'Y' && answer != 'y')) {
		faktorial();
	}
	else {

		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Thank you for using this calculator" << std::endl;

	}
}

int main()
{
int a;
std::cout <<
R"(   _____      _            _       _               ___    ___ )" << '\n' <<
R"(  / ____|    | |          | |     | |             |__ \  / _ \ )" << '\n' <<
R"( | |     __ _| | ___ _   _| | __ _| |_ ___  _ __     ) || | | |)" << '\n' <<
R"( | |    / _` | |/ __| | | | |/ _` | __/ _ \| '__|   / / | | | |)" << '\n' <<
R"( | |___| (_| | | (__| |_| | | (_| | || (_) | |     / /_ | |_| |)" << '\n' <<
R"(  \_____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|    |____(_)___/ )";

std::cout << " " << std::endl;
std::cout << " " << std::endl;
std::cout << " " << std::endl;

system("pause");

std::cout << " " << std::endl;
std::cout << " " << std::endl;
std::cout << " " << std::endl;

std::cout << "   Please select the required function /// 1-addition " << std::endl;
std::cout << "   Please select the required function /// 2-subtraction " << std::endl;
std::cout << "   Please select the required function /// 3-multiplication" << std::endl;
std::cout << "   Please select the required function /// 4-division " << std::endl;
std::cout << "   Please select the required function /// 5-exponentiation" << std::endl;
std::cout << "   Please select the required function /// 6-Percentage" << std::endl;
std::cout << "   Please select the required function /// 7-Root of " << std::endl;
std::cout << "   Please select the required function /// 8-Factorials " << std::endl;


std::cout << "" << std::endl;
std::cout << "---------------------------------------------------------" << std::endl;





std::cin >> a;
switch (a)
{
case 1:
	 plus();
	break;
case 2:
	 minus();
	break;
case 3:
	 krat();
	break;
case 4:
	 deleno();
	break;
case 5:
	mocnina();
	break;
case 6:
     procenta();
	 break;
case 7:
	odmocnina();
	break;
case 8:
	faktorial();
	break;
default:
	std::cout << "ERROR! Operations is not valid " << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << "Calculator shutting down" << std::endl;
	
	break;
}

return 0;
}

