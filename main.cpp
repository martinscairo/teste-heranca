
#include <iostream>
#include <Pessoa.h>
#include <Aluno.h>

void Fx (const Pessoa&);

int main(int argc, char** argv) {
    Pessoa p1, p2 ("Joao",37), p3 (p2);
    
    std :: cout << "p2:" << p2 << std :: endl;
    std :: cout << "p3:" << p3 << std :: endl;

    p1=p3;
    std :: cout << "p1:" << p1 << std ::endl;
    
    if (p1==p2){
        std :: cout << "P1==P2";
    }
    else {
        std :: cout << "P1!=P2";
    }
    
    Aluno a1, a2("Jose", 45, "Engenharia"), a3(p3,"matematica"), a4(a3);
    std :: cout << "A2: " << a2 << std::endl;
    std :: cout <<"A3: " << a3 << std::endl;
    std :: cout << "A4: " << a4 << std::endl;
    
    
    a1=a2;
    std :: cout << "A1:" << a1 << std::endl;
    
    
    std :: cout << std :: endl << std :: endl;
    Fx(p1);
    Fx (a1);
    
    return 0;
}

void Fx ( const Pessoa&_pessoa){
    std :: cout << "Nome da pessoa:  " << _pessoa.Nome() << std :: endl;  //aluno é pessoa
}
