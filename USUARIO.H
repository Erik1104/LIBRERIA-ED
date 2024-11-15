#ifndef USUARIO_H
#define USUARIO_H

#include <string>
using namespace std;

class Usuario {
protected:
    string nombre
    string apellidoPaterno;
    string apellidoMaterno;
    string email;
    int numUsuario;
    bool prestamo;
    bool activo;

public:

    Usuario(string nombre, string apellidoPaterno, string apellidoMaterno, string email, int numUsuario, bool prestamo, bool activo)
      : nombre(nombre), 
        apellidoPaterno(apellidoPaterno), 
        apellidoMaterno(apellidoMaterno), 
        email(email), 
        numEmpleado(numEmpleado), 
        numUsuario(numUsuario), 
        prestamo(prestamo)
        activo(activo) {}

    string getNombre() const { return nombre; }
    string getApellidoPaterno() const { return apellidoPaterno; }
    string getApellidoMaterno() const { return apellidoMaterno; }
    string getEmail() const { return email; }
    int getNumUsuario() const { return numUsuario; }
    bool getPrestamo() const { return prestamo; }
    bool getActivo() const { return activo; }

    void setNombre(const string& nombre) { this->nombre = nombre; }
    void setApellidoPaterno(const string& apellidoMaterno) { this->apellidoPaterno = apellidoPaterno; }
    void setApellidoMaterno(const string& apellidoMaterno) { this->apellidoMaterno = apellidoMaterno; }
    void setEmail(const string& email) { this->email = email; }
    void setnumEmpleado(int numEmpleado) { this->numEmpleado = numEmpleado; }
    void setNumCuenta(int numCuenta) { this->numCuenta = numCuenta; }
    void setNumUsuario(int numUsuario) { this->numUsuario = numUsuario; }
    void setPrestamo(bool prestamo) { this->prestamo = prestamo; }
    void setActivo(bool activo) { this->activo = activo; }
};

#endif
#pragma once
};

#endif
#pragma once
