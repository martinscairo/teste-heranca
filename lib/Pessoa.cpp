
#include <Pessoa.h>


Pessoa::Pessoa(const Pessoa& _orig) : nome(_orig.nome), idade (_orig.idade) {     //construtora de cópia
}

Pessoa :: Pessoa (const std :: string& _nome, const int& _idade) :              // construtora específica
            nome (_nome), idade (_idade) {
}

std :: ostream& operator << (std :: ostream& _os, const Pessoa& _pessoa){     //define operador para função cout
    _os << "Nome: " << _pessoa.nome << "       idade:    " << _pessoa.idade << std :: endl;
}

 const Pessoa& Pessoa :: operator= (const Pessoa& _pessoa){
     if (this!=&_pessoa){                                     //garante que duas pessoas sejam iguais
         nome=_pessoa.nome;                                   // nome do objeto apontado = nome _pessoa
         idade=_pessoa.idade;
     }
     return *this;                                            //retorna o objeto apontado
 }
 

    const bool Pessoa :: operator== (const Pessoa& _pessoa) const {       //avalia se duas pessoas são iguais
        return nome == _pessoa.nome && _pessoa.idade;
    }
//Pessoa::~Pessoa() {
//}

