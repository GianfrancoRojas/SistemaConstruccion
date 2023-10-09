#include "Edificio.h"

using namespace SistemaConstruccionModel;

Edificio::Edificio() {

}

Edificio::Edificio(int codigo, int nroPisos, int nroDepartamentos, int aforo, double areaTotal, int numero, double areaCochera, Ubicacion^ objUbicacion) {
	this->codigo = codigo;
	this->nroPisos = nroPisos;
	this->nroDepartamentos = nroDepartamentos;
	this->aforo = aforo;
	this->areaTotal = areaTotal;
	this->numero = numero;
	this->areaCochera = areaCochera;
	this->objUbicacion = objUbicacion;
	this->listaDepartamentos = gcnew List<Departamento^>();
}

int Edificio::getCodigo() {
	return this->codigo;
}

void Edificio::setCodigo(int codigo) {

}

int Edificio::getNroPisos() {
	return this->nroPisos;
}

void Edificio::setNroPisos(int nroPisos) {

}

int Edificio::getNroDepartamentos() {
	return this->nroDepartamentos;
}

void Edificio::setNroDepartamentos(int nroDepartamentos) {

}

int Edificio::getAforo() {
	return this->aforo;
}

void Edificio::setAforo(int aforo) {

}

double Edificio::getAreaTotal() {
	return this->areaTotal;
}

void Edificio::setAreaTotal(double areaTotal) {

}

int Edificio::getNumero() {
	return this->numero;
}

void Edificio::setNumero(int numero) {

}

double Edificio::getAreaCochera() {
	return this->areaCochera;
}

void Edificio::setAreaCochera(double areaCochera) {

}

Ubicacion^ Edificio::getUbicacion() {
	return this->objUbicacion;
}

void Edificio::setUbicacion(Ubicacion^ objUbicacion) {

}
