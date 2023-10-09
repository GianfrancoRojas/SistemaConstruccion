#include "Cronograma.h"

using namespace SistemaConstruccionModel;

Cronograma::Cronograma() {

}

Cronograma::Cronograma(int codigo, String^ fechaInicio, String^ fechaFin, String^ estado) {
	this->codigo = codigo;
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
	this->estado = estado;
}