#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook{

    public:
        //Constructors
        PhoneBook();

        //Seter methods
        void    set_contact(Contact contact);

        //Geter methods
        Contact get_contact(int index) const;

    private:
        //Attributes
        Contact contacts[8];
};
#endif
