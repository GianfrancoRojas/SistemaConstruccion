#include "Ambiente.h"

using namespace SistemaConstruccionModel;

Ambiente::Ambiente() {

}

Ambiente::Ambiente(int codigo, double largo, double ancho, String^ tipo, int cantGrifos, int cantTomaCorrientes) {
	this->codigo = codigo;
	this->largo = largo;
	this->ancho = ancho;
	this->tipo = tipo;
	this->cantGrifos = cantGrifos;
	this->cantTomaCorrientes = cantTomaCorrientes;
}
