/*

MINI PROYECTO

TEMA: 

FECHA: 12/09/2026

AUTOR: Emilia Veloz

ENUNCIADO: Una escuela de fútbol necesita un programa para administrar a sus estudiantes. 
           El sistema debe registrar hasta 20 estudiantes, con su nombre, edad (15–17 años) 
           y número de camiseta (1–99). Además, debe calcular los costos del viaje considerando: 
           costo diario de alimentación, hospedaje y transporte. El programa calculará el costo 
           total del viaje y el precio por estudiante. Debe permitir buscar un estudiante por 
           su número de camiseta, mostrando su nombrey edad y la posicion e n la que fue encontrado. 
           Todo esto mediante un menú interactivo hasta que el usuario escoga la opcio salir.

E/P/S

ENTRADA: numero de estudiantes, nombres, edades, numero camiseta, dias.

PROCESO: Mostrar un menu con las siguientes opciones:

           - Registro de estudiantes.
           - Gastos del viaje.
           - Precio por estudiante.
           - Mostrar reporte general
           - Buscar estudiantes.
           - Salir.

         Seleccionar una opcion.
         Leer datos ingresados.
         Validar los datos.
         Calcular resultados.
         Mostrar resultados,
         O un mesaje claro.

SALIDA:

- Mostrar resultados segun la opcion escogida.
- Mostrar un mensaje claro.

*/

#include <iostream>
using namespace std;


//PROTOTIPADO

void Registro(string nombres[], int edades[], int camisetas[], int &cantidad);
double GastosViaje(double &costAlimentacion, double &costHosp, double &costTransp, int &dias);
void PrecioPorEstudiante(double costAlimentacion, double costHosp, double costTransp, int dias, int cantidad);
void ReporteGeneral(string nombres[], int edades[], int camisetas[], int cantidad, double costAlimentacion, double costHosp, double costTransp, int dias);
void BuscarEstudiante(string nombres[], int edades[], int camisetas[], int cantidad);


int main(){

    int opcion, cantidad;
    cantidad = 0;

    double costAlimentacion, costHosp, costTransp;
    int dias;

    int lim= 20;

    int max= 99;
    string nombres[lim];
    int edades[lim];
    int camisetas[max];

    do
    {
        cout << "====MENU====" << endl;
        cout << "1. Registro de estudiantes." << endl;
        cout << "2. Gastos de viaje." << endl;
        cout << "3. Precio por estudiante." << endl;
        cout << "4. Reporte general." << endl;
        cout << "5. Buscar a un estudiante." << endl;
        cout << "6. Salir." << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            Registro(nombres,edades,camisetas,cantidad);
            break;

        case 2:
            GastosViaje(costAlimentacion, costHosp, costTransp, dias);
            break;

        case 3:
            PrecioPorEstudiante(costAlimentacion, costHosp, costTransp, dias, cantidad);
            break;   
            
        case 4:
            ReporteGeneral(nombres, edades, camisetas, costAlimentacion, costHosp, costTransp, dias, cantidad);
            break;
            
        case 5:
            BuscarEstudiante(nombres, edades, camisetas, cantidad);
            break;
            
        case 6:
            cout << "Saliendo del programa..." << endl;
            break;    

        default:

        cout << "Opcion invalida" << endl;
            break;
        }

    } while (opcion != 6);

    return 0;

}

void Registro(string nombres[], int edades[], int camisetas[], int &cantidad){

    int n;
    cout << "Ingrese cantidad de estudiantes: ";
    cin >> n;

    int lim= 20;

    if (cantidad > lim)
    {
        cout << "Limite de estudiantes alcanzado.";
        return;
    }

    
    for (int i = 0; i < n; i++)
    {

        int r= cantidad + i;
        cout << "Ingrese nombre " << i + 1 << ": ";
        cin >> nombres[r];

        do
        {
            cout << "Edad (15 - 17): ";
            cin >> edades[i];

            if (edades[i] < 15 || edades[i] > 17)
            {
                cout << "Edad invalida.";
            }
                
        } while (edades[i] < 15 || edades[i] > 17);

        cout << "Numero de camiseta: ";
        cin >> camisetas[r];
    }

    cantidad= cantidad + n;

}


double GastosViaje(double &costAlimentacion, double &costHosp, double &costTransp, int &dias){

    cout << "Días de viaje: "; cin >> dias;
    cout << "Costo diario alimentación: "; cin >> costAlimentacion;
    cout << "Costo diario hospedaje: "; cin >> costHosp;
    cout << "Costo total transporte: "; cin >> costTransp;

}

void PrecioPorEstudiante(double costAlimentacion, double costHosp, double costTransp, int dias, int cantidad){

    if (cantidad == 0)
    {
        cout << "No hay estudiantes registrados.";
        return;
    }
    double DiarioPorapersona= costAlimentacion + costHosp;
    double Costo_total= (DiarioPorapersona * dias * cantidad) + costTransp;
    double PrecioPorEstudiante= Costo_total / cantidad;

    cout << "Costo total del viaje:  $" << Costo_total << endl;
    cout << "Cada estudiante paga:  $" << PrecioPorEstudiante << endl;

}

void ReporteGeneral(string nombres[], int edades[], int camisetas[], int cantidad, double costAlimentacion, double costHosp, double costTransp, int dias){

    double DiarioPorapersona= costAlimentacion + costHosp;
    double Costo_total= (DiarioPorapersona * dias * cantidad) + costTransp;
    double PrecioPorEstudiante= Costo_total / cantidad;

    cout << "Total de estudiantes: " << cantidad << endl;
    cout << "Costo total del viaje:  $" << Costo_total << endl;
    cout << "Cada estudiante paga:  $" << PrecioPorEstudiante << endl;
}

void BuscarEstudiante(string nombres[], int edades[], int camisetas[], int cantidad){

    if (cantidad == 0)
    {
        cout << "No hay estudiantes registrados.";
        return;
    }
    
    int buscar;
    cout << "Numero de camiseta a buscar: ";
    cin >> buscar;

    bool encontrado = false;
    for (int i = 0; i < cantidad; i++)
    {
        if (camisetas[i] == buscar)
        {
            cout << "Estudiante encontrado:";
            cout << endl;
            cout << "Posicion: " << i + 1 << endl;
            cout << "Nombre:       " << nombres[i] << endl;
            cout << "Edad: " << edades[i] << endl;

            encontrado= true;
            break;
    
        }
        
    }
    if (! encontrado)
    {
        cout << "Estudiante no encontrado." << endl;
    }
    
}