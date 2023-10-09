#include "Ubicacion.h"

using namespace SistemaConstruccionModel;

Ubicacion::Ubicacion() {

}

Ubicacion::Ubicacion(int codigo, double latitud, double longitud) {
	this->codigo = codigo;
	this->latitud = latitud;
	this->longitud = longitud;
}

int Ubicacion::getCodigo() {
	return this->codigo;
}

void Ubicacion::setCodigo(int codigo) {

}

double Ubicacion::getLatitud() {
	return this->latitud;
}

void Ubicacion::setLatitud(double latitud) {

}

double Ubicacion::getLongitud() {
	return this->longitud;
}

void Ubicacion::setLongitud(double longitud) {
	
}
