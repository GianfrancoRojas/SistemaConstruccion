#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaConstruccionModel;

namespace SistemaConstruccionController {

	public ref class CronogramaController {
		public:
			CronogramaController();
			List<Cronograma^>^ buscarAll();
			void escribirArchivo(List<Cronograma^>^listaCronogramas);
			void agregarCronograma(Cronograma^ objCronograma, int codigoCronograma);
	};
}