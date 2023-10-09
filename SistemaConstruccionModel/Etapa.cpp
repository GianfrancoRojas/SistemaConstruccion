#include "Etapa.h"

using namespace SistemaConstruccionModel;

Etapa::Etapa() {

}

Etapa::Etapa(int codigo, String^ fechaInicio, String^ fechaFin, String^ Nombre, float avance, List<Tarea^>^ listaTareas) {
	this->codigo = codigo;
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
	this->Nombre = Nombre;
	this->avance = avance;
	this->listaTareas = listaTareas;
}