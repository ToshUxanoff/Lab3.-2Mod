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
	if (checkexc(val))
	{
		Value = val;
	}
}

TInteger& TInteger::operator = (const long long int val)
{
	if (checkexc(val))
	{
		Value = val;
	}
	return *this;
}
TInteger& TInteger::operator = (const TInteger &obj)
{  
	Value = obj.Value;
	return *this;
}
TInteger& TInteger::operator +=(const TInteger & obj)
{
	if (checkexc(((long long int)Value + obj.Value)))
	{
		Value += obj.Value;
	}
	return *this;
}
TInteger& TInteger::operator+=(const long long int val)
{
	if (checkexc((long long int)Value + val))
	{
		Value += (val);
	}
	return *this;
}
TInteger& TInteger::operator -=(const TInteger &obj)
{
	if (checkexc((long long int)Value - obj.Value))
	{
		Value -= obj.Value;
	}
	return *this;
}
TInteger& TInteger::operator -=(const long long int val)
{
	if (checkexc((long long int)Value - val))
	{
		Value -= val;
	}
	return *this;
}
TInteger& TInteger::operator *=(const TInteger &obj)
{
	if (checkexc((long long int)Value * obj.Value))
	{
		Value *= obj.Value;
	}
	return *this;
}
TInteger& TInteger::operator *=(const long long int val)
{
	if (checkexc((long long int)Value * val))
	{
		Value *= val;
	}
	return *this;

}
TInteger& TInteger::operator /=(const TInteger& obj)
{
	Value /= obj.Value;
	return *this;
}
TInteger& TInteger::operator /=(const long long int val)
{
	Value /= val;
	return *this;
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
TInteger TInteger::operator % (const TInteger &obj)
{
	return Value % obj.Value;
}
TInteger TInteger::operator % (const long long int val)
{
	return Value % val;
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

TInteger& TInteger::operator++()
{
	Value++;
	return *this;
}
TInteger& TInteger::operator--()
{
	Value--;
	return *this;
}
TInteger TInteger::operator++(int)
{
	TInteger tmp(*this);
	operator++();
	return tmp;
}
TInteger TInteger::operator--(int)
{
	TInteger tmp(*this);
	operator--();
	return tmp;
}
std::ostream & operator<<(std::ostream &out, const TInteger & object)
{
	out << object.Value;
	return out;
}
