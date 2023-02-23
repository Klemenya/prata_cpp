//---------------------------------------------------------------------------
// 1.	Напишите короткую программу, которая запрашивает рост в дюймах и преоб­
//	разует их в футы и дюймы. Программа должна использовать символ подчерки­
//	вания для обозначения позиции, где будет производиться ввод. Для представле­
//	ния коэффициента преобразования используйте символьную константу const.


#include <iostream>


const int inchInFoot{12};

void  printFootFromInch(int);

int main(int argc, char **argv){
    int inch;
    std::cout << "Enter height in inches:___\b\b";
    std::cin >> inch;
    printFootFromInch(inch);
    return 0;
}

void printFootFromInch(int inch){
    std::cout <<  inch/inchInFoot << " foots " << inch%inchInFoot << " inch" << std::endl;
}
