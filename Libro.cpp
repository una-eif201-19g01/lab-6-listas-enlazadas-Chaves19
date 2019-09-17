//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Libro.h"

Libro::Libro() : nombre(""), editorial(""), anno(0), autor(""), id("") {

}

Libro::Libro(std::string nombre, std::string editorial, int anno, std::string autor, std::string id): nombre(nombre), editorial(editorial), anno(anno), autor(autor), id(id) {

}

Libro::~Libro() {

}

void Libro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Libro::getNombre() {
    return nombre;
}

void Libro::setEditorial(std::string editorial) {
    this->editorial = editorial;
}

std::string Libro::getEditorial() {
    return editorial;
}

void Libro::setAnno(int anno) {
    this->anno = anno;
}

int Libro::getAnno() const {
    return anno;
}

void Libro::setAutor(std::string autor) {
    this->autor = autor;
}

std::string Libro::getAutor() {
    return autor;
}

void Libro::setId(std::string id) {
    this->id = id;
}

std::string Libro::getId() {
    return id;
}

std::string Libro::toString() {

}





