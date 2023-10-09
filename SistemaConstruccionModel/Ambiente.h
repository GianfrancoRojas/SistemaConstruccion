#pragma once

using namespace System;

namespace SistemaConstruccionModel {
	public ref class Ambiente {
		/*Primero definimos los atributos*/
	private:
		int codigo;
		double largo;
		double ancho;
		String^ tipo;
		int cantGrifos;
		int cantTomaCorrientes;

		/*Ahora los metodos*/
	public:
		Ambiente();
		Ambiente(int codigo, double largo, double ancho, String^ tipo, int cantGrifos, int cantTomaCorrientes);
	};
}

