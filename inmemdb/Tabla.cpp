/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tabla.cpp
 * Author: gaby
 * 
 * Created on 18 de noviembre de 2015, 03:40 PM
 */

#include "Tabla.h"
#include <fstream>
#include <cstring>
#include <iostream>
Tabla::Tabla() {

}

Tabla::Tabla(const Tabla& orig) {
}

Tabla::~Tabla() {
}
string Tabla:: getNombreTXT(){
    return nombreTXT;
}
string Tabla:: getUser(){
    return user;
}
vector<std::string> Tabla::getDatos(){
    return datos;
    }
void Tabla::setNombreTXT(string nombreTXT){
    this->nombreTXT=nombreTXT;
    }
void Tabla::setUser(string user){
    this->user=user;
    }
void Tabla::setDatos (std::vector<std::string> datos){
    this->datos=datos;
    }

void Tabla::CrearArchivo(string nombreTXT, string user){
    string nombre=nombreTXT+ "-" +user+ ".txt";
    char *y = strdup(nombre.c_str());
    ofstream Archivo(y);
    }
void Tabla::InsertarDatos(std::vector<std::string> datos, string Archivo){
    ofstream File;    
    char *y = strdup(Archivo.c_str());
    File.open(y, ios::app);
    for (int i=0; i<datos.size(); i++){
        File << datos[i] + "," ;
    }
    File.close();
    datos.clear();
}

void Tabla::ModificarColumna(std::vector<std::string> datos){
        
    }
void Tabla::BorrarColumna(std::vector<std::string> datos){
        
    }
void Tabla::EliminarColumna(std::vector<string> datos){
        
    }
void Tabla:: Encabezado(vector<std::string> encabezado, string Archivo){
    ofstream File;    
    char *y = strdup(Archivo.c_str());
    File.open(y, ios::app);
    for (int i=0; i<encabezado.size(); i++){
        File << encabezado[i] + "," ;
    }
    File.close();
    encabezado.clear();
}
void Tabla::ArchivoConf(vector<std::string> conf, string NombreTabla){
    string nombre=NombreTabla+ "-" +user+ "-ArchivoConf.txt";
    char *y = strdup(nombre.c_str());
    ofstream Archivo(y);
    
    for (int i=0; i<conf.size(); i++){
      Archivo << conf[i] + "," ;
    }
    Archivo.close();
    conf.clear(); 
}
