#pragma once

using namespace System;

namespace SistemaConstruccionModel {
	public ref class Tarea{

	private:
		int codigo;
		String^ nombre;
		String^ fechaInicio;
		String^ fechaFin;
		float avance;
		String^ responsable;


	public:
		Tarea();
		Tarea(int codigo, String^ nombre, String^ fechaInicio, String^ fechaFin, float avance, String^ responsable);
	};
}