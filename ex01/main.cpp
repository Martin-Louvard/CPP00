#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    std::string input("input");
    std::string exit("EXIT");
    std::string add("ADD");
    std::string search("SEARCH");
    PhoneBook phonebook;

    while (input != exit)
    {
        std::cout << "Please enter a command (ADD, SEARCH or EXIT)" << "\n";
        std::cin >> input;
        if (input == exit)
            break;
        else if (input == add)
        {
            std::cout << "Adding contact!" << "\n";
        }
        else if (input == search)
        {
            std::cout << "Searching Contact" << "\n";
        }
        else
            std::cout << "Command invalid!" << "\n";       
    }
    return (0);
}