/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tabla.h
 * Author: gaby
 *
 * Created on 18 de noviembre de 2015, 03:40 PM
 */

#ifndef TABLA_H
#define TABLA_H
#include <string>
#include <vector>
using namespace std;
class Tabla {
public:
    Tabla();
    Tabla(const Tabla& orig);
    virtual ~Tabla();
    string getNombreTXT();
    string getUser();
    vector<std::string> getDatos();
    void setNombreTXT(string nombreTXT);
    void setUser(string user);
    void setDatos (std::vector<std::string> datos);
    void CrearArchivo(string nombreTXT, string user);
    void InsertarDatos(std::vector<std::string> datos, string Archivo);
    void ModificarColumna(std::vector<std::string> datos);
    void BorrarColumna(std::vector<std::string> datos);
    void EliminarColumna(std::vector<std::string> datos);
    void Encabezado(vector<std::string> encabezado, string Archivo);
    void ArchivoConf(vector<std::string> conf, string NombreTabla);

    
private:
    string nombreTXT;  
    string user;
    std::vector<std::string> datos;
};

#endif /* TABLA_H */

