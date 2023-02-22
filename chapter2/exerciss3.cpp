// 3. Напишите программу на С++, которая использует три определяемых пользователем
//        функции (включая main () ) и генерирует следующий вывод:
//
//                Three blind mice
//                Three blind mice
//                See how they run
//                See how they run
//        Одна функция, вызываемая два раза, должна генерировать первые две
//        строки, а другая, также вызываемая два раза - оставшиеся строки.

#include <iostream>

void printOneStr();
void printTwoStr();


int main(int argc, char **argv){
    printOneStr();
    printOneStr();
    printTwoStr();
    printTwoStr();
    return 0;
}

void printOneStr(){
    std::cout  << "Ther blind mice" << std::endl;
    return;
}

void printTwoStr(){
    std::cout << "See how they run" << std::endl;
    return;
}
