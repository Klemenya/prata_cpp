//	2. Перепишите код из листинга 5.4 с использованием объекта array вместо встро­
//	енного массива и типа l ong douЫe вместо l ong l ong. Найдите значение 100! 

#include <iostream>
#include <array>
#include <iomanip>

const int ArSize = 100 ;

int main(int argc, char ** argv)
{

    std::array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1;

    for (int i = 2; i < ArSize ; i++){
        factorials[i] = i * factorials[i - 1] ;
    }

//    for ( int i = 0; i < ArSize; i++ )
        std::cout << std::fixed << std::setprecision(0);
        std::cout << "100! = " << factorials[99] << std::endl;
    return 0;
}
