//    2. Напишите программу на С++, которая выдает запрос на ввод расстояния в
//       фарлонгах и преобразует его в ярды (Один фарлонг равен 220 ярдам, или
//       201 168 м.)

#include <iostream>

int main(int argc, char* argv[]){
    const int yardsInFurlong = 220;
    std::cout << "Please enter the distance in furlongs: " << std::endl;
    int furlongs;
    std::cin >> furlongs;
    int yards = furlongs * yardsInFurlong;
    std::cout << "In " << furlongs <<  " furlongs there is " << yards << " yards";

    return 0;
}
