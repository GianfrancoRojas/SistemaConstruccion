#pragma once
#include "Etapa.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaConstruccionModel {
	public ref class Cronograma {

	private:
		int codigo;
		String^ fechaInicio;
		String^ fechaFin;
		String^ estado;
		List<Etapa^>^ listaEtapas;

	public:
		Cronograma();
		Cronograma(int codigo, String^ fechaInicio, String^ fechaFin, String^ estado);
	};
}