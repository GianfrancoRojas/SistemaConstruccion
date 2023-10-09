#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaConstruccionModel;

namespace SistemaConstruccionController{

	public ref class ProyectoController {
		public:
			ProyectoController();
			List<Proyecto^>^ buscarProyectos(String^ departamento);
			/*Estos métodos siempre deberían estar porque te sirven de mucho*/
			List<Proyecto^>^ buscarAll();
			void escribirArchivo(List<Proyecto^>^ listaProyectos);
			void eliminarProyectoFisico(int codigo);
			void agregarProyecto(Proyecto^ objProyecto);
			Proyecto^ buscarProyectoxCodigo(int codigo);
			void actualizarProyecto(Proyecto^ objProyecto);
			List<String^>^ obtenerDepartamentos();
	};


}
