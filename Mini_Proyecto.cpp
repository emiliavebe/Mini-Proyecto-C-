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
           su número de camiseta, mostrando su nombre, edad y número. Todo esto mediante un menú 
           interactivo hasta que el usuario escoga la opcio salir.

E/P/S

ENTRADA: numero de estudiantes, nombres, edades, numero camiseta, dias.

PROCESO: Mostrar un menu con las siguientes opciones:

           - Registro de estudiantes.
           - Calcularcostos del viaje.
           - Precio por estudiante.
           - Mostrar reporte general
           - Busqueda de un estudiante.
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

int main(){

    int opcion, cantidad;
    cantidad = 0;

    int lim= 20;
    int max= 99;
    string nombres[lim];
    int edades[lim];
    int camiseta[max];
    double costAlimentacion, costHosp, costTransp;

    do
    {
        cout << "====MENU====" << endl;
        cout << "1. Registro de jugadores." << endl;
        cout << "2. Gastos de viaje." << endl;
        cout << "3. Precio por estudiante." << endl;
        cout << "4. Reporte general." << endl;
        cout << "5. Busqueda de estudiantes." << endl;
        cout << "6. Salir." << endl;
        cout << "Selecciona una opcion: ";

    } while (opcion != 6);


}