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

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    std::string phone_number;

    while (input != exit)
    {
        std::cout << "Please enter a command (ADD, SEARCH or EXIT)" << "\n";
        std::cin >> input;
        if (input == exit)
            break;
        else if (input == add)
        {
            std::cout << "New contact first name" << "\n";
            std::cin >> first_name;
            std::cout << "New contact last name" << "\n";
            std::cin >> last_name;
            std::cout << "New contact nickname" << "\n";
            std::cin >> nickname;
            std::cout << "New contact darkest secret" << "\n";
            std::cin >> darkest_secret;
            std::cout << "New contact phone number" << "\n";
            std::cin >> phone_number;
            Contact new_contact(first_name, last_name, nickname, darkest_secret, phone_number);
            phonebook.set_contact(new_contact);
        }
        else if (input == search)
        {
            Contact contact;
            int i = 0;
            while (i < 8)
            {
                contact = phonebook.get_contact(i);
                std::cout << i << "         |" << contact.get_first_name() << "|" << contact.get_last_name() << "|" << contact.get_nickname() << "\n";
                i++;
            }
            std::cout << "For more details about a contact type its index\n";
            std::cin >> i;
            contact = phonebook.get_contact(i);
            std::cout << "First name: "<<contact.get_first_name() << "\n";
            std::cout << "Last name: "<<contact.get_last_name() << "\n";
            std::cout << "Nickname: "<<contact.get_nickname() << "\n";
            std::cout << "Darkest secret: "<<contact.get_darkest_secret() << "\n";
            std::cout << "Phone number: "<<contact.get_phone_number() << "\n";
        }
        else
            std::cout << "Command invalid!" << "\n";       
    }
    return (0);
}