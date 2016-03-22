
#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>

class Pessoa {
    friend std::ostream& operator << (std::ostream&, const Pessoa&);
public:
    
//******************************************
//
//     CONSTRUTORES
//
//******************************************
    Pessoa(){};                                   //construtora default
    Pessoa (const std :: string&, const int&);    // construtora específica
    Pessoa(const Pessoa& orig);                   // construtora de cópia
    virtual ~Pessoa(){};                          //destrutor
    
//******************************************
//
//     sobrecarga de operadores
//
//******************************************
    const Pessoa& operator= (const Pessoa&);
    const bool operator== (const Pessoa&) const;
    
    inline const  std :: string Nome() const {return nome;}
    
//protected:       //público p classes derivadas
    std::string   nome;
    int           idade;
};

#endif /* PESSOA_H */

