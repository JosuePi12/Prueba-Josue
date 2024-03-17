#pragma once
class Fecha
{
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha(int d,int m,int a);
	void setDia(int d);
	void setMes(int m);
	void setAnio(int a);
	int getDia();
	int getMes();
	int getAnio();
};