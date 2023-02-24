//	  Напишите программу, которая запрашивает широту в градусах, минутах и се­
//        кундах, после чего отображает широту в десятичном формате. В одной минуте
//        60 угловых секунд, а в одном градусе 60 угловых минут; представьте эти зна­
//        чения с помощью символических констант. Для каждого вводимого значения
//        должна использоваться отдельная переменная. Результат выполнения програм­
//        мы должен выглядеть следующим образом:
//                Enter а latitude in degrees, minutes, and seconds:
//                First, enter the degrees: 37
//                Next, enter the minutes of arc: 51
//                Finally , enter the seconds of arc: 19
//                37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

#include <iostream>

int main(int argc, char **argv){
    const int angleSecondsInMinute = 60;
    const int angleMinutesInDegrees = 60 * angleSecondsInMinute;

    int  degreeses, minutes, seconds;

    std::cout << "Enter а latitude in degrees, minutes, and seconds:\n";
    std::cout << "First, enter the degrees: ";
    std::cin >> degreeses;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> minutes;
    std::cout << "Finally , enter the seconds of arc: ";
    std::cin >> seconds;

    std::cout << degreeses << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
    std::cout << degreeses + double(minutes)/angleSecondsInMinute + double(seconds)/angleMinutesInDegrees;
    std::cout << " degrees\n";
    return 0;
}
