#include "Persona.h"

using namespace SistemaConstruccionModel;

Persona::Persona() {

}

Persona::Persona(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni) {
	this->codigo = codigo;
	this->nombres = nombres;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->dni = dni;
}
