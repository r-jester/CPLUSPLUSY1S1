#include <iostream>

//Virtual Functions Cpp, Pure Virtual Functions and Abstract Classes in OOP

class Hero{

public:

    virtual void Picking(){
        std::cout << "Hero is Picking...";
    };
    virtual void Banning(){
        std::cout << "Hero is Banning...";
    };

};
class Chou : public Hero{

public:

    void Picking(){
        std::cout << "Chou is Picking...";
    }

};
class Gusion : public Hero{
    
public:
    void Picking(){
        std::cout << "Gusion is Picking...";
    }
};
class Franco : public Hero{
public:
    void Banning(){
        std::cout << "Franco is banning...";
    }
};
class Nana : public Hero{
public:
    void Banning(){
        std::cout << "Nana is banning...";
    }
};

int main(){
    system("cls");
    
    Hero *s1 = new Chou();
    // s1->Picking();
    std::cout << std::endl;
    Hero *s2 = new Gusion();
    // s2->Picking();
    std::cout << std::endl;
    Hero *s3 = new Franco();
    //s3->Banning();
    std::cout << std::endl;
    Hero *s4 = new Nana();
    //s4->Banning();

    Hero *pickheros[2] = {s1, s2};
    for(int i = 0; i < 2; i++){
        pickheros[i] -> Picking();
        std::cout << '\n';
    }
    Hero *banheros[2] = {s3, s4};
    for(int i = 0; i < 2; i++){
        banheros[i] -> Banning();
        std::cout << '\n';
    }

    return 0;
}