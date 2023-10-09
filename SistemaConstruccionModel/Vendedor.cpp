#include "Vendedor.h"

using namespace SistemaConstruccionModel;

Vendedor::Vendedor():Persona() {

}

Vendedor::Vendedor(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, double sueldo, String^ categoria): Persona(codigo,nombres,apellidoPaterno,apellidoMaterno,dni) {
	this->sueldo = sueldo;
	this->categoria = categoria;
}