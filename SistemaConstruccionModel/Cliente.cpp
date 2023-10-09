#include "Cliente.h"

using namespace SistemaConstruccionModel;

Cliente::Cliente():Persona() {

}

Cliente::Cliente(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ fechaNacimiento): Persona(codigo,nombres,apellidoPaterno,apellidoMaterno,dni) {
	this->fechaNacimiento = fechaNacimiento;
}