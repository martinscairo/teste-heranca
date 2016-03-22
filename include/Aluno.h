

#ifndef ALUNO_H
#define ALUNO_H
#include <Pessoa.h>

class Aluno : public Pessoa {
    
    friend std::ostream& operator << (std::ostream&, const Aluno&);
    
public:

//******************************************
//
//     CONSTRUTORES
//
//******************************************
    Aluno() : Pessoa () {};                    //construtora default, baseado na cd de pessoa
    Aluno(const Aluno&);                       // construtora de cópia
    Aluno (const std:: string&, const int&, const std::string&); //nome, cpf, curso
    Aluno (const Pessoa&, const std :: string&);       //pessoa e curso
    virtual ~Aluno() {};

//******************************************
//
//     sobrecarga de operadores
//
//******************************************
    const Aluno& operator= (const Aluno&);
    const bool operator== (const Aluno&) const;       //pessoa igual e curso igual
    
    
private:
    std :: string curso;

};

#endif /* ALUNO_H */

