//	7. Разработайте структуру по имени car, которая будет хранить следующую ин­
//	формацию об автомобиле: название производителя в виде строки в символьном 
//	массиве или в объекте s t ring, а также год выпуска автомобиля в виде целого 
//	числа. Напишите программу, которая запросит пользователя, сколько автомо­
//	билей необходимо включить в каталог. Затем программа должна применить new 
//	для создания динамического массива структур car указанного пользователем 
//	размера. Далее она должна пригласить пользователя ввести название произво­
//	дителя и год выпуска для наполнения данными каждой структуры в массиве (см. 
//	главу 4 ) . И, наконец, она должна отобразить содержимое каждой структуры. 
//	Пример запуска программы должен выглядеть подобно следующему: 
//		Сколько автомобилей поместить в каталог ? 2 
//		Автомобиль # 1 : 
//		Введите производителя : Hudson Hornet 
//		Укажите год выпуска : 1 952 
//		Автомобиль # 2 : 
//		Введите производителя : Kaiser 
//		Укажите год выпуска : 1951 
//		Вот ваша коллекция : 
//		1952 Hudson Hornet 
//		1951 кaiser 

#include <iostream>
#include <string>

struct car{
    std::string manufacturer;
    int yearOfManufacture;

};

int main(int argc, char ** argv){
    std::cout << "how many cars to put in the catalog? ";
    int cars;
    std::cin >> cars;

    car *arrCars = new car[cars];

    for(int i(0); i< cars; ++i)
    {
        std::cout << "Car # " << i+1 << " :\n";
        std::cout << "Enter manufacturer : ";
        std::cin >> arrCars[i].manufacturer;
        std::cout << "Enter year of manufacture : ";
        std::cin >> arrCars[i].yearOfManufacture;
    }

    std::cout << "Here is your collection:\n";
    for(int i(0); i< cars; ++i)
    {
        std::cout << arrCars[i].yearOfManufacture << " " << arrCars[i].manufacturer<< "\n";
    }
    
    return 0;
}
