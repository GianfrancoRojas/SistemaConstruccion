#pragma once
#include "Ambiente.h"
#include "Cliente.h"
#include "Vendedor.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaConstruccionModel {

	public ref class Departamento {

	private:
		int codigo;
		int nroAmbientes;
		double area;
		int piso;
		double precio;
		String^ tipo;
		double ancho;
		double largo;
		double alto;
		List<Ambiente^>^ listaAmbientes; //Asi se representa la composicion o agreagacion
		Cliente^ objCliente;
		Vendedor^ objVendedor;

	public:
		Departamento();
		Departamento(int codigo, int nroAmbientes, double area, int piso, double precio, String^ tipo, double largo, double ancho, double alto, List<Ambiente^>^ listaAmbientes, Cliente^ objCliente, Vendedor^ objVendedor);
	};
}