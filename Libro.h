//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#define LAB_6_LISTAS_ENLAZADAS_LIBRO_H

class Libro {
private:
    std::string nombre;
    std::string editorial;
    int anno;
    std::string autor;
    std::string id;
public:
    Libro();
    Libro(std::string, std::string, int, std::string, std::string);
    ~Libro();
    void setAutor(std::string);
    std::string getAutor();
    void setAnno(int);
    int getAnno();
    void setEditorial(std::string);
    std::string getEditorial();
    void setNombre(std::string);
    std::string getNombre();
    void setId(std::string);
    std::string getId();
    std::string toString();
};


#endif //LAB_6_LISTAS_ENLAZADAS_LIBRO_H
