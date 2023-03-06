//	10. Напишите программу, которая приглашает пользователя ввести три результа­
//	та забега на 40 ярдов (или 40 метров, если желаете) и затем отображает эти
//	значения и их среднее. Для хранения данных применяйте объект array. (Если
//	объект array не доступен, воспользуйтесь встроенным массивом.)

#include <iostream>
#include <array>

int main(int argc, char** argv){
    std::array<double,3> fortyYards;

    for(int i(0); i < fortyYards.size(); ++i){
        std::cout << "Please, enter a result of " << i+1 << " dash: ";
        std::cin >> fortyYards[i];
    }
    std::cout << std::endl;

    for(int i(0); i <fortyYards.size(); ++i){
        std::cout << "Result of " << i+1 << " run is " << fortyYards[i] << "  seconds" <<std::endl;
}

    return 0;
}
