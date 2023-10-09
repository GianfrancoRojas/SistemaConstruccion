#pragma once
#include "Tarea.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaConstruccionModel {
	public ref class Etapa {

	private:
		int codigo;
		String^ fechaInicio;
		String^ fechaFin;
		String^ Nombre;
		float avance;
		List<Tarea^>^ listaTareas;

	public:
		Etapa();
		Etapa(int codigo, String^ fechaInicio, String^ fechaFin, String^ Nombre, float avance, List<Tarea^>^ listaTareas);
	};
}