/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   File.cpp
 * Author: gaby
 * 
 * Created on 18 de noviembre de 2015, 02:24 PM
 */

#include "File.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

File::File() {
}

File::File(const File& orig) {
}

File::~File() {
}

void File::LeerFile(std::string nombre){
    fstream File ("myfile.txt");
    string Linea;
    string Cadena;
    int lin=0;
    std::vector<int> tamano;
    int tam;
    std::vector<char> casa;
    while(File.good()) if(File.get()=='\n') lin++;
    int Cant_Lineas=lin;
    File.clear();
    File.seekg(0, File.beg);
    std::vector<string> datos;
    if (File.is_open()){
        for(int i=0; i<Cant_Lineas; i++){
            getline (File,Linea);
            if (datos.capacity() == NULL) {
                datos.push_back(Linea);
            }
            else{
                datos.push_back(Linea);
            }
        }

    } else {
        cout << "No es posible abrir el archivo" << endl;
    }
    
    for (int o=0; o<lin; o++){
        Cadena=datos[o];
        char *h = strdup(Cadena.c_str());
        for (int i=0;  i<strlen(h); i++){ 
            if (h [i] == ','){
                i=strlen(h);
                tamano.push_back(tam);
                tam=0;
                //cout<<h[i];
                //cout << "\n" <<endl;
            }
            else tam++;
        }
        for (int z=0; z<tamano[o]; z++){
            //casa+=h[z];
            //for (int m=0;  m<tamano[o]; m++){
                //strncpy(casa.[o], h[z], tamano[o]);
                //strncat(casa[o], h [m]);
            //}
        }
    }
 
    File.close();
}