#pragma once
class Vector
{
	public:
	float x;
	float y;

	Vector(float xv=0.0f,float yv=0.0f):x(xv), y(yv){}
	virtual ~Vector(void);
	float modulo();						//modulo del vector
	float argumento();					//argumento del vector
	Vector unitario();				//devuelve un vector unitario
	Vector operator- (Vector &);	//resta de vectores
	Vector operator+ (Vector &);	//suma de vectores
	float operator *(Vector &);		//producto escalar
	Vector operator *(float);	
};
