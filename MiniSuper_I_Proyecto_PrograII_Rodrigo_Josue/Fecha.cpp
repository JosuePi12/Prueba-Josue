#include "Fecha.h"

Fecha::Fecha(int d, int m, int a)
{
    dia = d;
    mes = m;
    anio = a;
}

Fecha::~Fecha()
{
}

void Fecha::setDia(int d)
{
    dia = d;
}

void Fecha::setMes(int m)
{
    mes = m;
}

void Fecha::setAnio(int a)
{
    anio = a;
}

int Fecha::getDia()
{
    return dia;
}

int Fecha::getMes()
{
    return mes;
}
int Fecha::getAnio()
{
    return anio;
}

string Fecha::toString()
{
    stringstream s;
    s << dia << "/" << mes << "/" << anio << endl;
    return s.str();
}
