// 2. 	Перепишите листинг 4.4, применив класс С++ string вместо массивов char.

#include <iostream>

int main(int argc, char ** argv){
    std::string firstName, lastName;
    char letter;
    int  age;
    std::cout << "What is your first name ? ";
    std::getline(std::cin, firstName);
    std::cout << "What is your last name ? ";
    getline(std::cin, lastName);
    std::cout << "What letter grade do you deserve ? ";
    std::cin.get(letter);
    std::cout << "What is your age ? ";
    std::cin >> age;
    std::cout << "Name : " << lastName << " , " << firstName << std::endl;
    std::cout << "Grade : " << char(letter+1) << std::endl;
    std::cout << "Age : " << age << std::endl;
    return 0;
}
