#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaConstruccionModel;

namespace SistemaConstruccionController {

	public ref class UbicacionController {
	public:
		UbicacionController();
		List<Ubicacion^>^ buscarAll();
		void escribirArchivo(List<Ubicacion^>^ listaUbicacion);
		void agregarUbicacion(Ubicacion^ objUbicacion);
	};
}
