/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: gaby
 *
 * Created on 8 de noviembre de 2015, 12:38 PM
 */

#include <QApplication>
#include <vector>
# include "Tabla.h"
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);
    
   // QApplication app(argc, argv);
    Tabla tab;
    std::vector<std::string> datos;
    datos.push_back("a");
    datos.push_back("v");
    datos.push_back("g");
    for(int i = 0; i < datos.size(); i++){
        cout<<datos[i]<<endl;
    }
    
    tab.InsertarDatos(datos, "hola.txt");
    // create and show your widgets here

    //return app.exec();
}
