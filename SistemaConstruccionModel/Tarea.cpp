#include "Tarea.h"

using namespace SistemaConstruccionModel;

Tarea::Tarea() {

}

Tarea::Tarea(int codigo, String^ nombre, String^ fechaInicio, String^ fechaFin, float avance, String^ responsable) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
	this->avance = avance;
	this->responsable = responsable;
}