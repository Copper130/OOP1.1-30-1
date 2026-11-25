
#include <iostream>
#include <string>



class Characters {

    std::string Name;
    int Health = 100; // Attributes   
    int Level = 0;

public:

    // Set the character attributes according to the inputted arguments.
    void SetCharacter(std::string SetName, int SetHealth, int SetLevel) {
        Name = SetName;
        Health = SetHealth;
        Level = SetLevel;
    }

    // Displays stats for desired object (Character)
    void DisplayCharacterStats() {

        std::cout << "Name: " << Name << "\nHealth: " << Health << "\nLevel: " << Level << std::endl;

    }

    // Will set the level of a character, for bug fixing and or cheating.
    int Set_lvl(int NewLevel) {
        Level = NewLevel;
    }

    //Function for leveling up of a character, nothing fancy at the moment.
    void Lvl_up() {
        Level++;
    }
    // Will get the level of a character
    int Get_lvl(){
    return Level;
    }

};


int main() {
    std::cout << "Welcome to the Character OOP showcase!\nEnjoy!\n\n";

    // Creating object credit to Luke for the name
    Characters Helpie; //Object Created, Could be changed to player or whatever depending on use case. Having it be the characters name is slightly redundant
    Helpie.SetCharacter("Helpie", 100, 1); // Name, Health, Level.
    Helpie.DisplayCharacterStats();

    
   
}
