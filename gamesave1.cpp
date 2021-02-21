#include <iostream>
#include <string>

int main () {
    // Qualify String
    std::string name;
    // Variale Declartion
    double health;
    double hunger;
    double energy;
    int money;
    int shopa;
    std::string cname;
    int confirm;
    // Game Setup
    std::cout << "Enter Character Name\n";
    std::cin >> cname;
    std::cout << "Name you character " << cname << "? Type 1 to confirm \n";
    std::cin >> confirm;

    if (confirm != 1) {

        std::cout << "Choose new name now ";
        std::cin >> cname;
        std::cout << "Name you character " << cname << "? Type 1 to confirm";
        std::cin >> confirm;

    }
    // The Story Begins
    std::cout << "Congratulations " << cname << " before you begin your journey there are some things you should know!\n";
    hunger = 100;
    health = 100;
    energy = 200;
    money = 1000;
    std::cout << " You have some things you need to keep an eye on\n";
    std::cout << " You have hunger (100) health (100) energy (200) and money (1000) we'll keep you updated on what level these are at but make sure to not let them get too low\n";
    std::cout << " Type 1 to continue\n";
    std::cin >> confirm;
    
    if (confirm != 1) {

        std::cout << "You've failed the first test. I mean come on it's been like a minute.";
        std::cout << "Type 1 to continue";
        std::cin >> confirm;

    }

    //Act 1
    std::cout << "So here we are " << cname << " my name is Narrator. Before we go any farther we should go shopping. Type 1 to enter the shop.\n";
    std::cin >> confirm;

    if (confirm != 1) {

        std::cout << "Ahhh, a rule breaker. Let me show you what we do to rule breakers. As you're rebeliously standing outside the store a man walks by, trips and falls into you. You lose 50 health!\n";
        std::cout << "Health (50)\n";
        std::cout << "Type 1 to continue\n";
        std::cin >> confirm;

    }

    while (confirm != 1) {

        std::cout << "I can do this as long as you can\n";
        std::cout << "Type 1 to continue\n";
        std::cin >> confirm;

    }

    std::cout << "A shopkeeper enters from a door behind the counter; he speaks to you from behind a counter\n";
    std::cout << "Would you like to browse my shop?\n";
    std::cout << "Press 1 to browse\n";
    std::cout << "Press 2 to exit\n";
    std::cin >> shopa;

    if (shopa == 1) {

        std::cout << "Ahhhhhh\n";

    }

    if (shopa = 2) {

        std::cout << "Goodbye\n";

    }

    std::cout << "this is just a test\n";


}