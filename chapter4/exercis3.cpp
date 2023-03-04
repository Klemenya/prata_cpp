//	3. Напишите программу, которая запрашивает у пользователя имя, фамилию, а
//	затем конструирует, сохраняет и отображает третью строку, состоящую из фа­
//	милии пользователя, за которой следует запятая, пробел и его имя. Используйте
//	массивы char и функции из заголовочного файла cstring. Пример запуска
//	должен выглядеть так:
//		Enter your first name : Flip
//		Enter your last name : Fleminq
//		Here's the in formation in аs ingle string : Fleming, Flip

#include <iostream>
#include <cstring>

int main(int argc, char **argv){
    char firstName[30], lastName[30], fullName[60];
    std::cout << "Enter your first name : ";
    std::cin.get(firstName,30).get();
    std::cout << "Enter your last name : ";
    std::cin.get(lastName,30).get();
    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);
    
    std::cout << fullName;


    return 0;
}
