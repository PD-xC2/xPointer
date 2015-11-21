/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   File.h
 * Author: gaby
 *
 * Created on 18 de noviembre de 2015, 02:24 PM
 */

#ifndef FILE_H
#define FILE_H
#include <string>
using namespace std;

class File {
public:
    File();
    File(const File& orig);
    virtual ~File();
    void LeerFile(std::string nombre);

};

#endif /* FILE_H */

