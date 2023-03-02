//	6.Напишите программу, которая запрашивает количество миль, пройденных ав­
//        томобилем, и количество галлонов израсходованного бензина, а затем сообща­
//        ет значение количества миль на галлон. Или , если хотите, программа может
//        запрашивать расстояние в километрах, а объем бензина в литрах, и выдавать
//        результат в виде количества литров на 100 километров.


#include <iostream>

int main(int argc, char ** argv){
    int kms, liters;
    std::cout << "How many kilometers the car traveled? : ";
    std::cin >> kms;
    std::cout << "How many liters of fuel have been used? : ";
    std::cin >> liters;

    std::cout << "Fuel consumption of "
              << (100 * liters) / static_cast<float>(kms)
              << " liters per 100 kilometers " << std::endl;
    return 0;
}
