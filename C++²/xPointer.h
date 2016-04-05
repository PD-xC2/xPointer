#ifndef XPOINTER_H_
#define XPOINTER_H_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sstream>

//clase template
template<class tipo>
class xPointer
{
public:
    xPointer();
    xPointer(char* type);
    const char _data;
    int _referencia;
    int _direccionPuntero;
    int _tamano;
    const char* _tipo;

    //Metodos
    int getID()const;
    void setID(int valor);
    int getPointer()const;
    void setPointer(int valor);
    int getReferencias() const;
    void setReferencias(int referencias);
    int getTamano()const;
    void setTamano(int valor);
    char getTipo();
    void setTipo(char valor);

    //Sobrecarga de operadores
    void operator=(const xPointer& obj);
    //falta debido al xobject
    //void operator=(const xObject& objeto);
    //void operator->(const xObject);
    bool operator==(const xPointer& obj);
    int operator++(const int);
    int operator--(const int);
    int operator-=(const int);
    int operator+=(const int);
    int operator+(const int);
    int operator-(const int);
    void operator*(xPointer);


private:
    int ID;
//	int* dirPuntero= (int*)calloc(1,2*sizeof(int));
//	int* size=(int*)calloc(1,2*sizeof(char));
//	char* _data_tipo=(char*)calloc(1,sizeof(int));
//	int* references=(int*)calloc(1,sizeof(char));
};
#endif /* XPOINTER_H_ */