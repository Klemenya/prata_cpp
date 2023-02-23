// 6. Напишите программу, в которой функция main() вызывает определяемую
//        пользователем функцию, принимающую в качестве аргумента расстояние в
//        световых годах и возвращающую расстояние в астрономических единицах.
//        Программа должна выдать запрос на ввод значения в световых годах и
//        отобразить следующий результат:
//                Enter the number of light years : 4.2
//                4.2 light years = 265608 astronomical units.
//        Астрономическая единица равна среднему расстоянию Земли от Солнца
//        (около 150 000 000 км, или 93 000 000 миль) , а световой год
//        соответствует расстоянию, пройденному лучом света за один земной год
//        (примерно 10 триллионов километров, или 6 триллионов миль) .
//        (Ближайшая звезда после Солнца находится на расстоянии 4,2 световых
//        года.) Используйте тип douЬle (как в листинге 2.4) и следующий
//        коэффициент преобразования:
//        1 световой год = 63 240 астртюмических единиц

#include <iostream>

double  yearsToAstronomicalUnits(double);


int main(int argc, char** argv){
    std::cout << "Enter the number of light years: ";
    double years;
    std::cin >> years;
    std::cout << years << " light years = " << yearsToAstronomicalUnits(years);
    std::cout << " astronomical units." << std::endl;
    return 0;
}

double  yearsToAstronomicalUnits(double years){
    return (years * 63240);
}
