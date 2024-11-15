#include <iostream>
#include <vector>
#include <string>
#include "Usuario.h"
using namespace std;

class Profesor :public Usuario {
private:
	int numEmpleado;

public:
	Alumno(string nombre,
		string apellidoPaterno,
		string apellidoMaterno,
		string email,
		int numUsuario,
		bool prestamo,
		bool activo,
		int numEmpleado) {}

	int getNumEmpleado() const { return numEmpleado; }
	void setNumEmpleado(const numCuenta) { this->numCuenta = numCuenta; }
};
