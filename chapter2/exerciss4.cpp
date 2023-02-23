//	4. Напишите программу, которая предлагает пользователю ввести свой возраст.
//        Затем программа должна отобразить возраст в месяцах:
//                Enter your age : 29
//                Your age in months is 348 .

#include <iostream>

int main(int argc, char** argv){

    int years;
    std::cout << "Enter your age: ";
    std::cin >> years;
    std::cout << "Your age in months is " << years*12 << std::endl;

    return 0;
}
