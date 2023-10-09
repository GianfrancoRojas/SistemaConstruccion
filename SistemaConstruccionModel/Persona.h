#pragma once

using namespace System;

namespace SistemaConstruccionModel {

	public ref class Persona {
	protected: //Esto es por la herencia
		int codigo;
		String^ nombres;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;

	public:
		Persona();
		Persona(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni);

	};

} 