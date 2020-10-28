#ifndef AD_H
#define AD_H
#include <iostream>

using namespace std;

class Arreglo_Dinamico
{
private:
    string *arreglo;
    size_t cont;
    size_t tam;
    const static int MAX=5;
    void expandir();

public:
    Arreglo_Dinamico();
    ~Arreglo_Dinamico();
    void Insertar_final(const string &s);
    void Insertar_inicio(const string &s);

    string operator[](size_t p)
    {
        return arreglo[p];
    }

    size_t size();

};

#endif
