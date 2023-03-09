//	1. Напишите программу, запрашивающую у пользователя ввод двух целых чисел.
//      Затем программа должна вычислить и выдать сумму всех целых чисел, лежащих
//      между этими двумя целыми. Предполагается, что меньшее значение вводится
//      первым. Например, если пользователь ввел 2 и 9, программа должна сообщить,
//	что сумма всех целых чисел от 2 до 9 равна 44.


#include <iostream>

int main(int argc, char ** argv){
    int firstNum, secondNum, sum{0};
    std::cout << "Pleases, enter first num: ";
    std::cin >> firstNum;
    std::cout << "please, enter second num: ";
    std::cin >> secondNum;
    for(int i(firstNum); i <= secondNum; ++i){
        sum += i;
    }
    std::cout << "Sum of elements is: " << sum << std::endl;
    return 0;
}
