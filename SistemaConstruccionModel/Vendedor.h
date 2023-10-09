#pragma once
#include "Persona.h"

namespace SistemaConstruccionModel {

	public ref class Vendedor : Persona {
	private:
		double sueldo;
		String^ categoria;

	public:
		Vendedor();
		Vendedor(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, double sueldo, String^ categoria);
	};

}