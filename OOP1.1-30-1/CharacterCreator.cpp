
#include <iostream>
#include <string>



class Character {
   int Level=0;
public:
    
    int Health;
    int Set_lvl(int NewLevel) {
        Level = NewLevel;
    }
    int Get_lvl();
    int Lvl_up();



};

int Character::Level = 0;
    void Lvl_up() {
        Character::Level++;
    }

    int Character::Get_lvl() {
        return Level;
    }


// Overly Overused Premise
int main() {
    Character Helpie;
    Helpie.Level = 1;
    
    
    return Character.Get_lvl;
    return 8008;
}
