#include "stdafx.h"
#include "TInteger.h"

bool checkexc(const long long  value)
{
	if (value < INT_MAX && value > INT_MIN)
	{
		return true;
	}
	else
	{
		throw std::exception("Overflow");
	}
}

TInteger::TInteger()
{
	Value = 0;
}
TInteger::TInteger(const long long  val)
{
	try
	{
		checkexc(val);
		Value = val;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		Value = 0;
	}
	
}

int TInteger::operator = (const long long int val)
{
	if (checkexc(val))
	{
		Value = val;
	}
	return Value;
}
int TInteger::operator = (const TInteger &obj)
{  
	Value = obj.Value;
	return Value;
}
int TInteger::operator +=(const TInteger & obj)
{
	if (checkexc(((long long int)Value + obj.Value)))
	{
		Value += obj.Value;
	}
	return Value;
}
int TInteger::operator+=(const long long int val)
{
	if (checkexc((long long int)Value + val))
	{
		Value += (val);
	}
	return Value;
}
int TInteger::operator -=(const TInteger &obj)
{
	if (checkexc((long long int)Value - obj.Value))
	{
		Value -= obj.Value;
	}
	return Value;
}
int TInteger::operator -=(const long long int val)
{
	if (checkexc((long long int)Value - val))
	{
		Value -= val;
	}
	return Value;
}
int TInteger::operator *=(const TInteger &obj)
{
	if (checkexc((long long int)Value * obj.Value))
	{
		Value *= obj.Value;
	}
	return Value;
}
int TInteger::operator *=(const long long int val)
{
	if (checkexc((long long int)Value * val))
	{
		Value *= val;
	}
	return Value;

}
int TInteger::operator /=(const TInteger& obj)
{
	Value /= obj.Value;
	return Value;
}
int TInteger::operator /=(const long long int val)
{
	Value /= val;
	return Value;
}
int TInteger::operator*(const long long int val)
{
	return Value *= val;
}
int TInteger::operator/(const long long int val)
{
	return Value /= val;
}
bool TInteger::operator ==(const TInteger &obj) const
{
	return (Value == obj.Value);
}
bool TInteger::operator ==(const long long int val) const
{
	return (Value == val);
}

bool operator !=(const TInteger& obj1, const TInteger & obj2) 
{
	return !(obj1 == obj2);
}
bool TInteger::operator !=(const long long int val) const
{
	return !(Value == val);
}
bool TInteger::operator > (const TInteger& obj) const
{
	return Value > obj.Value;
}
bool TInteger::operator > (const long long int val) const
{
	return Value > val;
}
bool TInteger::operator <(const long long int val) const
{
	return Value < val; 
}
bool operator < (const TInteger & obj1, const TInteger & obj2)
{
	if (obj1 != obj2)
	{
		return !(obj1 > obj2);
	}
	else
	{
		return false;
	}
}
bool TInteger::operator >= (const TInteger& obj) const
{
	return Value >= obj.Value;
}
bool TInteger::operator >= (const long long int val) const
{
	return Value >= val;
}
bool TInteger::operator <= (const long long int val) const
{
	return Value <= val;
}
bool operator <= (const TInteger& obj1, const TInteger& obj2)
{
	return !(obj1 > obj2);
}
TInteger operator + (const TInteger &obj1, const TInteger & obj2)
{
	TInteger Val1(obj1);
	return (Val1 += obj2);
}
TInteger operator - (const TInteger & obj1, const TInteger &obj2)
{
	TInteger Val1(obj1);
	Val1 -= obj2;
	return Val1;
}
int TInteger::operator % (const TInteger &obj)
{
	int x = Value / obj.Value;
	x*=obj.Value;
	return Value - x;
}
int TInteger::operator % (const long long int val)
{
	int x = Value / val;
	x *= val;
	return Value - x;
}
TInteger operator *(const TInteger & obj1, const TInteger & obj2)
{
	TInteger Val1(obj1);
	return (Val1 *= obj2);
}
TInteger operator /(const TInteger& obj1, const TInteger& obj2)
{
	TInteger Val1(obj1);
	return Val1 /= obj2;
}

int TInteger::operator++()
{
	Value++;
	return Value;
}
int TInteger::operator--()
{
	Value--;
	return Value;
}
int TInteger::operator++(int val)
{
	++Value;
	return Value;
}
int TInteger::operator--(int val)
{
	--Value;
	return Value;
}
std::ostream & operator<<(std::ostream &out, const TInteger & object)
{
	out << object.Value;
	return out;
}
