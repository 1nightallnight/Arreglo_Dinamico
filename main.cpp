#include "AD.h"

int main()
{
    Arreglo_Dinamico arreglo;

    std::cout<< "Strings insertados al inicio: "<<endl;
    arreglo.Insertar_inicio("2");
    arreglo.Insertar_inicio("1");
    for(size_t i=0;i<arreglo.size();i++)
    {
        std::cout<< arreglo[i]<<endl;
    }
    system("pause");
    std::cout<<endl;

    std::cout<< "Strings insertados al final: "<<endl;
    arreglo.Insertar_final("3");
    arreglo.Insertar_final("4");
    arreglo.Insertar_final("5");
    arreglo.Insertar_final("6");
    arreglo.Insertar_final("7");
    arreglo.Insertar_final("8");
    arreglo.Insertar_final("9");
    arreglo.Insertar_final("10");
    for(size_t i=2;i<arreglo.size();i++)
    {
        std::cout<< arreglo[i]<<endl;
    }
    system("pause");


    return 0;
}
