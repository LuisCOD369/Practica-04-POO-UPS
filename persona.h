#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona
{
private:
    string cedula;
    string nombre;
    float salario;
protected:
    char rol;
    void setSalario(float newSalario);
    void incSalario(float incremento);  // Se requiere este metodo para incrementar el salario
public:
    int opcion;
    bool repetir;
    Persona();
    Persona(const string &cedula, const string &nombre);
    string informacion();
    string informacionVentas();

};

#endif // PERSONA_H
