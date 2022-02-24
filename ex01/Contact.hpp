#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact{

    public:
        //Constructors
        Contact();
        Contact(std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, std::string phone_number);
        
        //Seter methods
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_nickname(std::string nickname);
        void set_darkest_secret(std::string darkest_secret);
        void set_phone_number(std::string phone_number);

        //Geter methods
        std::string get_first_name() const;
        std::string get_last_name() const;
        std::string get_nickname() const;
        std::string get_darkest_secret() const;
        std::string get_phone_number() const;

    private:
        //Attributes
        std::string first_name, last_name, nickname, darkest_secret, phone_number;
};
#endif
