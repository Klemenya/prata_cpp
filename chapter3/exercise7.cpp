//	7.Напишите программу, которая запрашивает расход бензина в европейском
//        стиле (количество литров на 100 км) и преобразует его в стиль, принятый в
//        США - число миль на галлон. Обратите внимание, что кроме использования
//        других единиц измерений, принятый в США подход (расстояние/топливо)
//        противоположен европейскому (топливо/расстояние). Учтите, что 100 кило­
//        метров соответствуют 62.14 милям, а 1 галлон составляет 3.875 литра. Таким
//        образом, 19 миль на галлон примерно равно 12.4 литров на 100 км, а 27 миль на
//        галлон - примерно 8.7 литров на 100 км.

#include <iostream>

int main(int argc, char ** argv){
    const float gallon = 3.875;
    const float myle = 62.14;
    float euroStyle;
    int americanStyle;
    std::cout << "Enter European-style fuel consumption: ";
    std::cin >> euroStyle;
    americanStyle = static_cast<int>(myle / (euroStyle / gallon));
    std::cout << "American-style fuel consumption = " << americanStyle << std::endl;;
    return 0;
}
