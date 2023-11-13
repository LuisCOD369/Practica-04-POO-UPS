#include <iostream>

#include "persona.h"
#include "vendedor.h"
#include "supervisor.h"

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;

    Vendedor v1("1725650004", "Luis Pillajo");
    v1.vender(1000);
    v1.vender(2350);
    cout << v1.informacion() << endl;

    Vendedor v2("1734567894", "Mateo Espinosa");
    Vendedor v3("1743123457", "David Ramos");

    v2.vender(2400);
    v2.vender(1200);

    v3.vender(1000);
    v3.vender(4600);

    Supervisor s("1723456432", "Juan Tapia", 600);
    s.agregarVendendor(&v1);
    s.agregarVendendor(&v2);
    s.agregarVendendor(&v3);

    do {
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Mostrar Vendedores: " << endl;
        cout << "2. Mostrar ventas: " << endl;
        cout << "3. Informacion del supervisor: " << endl;
        cout << "4. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Lista de instrucciones de la opción 1
                cout << v1.informacion() << endl;
                cout << v2.informacion() << endl;
                cout << v3.informacion() << endl;
                break;

            case 2:
                // Lista de instrucciones de la opción 2

                system("pause>nul"); // Pausa
                break;

            case 3:
                // Lista de instrucciones de la opción 3

                Supervisor s("1723456432", "Juan Tapia", 600);
                break;

            case 4:
                repetir = false;
                break;

    } while (repetir);


    cout << "== SALARIOS ==\n" << endl;
    /*Persona p("1717235467", "Rodrigo Tufiño");
    cout << p.informacion() << endl;*/

    Vendedor v1("1725650004", "Luis Pillajo");
    v1.vender(1000);
    v1.vender(2350);
    cout << v1.informacion() << endl;

    Vendedor v2("1734567894", "Mateo Espinosa");
    Vendedor v3("1743123457", "David Ramos");

    v2.vender(2400);
    v2.vender(1200);

    v3.vender(1000);
    v3.vender(4600);

    Supervisor s("1723456432", "Juan Tapia", 600);
    s.agregarVendendor(&v1);
    s.agregarVendendor(&v2);
    s.agregarVendendor(&v3);
    cout << v2.informacion() << endl;
    cout << v3.informacion() << endl;


    float total = s.cerrarVentas();
    cout << "Total de ventas: " << total <<endl <<endl;
    cout << s.informacion() << endl;

    total = s.cerrarVentas();
    cout << "Total de ventas: " << total << endl;

    return 0;
}
