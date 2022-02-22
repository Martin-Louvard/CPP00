#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact{
    private:
        std::string first_name, last_name, darkest_secret, phone_number;
    public:
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_darkest_secret(std::string darkest_secret);
        void set_phone_number(std::string phone_number);
        std::string get_first_name() const;
        std::string get_last_name() const;
        std::string get_darkest_secret() const;
        std::string get_phone_number() const;
        Contact();
        Contact(std::string first_name, std::string last_name, std::string darkest_secret, std::string phone_number);
};
#endif
