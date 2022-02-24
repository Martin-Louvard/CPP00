#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{}

void    PhoneBook::set_contact(Contact contact)
{
    static int index = 0;
    if (index == 8)
        index = 0;
    this->contacts[index] = contact;
    index++;
}

Contact PhoneBook::get_contact(int index) const
{
    return this->contacts[index];
}
