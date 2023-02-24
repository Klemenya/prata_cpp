//	4.Напишите программу, которая запрашивает количество секунд в виде целого
//        значения (используйте тип long или long long, если последний доступен) и
//        затем отображает эквивалентное значение в сутках, часах, минутах и секундах.
//        Для представления количества часов в сутках, количества минут в часе и ко­
//        личества секунд в минуте используйте символические константы. Результат вы­
//        полнения программы должен выглядеть следующим образом:
//        Enter the n umber of seconds : 31600000
//        31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

#include <iostream>

int main (int argc, char **argv){
    long long allSeconds;
    std::cout << "Enter the n umber of seconds : ";
    std::cin >> allSeconds;
    
    int days = allSeconds / 60 / 60 / 24;
    int seconds = (allSeconds - days * 60 * 60 *24);
    int hours = seconds / 60 / 60;
    seconds = (seconds - hours * 60 * 60);
    int minutes = seconds / 60;
    seconds = seconds - minutes * 60;
    std::cout << allSeconds << " seconds = " << days << " days, ";
    std::cout << hours << " hours, " << minutes << " minutes, ";
    std::cout << seconds << " seconds" << std::endl;

    return 0;
}
