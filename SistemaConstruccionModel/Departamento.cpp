#include "Departamento.h"

using namespace SistemaConstruccionModel;

Departamento::Departamento() {

}

Departamento::Departamento(int codigo, int nroAmbientes, double area, int piso, double precio, String^ tipo, double largo, double ancho, double alto, List<Ambiente^>^ listaAmbientes, Cliente^ objCliente, Vendedor^ objVendedor) {
	this->codigo = codigo;
	this->nroAmbientes = nroAmbientes;
	this->area = area;
	this->piso = piso;
	this->precio = precio;
	this->tipo = tipo;
	this->largo = largo;
	this->ancho = ancho;
	this->alto = alto;
	this->listaAmbientes = listaAmbientes;
	this->objCliente = objCliente;
	this->objVendedor = objVendedor;
}
