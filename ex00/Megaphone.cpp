#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                argv[i][j] = toupper(argv[i][j]);
                j++;
            }
            std::cout << argv[i];
            i++;
        }
    }
    std::cout << "\n";
    return 0;
}