#pragma once
#include "Persona.h"

using namespace System;

namespace SistemaConstruccionModel {

	//Para representar la herencia se hace a traves de los : (dos puntos)
	public ref class Cliente : Persona {

	private:
		String^ fechaNacimiento;

	public:
		Cliente();
		Cliente(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ fechaNacimiento);
	};

} 