//	1 . Напишите программу С++, которая запрашивает и отображает информацию,
//	как показано в следующем примере вывода:
//		What is your first name ? Betty Sue
//		What is your last name ? Yewe
//		What letter grade do уо deserve ? В
//		What is your age ? 22
//		Name : Yewe , Betty Sue
//		Grade : С
//		Age : 22
//	Обратите внимание, что программа должна принимать имена, состоящие из
//	более чем одного слова. Кроме того, программа должна уменьшать значение
//	grade на одну градацию - т.е. на одну букву выше. Предполагается, что пользо­
//	ватель может ввести А, В или С, поэтому вам не нужно беспокоиться о пропус­
//	ке между D и F.

#include <iostream>

int main(int argc, char ** argv){
    char firstName[30], lastName[30], letter;
    int  age;
    std::cout << "What is your first name ? ";
    std::cin.get(firstName,30).get();
    std::cout << "What is your last name ? ";
    std::cin.get(lastName,30).get();
    std::cout << "What letter grade do you deserve ? ";
    std::cin.get(letter);
    std::cout << "What is your age ? ";
    std::cin >> age;
    std::cout << "Name : " << lastName << " , " << firstName << std::endl;
    std::cout << "Grade : " << char(letter+1) << std::endl;
    std::cout << "Age : " << age << std::endl;
    return 0;
}
