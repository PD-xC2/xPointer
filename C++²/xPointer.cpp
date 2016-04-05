#include "xPointer.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

template<class tipo>
xPointer<tipo>::xPointer(){
}

//metodo que recibe el id del xobject
template<class tipo>
int xPointer<tipo>::getID() const{
	return this->ID;
}

//metodo que crea un id
template<class tipo>
void xPointer<tipo>::setID(int ID){
	this->ID=ID;
}

//metodo que obtiene el tipo de dato
template<class tipo>
char xPointer<tipo>::getTipo(){
    return *(this->_data);
}

//metodo que establece un tipo de dato
template<class tipo>
void xPointer<tipo>::setTipo(char valor){
	this->_data=valor;
}

//metodo que obtiene un puntero
template<class tipo>
int xPointer<tipo>::getPointer()const{
	return *(this->_direccionPuntero);
}

//metodo que crea un puntero apuntando al objeto
template<class tipo>
void xPointer<tipo>::setPointer(int valor){
	*(this->_direccionPuntero)=valor;
}

//metodo que obtiene el tamaño del objeto en memoria
template<class tipo>
int xPointer<tipo>::getTamano()const{
	return *(this->_tamano);
}

//metodo que indica el tamaño en memoria para el objeto
template<class tipo>
void xPointer<tipo>::setTamano(int valor){
	*(this->_tamano)=valor;
}

//metodo que obtiene las referencias del objeto
template<class tipo>
int xPointer<tipo>::getReferencias()const{
	return *(this->_referencia);
}

//crea una nueva referencia para el objeto
template<class tipo>
void xPointer<tipo>::setReferencias(int referencias){
	*(this->_referencia)=referencias;
}


/**
template<class tipo>
int xPointer<tipo>::operator ++(int){
	dirPuntero+=1;
}
template<class tipo>
int xPointer<tipo>::operator --(int){
	dirPointer-=1;
}
template<class tipo>
void xPointer<tipo>::operator =(const xObject& objeto){
	cout<<"verifica que el tamaño del objeto sea igual"<<;
}
template<class tipo>
bool xPointer<tipo>::operator ==(const xPointer& objeto){
	bool c=true;
	return c;
}
*/
