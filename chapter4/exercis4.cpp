//	4. Напишите программу, которая приглашает пользователя ввести его имя и фа­
//	милию, а затем построит, сохранит и отобразит третью строку, состоящую
//	из фамилии, за которой следует запятая, пробел и имя. Используйте объекты
//	string и методы из заголовочного файла string. Пример запуска должен вы­
//	глядеть так:
//		Enter your first name : Flip
//		Enter your last name : Fleminq
//		Here's the information in аs ingle string : Fleming, Flip



#include <iostream>
#include <string>

int main(int argc, char ** argv){
    std::string firstName, lastName, fullName;
    std::cout << "Enter your first name : ";
    std::cin >> firstName;
    std::cout << "Enter your last name : ";
    std::cin >> lastName;
    fullName += lastName;
    fullName.push_back(',');
    fullName.push_back(' ');
    fullName += firstName;

    std::cout << "Here's the information in аs ingle string : " << fullName << std::endl;
    
return 0;
}
