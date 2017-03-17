#pragma once
#include "iostream"

bool checkexc(long long int a);
class TInteger
{
	int Value;
public:
	TInteger();
	TInteger(long long int val);

	int operator = (const TInteger & obj);
	int operator = (const long long int val);

	int operator += (const TInteger& obj);
	int operator += (const long long int val);

	int operator -= (const TInteger &obj);
	int operator -= (const long long int val);
	//Umnojenie
	int operator*= (const TInteger&obj);
	int operator*= (const long long int val);
	int operator * (const long long int val);
	//Delenie
	int operator /= (const TInteger &obj);
	int operator /= (const long long int val);
	int operator / (const long long int val);
	int operator % (const TInteger &obj);
	int operator % (const long long int val);
	//Sravnenie pt.1
	bool operator == (const TInteger &obj) const;
	bool operator == (const long long int val) const;
	bool operator != (const long long int val) const;
	//Sravnenie pt.2
	bool operator > (const TInteger &obj)const;
	bool operator > (const long long int val) const;
	bool operator < (const long long int val) const;
	bool operator >= (const TInteger& obj) const;
	bool operator >= (const long long int val) const;
	bool operator <= (const long long int val) const;
	
	//Increment i decrement
	int operator ++ ();
	int operator --();
	int operator ++(int a);
	int operator --(int a);

	friend  std::ostream & operator<<(std::ostream &, const TInteger &);
};
bool operator != (const TInteger & obj1, const TInteger & obj2);
bool operator < (const TInteger & obj1, const TInteger & obj2);
bool operator <= (const TInteger & obj1, const TInteger & obj2);
TInteger operator + (const TInteger & obj1, const TInteger & obj2);
TInteger operator - (const TInteger & obj1, const TInteger & obj2);
TInteger operator * (const TInteger & obj1, const TInteger & obj2);
TInteger operator / (const TInteger & obj1, const TInteger & obj2);
