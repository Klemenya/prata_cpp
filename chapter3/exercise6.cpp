//	6.Напишите программу, которая запрашивает количество миль, пройденных ав­
//        томобилем, и количество галлонов израсходованного бензина, а затем сообща­
//        ет значение количества миль на галлон. Или , если хотите, программа может
//        запрашивать расстояние в километрах, а объем бензина в литрах, и выдавать
//        результат в виде количества литров на 100 километров.


#include <iostream>

int main(int argc, char ** argv){
    int miles, gallons;
    std::cout << "How many miles the car has traveled? : ";
    std::cin >> miles;
    std::cout << "How many gallons of gasoline were used? : ";
    std::cin >> gallons;

    std::cout << "you can drive "
              << static_cast<double>(miles) / gallons
              << " miles on one gallon" << std::endl;
    return 0;
}
