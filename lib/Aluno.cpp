#include <Aluno.h>


Aluno::Aluno(const Aluno& _orig) : Pessoa (_orig), curso (_orig.curso) {}



Aluno :: Aluno (const std:: string& _nome, const int& _idade, const std::string& _curso) :
                  Pessoa (_nome, _idade), curso (_curso) {}



Aluno:: Aluno (const Pessoa&_pessoa, const std :: string&_curso) : 
                  Pessoa (_pessoa.nome, _pessoa.idade), curso (_curso) {}



std:: ostream& operator << (std::ostream& _os, const Aluno& _aluno){
    //_os << "Nome: " << _aluno.nome << "cpf: " << _aluno.cpf; << "curso: " << _aluno.curso;
    _os <<  Pessoa(_aluno) << "        curso:  " << _aluno.curso << std :: endl;;
    return _os;
}

const Aluno& Aluno :: operator= (const Aluno&_aluno) {
         if (this!=&_aluno){
             this -> Pessoa :: operator = (_aluno);
             //nome = _aluno.nome;
             //idade = _aluno.idade;
             curso = _aluno.curso;
             
     }
         return *this;
 }
 

const bool Aluno :: operator== (const Aluno& _aluno) const {
    return this -> Pessoa :: operator==(_aluno) && curso == _aluno.curso;
}  
//Aluno::~Aluno() {
//}

