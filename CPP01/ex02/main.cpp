#include <iostream>

int main(void)
{
        std::string brain = "HI THIS IS BRAIN";
        std::string* stringPTR = &brain;
        std::string& stringREF = brain;

        std::cout << "brain adress: " << &brain << std::endl;
        std::cout << "stringPTR adress: " << stringPTR << std::endl;
        std::cout << "stringREF adress: " << &stringREF << std::endl;
        std::cout << std::endl;
        std::cout << "brain value: " << brain << std::endl;
        std::cout << "stringPTR value: " << *stringPTR << std::endl;
        std::cout << "stringREF value: " << stringREF << std::endl;
        return 0;
}
