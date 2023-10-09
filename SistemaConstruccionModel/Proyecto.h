#pragma once
#include "Edificio.h"
#include "Cronograma.h"

using namespace System; //Esto es para la clase String
using namespace System::Collections::Generic;

namespace SistemaConstruccionModel {
	public ref class Proyecto {
		private:
			int codigo;
			String^ fechaInicio;
			String^ fechaEntrega;
			String^ departamento;
			String^ provincia;
			String^ distrito;
			int nroEdificios;
			float presupuesto;
			String^ nombre;
			List<Edificio^>^ listaEdificios;
			Cronograma^ objCronograma;
			//Siempre hay 2 constructores, uno vacio y otro con todo ojo O_O
		public:
			Proyecto();
			Proyecto(int codigo, String^ fechaInicio, String^ fechaEntrega, String^ departamento, String^ provincia, String^ distrito, int nroEdificios, float presupuesto, String^ nombre, Cronograma^objCronograma);
			int getCodigo();
			void setCodigo(int codigo);
			String^ getFechaInicio();
			void setFechaInicio(String^ fechaInicio);
			String^ getFechaEntrega();
			void setFechaEntrega(String^ fechaEntrega);
			String^ getDepartamento();
			void setDepartamento(String^ departamento);
			String^ getProvincia();
			void setProvincia(String^ provincia);
			String^ getDistrito();
			void setDistrito(String^ distrito);
			int getNroEdificios();
			void setNroEdificios(int nroEdificios);
			float getPresupuesto();
			void setPresupuesto(float presupuesto);
			String^ getNombre();
			void setNombre(String^ nombre);
			Cronograma^ getCronograma();
			void setCronograma(Cronograma^ objCronograma);
	};

}