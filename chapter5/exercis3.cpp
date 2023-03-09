//	3. Напишите программу, которая приглашает пользователя вводить числа. После
//	каждого введенного значения программа должна выдавать накопленную сумму
//	введенных значений. Программа должна завершаться при вводе 0.



#include <iostream>

int main(int argc, char ** argv){
    int sum{0}, num{0};

    std::cout << "Please, enter a number: ";
    std::cin >> num;

    while (num != 0){
        sum += num;
        std::cout << "Now, sum is: " << sum << std::endl;
        std::cout << "Please, enter a number: ";
        std::cin >> num;
    };



    return 0;
}
