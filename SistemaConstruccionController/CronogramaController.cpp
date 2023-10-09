#include "CronogramaController.h"

using namespace SistemaConstruccionController;
using namespace System::IO;

CronogramaController::CronogramaController() {

}

List<Cronograma^>^ CronogramaController::buscarAll() {
	List<Cronograma^>^ listaEncontrados = gcnew List<Cronograma^>();
	array<String^>^ lineas = File::ReadAllLines("Cronogramas.text");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ linea in lineas) {
		array<String^>^ datos = linea->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ fechaInicio = datos[1];
		String^ fechaFin = datos[2];
		String^ estado = datos[3];
		Cronograma^ obj = gcnew Cronograma(codigo, fechaInicio, fechaFin, estado);
		listaEncontrados->Add(obj);
	}
	return listaEncontrados;
}

void CronogramaController::escribirArchivo(List<Cronograma^>^ listaCronogramas) {

}

void CronogramaController::agregarCronograma(Cronograma^ objCronograma, int codigoCronograma) {

}