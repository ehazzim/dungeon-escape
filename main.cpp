# include <iostream>
# include <string>

// variables
std::string playerName = "Player";

// functions
void start()
{
    std::cout << "You find yourself in a dungeon.\n" << std::endl;
}

// main body
int main()
{
    start();
    
    std::cout << "Your head hurts and the only thing you remember is your name, which is: " << std::endl;
    std::cin >> playerName;

    std::cout << "Right. " + playerName + ". The only thing that sounds familiar in here.\n" << std::endl;

    system("pause");
}