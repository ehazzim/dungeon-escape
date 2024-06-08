# include <iostream>
# include <string>

// variables
std::string playerName = "Player";

int locationChoice;

// functions
void start()
{
    std::cout << "You find yourself in a dungeon illuminated by a single flickering candle.\n" << std::endl;
}

// main body
int main()
{
    start();
    
    // player introduction
    std::cout << "Your head hurts and the only thing you remember is your name, which is: \n" << std::endl;
    std::cin >> playerName;

    std::cout << playerName + ". That sounds familiar.\n" << std::endl;

    // where will you go?
    std::cout << "You see three doors in front of you.\n";

    std::cout << "Door 1 looks fairly new in comparison to the rest. Choose that one.\n" << std::endl;
    std::cout << "There's a faint light behind Door 2 - this looks the safest.\n" << std::endl;
    std::cout << "Door 3 looks ominous but it may deceptively be the best choice. Chance it.\n" << std::endl;

    std::cout << "You decide to go through Door: \n";
    std::cin >> locationChoice;

    switch(locationChoice) {
    case 1:
        std::cout << "The handle gives easily and you make your way through Door 1." << std::endl;
        break;
    case 2:
        std::cout << "Not wanting to stay in almost complete darkness, you push open the heavy middle door." << std::endl;
        break;
    case 3:
        std::cout << "A sense of adventure! The handle to Door 3 is slightly stuck but with perseverance, it eventually gives way." <<std::endl;
        break;
    default:
        std::cout << "On second thought, you decide that you'd rather stay here for the rest of your life." << std::endl;
    }

    system("pause");
}