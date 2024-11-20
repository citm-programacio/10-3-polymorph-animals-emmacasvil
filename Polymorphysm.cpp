// Polymorphysm.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

class Animal { //pure abstract class
public:
    virtual void speak() { cout << "hiii" << endl; };

    virtual void eat() {};

    virtual ~Animal() {}; 
};

class dog : public Animal {
public: 
    void speak() override { cout << "guau" << endl; }
    void eat() override { cout << "the dog is eating" << endl; }
};

class cat : public Animal {
public:  
    void speak() override { cout << "miau" << endl; }
    void eat() override { cout << "the cat is eating" << endl; }
};


int main()
{
    Animal animalMain; 
    dog dogMain; 
    cat catMain;

    animalMain.speak(); 
    dogMain.speak();
    catMain.speak();

    dogMain.eat(); 
    catMain.eat(); 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
