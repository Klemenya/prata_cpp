//---------------------------------------------------------------------------
//    1. Напишите программу на С++, которая отобразит ваше имя и адрес (можете
//       указать фиктивные данные).
//---------------------------------------------------------------------------


#include <iostream>

int main(){
//    setlocale(LC_ALL, "Russian");
    setlocale(0,"");
    std::cout << "Иванов Иван Иванович" << std::endl;
    std::cout << "г. Барановичи\n";
    std::cout << "ул. Мира\n";
    std::cout << "дом 123 кв.88" << std::endl;
    return 0;
}