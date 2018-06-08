#include "Vector.h"
#include <cmath>

Vector::~Vector(void)
{
}

float Vector::modulo()						//modulo
{
	return (float)sqrt(x*x+y*y);
}

float Vector::argumento()						//arg. vector
{
	return (float)atan2(y,x);
}

Vector Vector::unitario()					//vector unitario
{
	Vector retorno(x,y);
	float mod=modulo();
	if(mod>0.00001)
	{
		retorno.x/=mod;
		retorno.y/=mod;
	}
	return retorno;
}

Vector Vector::operator - (Vector &v)			//resta de vectores
{
	Vector res;
	res.x=x-v.x;
	res.y=y-v.y;
	return res;
}

Vector Vector::operator + (Vector &v)		//suma vectores
{
	Vector res;
	res.x=x+v.x;
	res.y=y+v.y;
	return res;
}

float Vector::operator *(Vector &v)			//producto escalar
{
	return x*v.x+y*v.y;
}

Vector Vector::operator *(float esc)		//producto por un escalar
{
	Vector res;
	res.x = x*esc;
	res.y = y*esc;
	return res;
}