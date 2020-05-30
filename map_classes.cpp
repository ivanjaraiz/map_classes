// map_classes.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    // key, value
    m.insert(pair<int, string>(1, "jonh"));
    m.insert(pair<int, string>(2, "Ravi"));
    m.insert(pair<int, string>(3, "Khan "));
  
    map<int, string>::iterator itr;
    // begin(),end() available en cualquier estructura de datos
    // iteración en los valores. 
    for (itr = m.begin(); itr != m.end(); itr++)
        //Acceso al primer valor, y con second visualizamos todos los valores. 
        cout << itr->first <<" "<<itr->second<< endl;

    map<int, string>::iterator itr1;
    //buscar en map con key 2
    itr1 = m.find(2); 
    // Este visualiza lo dos valores, key and value
    cout << "value found is " << endl;
    cout << itr1->first << " " << itr1->second << endl;

    return 0;
}

// si no almacenas nada en estructura de datos. Y esmuy útil cuando quieres buscar frecuentemente
// en estructuras de datos. 


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
