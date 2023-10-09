#include "EdificioController.h"

using namespace SistemaConstruccionController;
using namespace System::IO;

EdificioController::EdificioController() {

}

List<Edificio^>^ EdificioController::buscarAll() {
	List<Edificio^>^ listaEncontrados = gcnew List<Edificio^>();
	return listaEncontrados;
}

void EdificioController::escribirArchivo(List<Edificio^>^ listaEdificios) {

}

void EdificioController::agregarEdificio(Edificio^ objEdificio, int codigoProyecto) {
	array<String^>^ lineas = File::ReadAllLines("edificios.txt");
	int cantLineas = 0;
	for each (String ^ linea in lineas) {
		cantLineas++;
	}
	array<String^>^ lineasArchivo = gcnew array<String^>(cantLineas+1);
	int i;
	for (i = 0; i < (cantLineas); i++) {
		lineasArchivo[i] = lineas[i];
	}
	lineasArchivo[i] = objEdificio->getCodigo() + ";" + objEdificio->getNroPisos() + ";" + objEdificio->getNroDepartamentos() + ";" + objEdificio->getAforo() + ";" + objEdificio->getAreaTotal() + ";" + objEdificio->getNumero() + ";" + objEdificio->getAreaCochera() + ";" + objEdificio->getCodigo() + ";" + codigoProyecto;
	File::WriteAllLines("edificios.txt", lineasArchivo);
}