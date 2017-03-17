
#include "stdafx.h"
#include "TInteger.h"
#include "iostream"

int _tmain(int argc, _TCHAR* argv[])
{
	TInteger a(0);
	std::cout << a << std::endl; //0
	TInteger b(4);
	std::cout << b << std::endl; //4
	a = b;
	std::cout << a << std::endl; //4

	a += b;
	std::cout << a << std::endl; //8
	a = a + 2;
	std::cout << a << std::endl; //10


	a -= b;
	std::cout << a << std::endl; //6
	a = a- -4;
	std::cout << a << std::endl; // 10


	a = a * 5;
	std::cout << a << std::endl; // 50
	a *= b;
	std::cout << a << std::endl; // 200

	a = a / b;
	std::cout << a << std::endl; //50
	a /= 5;
	std::cout << a << std::endl; //10
	a -= 6; //4
	if (a == b) // 4 == 4
	{
		std::cout << "a == b" << std::endl;
	}
	a += 6; // 10
	if (a!= b)  // 10 != 4
	{
		std::cout << "a != b" << std::endl;
	}

	if (a > b && a > 4)
	{
		std::cout << "a > b && a > 4 (b = 4, a = 10)" << std::endl;
	}
	a = 3;
	if (a < b && a < 4)
	{
		std::cout << "a < b && a < 4 (a = 3)" << std::endl;
	}
	a = 3;
	if (a <= b && a <= 4) // 3 <= 4
	{
		std::cout << "a <= b(4)" << std::endl;
	}
	a = 5;
	if (a >= b && a >= 4) //5 >= 4
	{
		std::cout << "a >= b(4) " << std::endl;
	}
	a = 10;
	std::cout <<"a % b =  "<< a % b << std::endl; //2
	std::cout << "a % 6 =  " << a % 6 << std::endl; //4
	a++;
	++a;
	std::cout << a; //12
	system("pause");
	return 0;
}
