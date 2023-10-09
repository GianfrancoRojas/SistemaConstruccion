#include <iostream>
#include <string>
#include "ProyectoController.h"

using namespace SistemaConstruccionController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


ProyectoController::ProyectoController(){

}

List<Proyecto^>^ ProyectoController::buscarProyectos(String^ departamento) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Proyecto^>^ listaProyectosEncontrados = gcnew List<Proyecto^>();
	array<String^>^ lineas = File::ReadAllLines("proyectos.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaProyecto in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		int codigoProyecto = Convert::ToInt32(datos[0]);
		String^ fechaInicioProyecto = datos[1];
		String^ fechaEntregaProyecto = datos[2];
		String^ departamentoProyecto = datos[3];
		String^ provinciaProyecto = datos[4];
		String^ distritoProyecto = datos[5];
		int nroEdificiosProyecto = Convert::ToInt32(datos[6]);
		float presupuestoProyecto = static_cast<float>(Convert::ToDouble(datos[7]));
		String^ nombreProyecto = datos[8];
		Cronograma^ objCronogramaProyecto = gcnew Cronograma;
		if (departamentoProyecto->Contains(departamento)) {
			Proyecto^ objProyecto = gcnew Proyecto(codigoProyecto, fechaInicioProyecto, fechaEntregaProyecto, departamentoProyecto, provinciaProyecto, distritoProyecto, nroEdificiosProyecto, presupuestoProyecto, nombreProyecto, objCronogramaProyecto);
			listaProyectosEncontrados->Add(objProyecto);
		}
	}
	return listaProyectosEncontrados;
}

List<Proyecto^>^ ProyectoController::buscarAll() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Proyecto^>^ listaProyectosEncontrados = gcnew List<Proyecto^>();
	array<String^>^ lineas = File::ReadAllLines("proyectos.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaProyecto in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		int codigoProyecto = Convert::ToInt32(datos[0]);
		String^ fechaInicioProyecto = datos[1];
		String^ fechaEntregaProyecto = datos[2];
		String^ departamentoProyecto = datos[3];
		String^ provinciaProyecto = datos[4];
		String^ distritoProyecto = datos[5];
		int nroEdificiosProyecto = Convert::ToInt32(datos[6]);
		float presupuestoProyecto = static_cast<float>(Convert::ToDouble(datos[7]));
		String^ nombreProyecto = datos[8];
		Cronograma^ objCronogramaProyecto = gcnew Cronograma;
		Proyecto^ objProyecto = gcnew Proyecto(codigoProyecto, fechaInicioProyecto, fechaEntregaProyecto, departamentoProyecto, provinciaProyecto, distritoProyecto, nroEdificiosProyecto, presupuestoProyecto, nombreProyecto, objCronogramaProyecto);
		listaProyectosEncontrados->Add(objProyecto);
	}
	return listaProyectosEncontrados;
}

void ProyectoController::escribirArchivo(List<Proyecto^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		Proyecto^ objeto = lista[i];
		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getFechaInicio() + ";" + objeto->getFechaEntrega() + ";" + objeto->getDepartamento() + ";" + objeto->getProvincia() + ";" + objeto->getDistrito() + ";" + objeto->getNroEdificios() + ";" + objeto->getPresupuesto() + ";" + objeto->getNombre();
	}
	File::WriteAllLines("proyectos.txt", lineasArchivo);
}

void ProyectoController::eliminarProyectoFisico(int codigo) {
	List<Proyecto^>^ listaProyectos = buscarAll();
	for (int i = 0; i < listaProyectos->Count; i++) {
		/*encontr[*/
		if (listaProyectos[i]->getCodigo() == codigo) {
			listaProyectos->RemoveAt(i);
		}
	}
	escribirArchivo(listaProyectos);
}

void ProyectoController::agregarProyecto(Proyecto^ objProyecto) {
	List<Proyecto^>^ listaProyectos = buscarAll();
	listaProyectos->Add(objProyecto);
	escribirArchivo(listaProyectos);
}

Proyecto^ ProyectoController::buscarProyectoxCodigo(int codigo) {
	List<Proyecto^>^ listaProyectos = buscarAll();
	for (int i = 0; i < listaProyectos->Count; i++) {
		if (listaProyectos[i]->getCodigo() == codigo) {
			return listaProyectos[i];
		}
	}
}

void ProyectoController::actualizarProyecto(Proyecto^ objProyecto) {
	List<Proyecto^>^ listaProyectos = buscarAll();
	for (int i = 0; i < listaProyectos->Count; i++) {
		if (listaProyectos[i]->getCodigo() == objProyecto->getCodigo()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaProyectos[i]->setFechaInicio(objProyecto->getFechaInicio());
			listaProyectos[i]->setFechaEntrega(objProyecto->getFechaEntrega());
			listaProyectos[i]->setDepartamento(objProyecto->getDepartamento());
			listaProyectos[i]->setProvincia(objProyecto->getProvincia());
			listaProyectos[i]->setDistrito(objProyecto->getDistrito());
			listaProyectos[i]->setNroEdificios(objProyecto->getNroEdificios());
			listaProyectos[i]->setPresupuesto(objProyecto->getPresupuesto());
			listaProyectos[i]->setNombre(objProyecto->getNombre());
			break;
		}
	}
	escribirArchivo(listaProyectos);
}

List<String^>^ ProyectoController::obtenerDepartamentos() {
	List<Proyecto^>^ listaProyectos = buscarAll();
	List<String^>^ listaDepartamentos = gcnew List<String^>();
	for (int i = 0; i < listaProyectos->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de departamentos*/
		String^ departamento = listaProyectos[i]->getDepartamento();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaDepartamentos->Count; j++) {
			if (listaDepartamentos[j]->Contains(departamento)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaDepartamentos->Add(departamento);
		}
	}
	return listaDepartamentos;
}