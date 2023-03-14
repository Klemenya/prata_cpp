//  4. Когда вы вступите в Благотворительный Орден Программистов (БОП) , к вам 
//    могут обращаться на заседаниях БОП по вашему реальному имени, по должно­-
//    сти либо секретному имени БОП. Напишите программу, которая может выво­-
//    дить списки членов по реальным именам, должностям, секретным именам либо 
//    по предпочтению самого члена. В основу положите следующую структуру: 
//    
//    // Структура имен Благотворительного Ордена Программистов ( БОП) 
//    struct bор { 
//        char fullname [strsize];        // реальное имя 
//        char title [strsize];           // должность 
//        char bopname [strsize];         // секретное имя БОП 
//        int preference ;                // О = полное имя , 1 = титул , 2 = имя БОП 
//    }; 
//
//    В этой программе создайте небольшой массив таких структур и инициализируй­-
//    те его соответствующими значениями. Пусть программа запустит цикл, кото­
//    рый даст возможность пользователю выбирать разные альтернативы: 
//        а . display Ьу name Ь . display Ьу ti tle 
//        с . display Ьу bopname d . display Ьу preference 
//        q . quit 
//    Обратите внимание, что "display Ьу preference" (отображать по предпочтениям) 
//    не означает, что нужно отобразить член preference; это значит, что необходи­-
//    мо отобразить член структуры, который соответствует значению preference. 
//    Например, если preference равно 1, то выбор d должен вызвать отображение 
//    должности данного программиста. Пример запуска этой программы может вы­
//    глядеть следующим образом: 
//        Benevolent Order of Programmers Report 
//        а. display bу name          b. display bу title 
//        с. display Ьу bopname       d. display bу preference 
//        q. quit 
//
//        Enter your choice: а 
//        Wimp Macho 
//        Raki Rhodes 
//        Celia Laiter 
//        Норру Hipman 
//        Pat Hand 
//        Next choice: d 
//        Wimp Macho 
//        Junior Programmer 
//        MIPS 
//        Analyst Trainee 
//        LOOPY 
//        Next choice: q 
//        Вуе! 

#include <iostream>
#include <cstring>

const int strSize = 30;
const int arrSize = 5;

struct bop{
    char fullname [strSize];        // реальное имя 
    char title [strSize];           // должность 
    char bopname [strSize];         // секретное имя БОП 
    int preference ;                // О = полное имя , 1 = титул , 2 = имя БОП 
};


int main(int argc, char ** argv){
    bop *bops = new bop[arrSize];

    bops[0] = {.fullname = "Wimp Macho", .title = "director", .bopname{"boss"},.preference{0} };
    bops[1] = {"Raki Rhodes","Junior Programmer","raki",1};
    bops[2] = {"Celia Laiter","QA ingener","MIPS",2};
    bops[3] = {"Норру Hipman","Analyst Trainee","Hip",1};
    bops[4] = {"Pat Hand","QA","LOOPY",2};

    std::cout << "Benevolent Order of Programmers Report\n";
    std::cout << "а. display bу name\t\t";
    std::cout << "b. display bу title"<< std::endl;
    std::cout << "с. display bу bopname\t\t";
    std::cout << "d. display bу preference"<< std::endl;
    std::cout << "q. quit"<< std::endl;

    char myMenu{};

    while(std::cin >> myMenu && myMenu !='q'){

        switch (myMenu){
            case 'a' :
                for(int i(0);i<arrSize;++i){
                    std::cout << bops[i].fullname << std::endl;
                }
                break;
            case 'b' :
                for(int i(0);i<arrSize;++i){
                    std::cout << bops[i].title << std::endl;
                }
                break;
            case 'c' :
                for(int i(0);i<arrSize;++i){
                    std::cout << bops[i].bopname << std::endl;
                }
                break;
            case 'd' :
                for(int i(0);i<arrSize;++i){
                    //char tempName[30];
                    if(bops[i].preference == 0){
                        std::cout << bops[i].fullname << std::endl;
                    } else if (bops[i].preference == 1){
                        std::cout << bops[i].title << std::endl;
                    } else {
                        std::cout << bops[i].bopname << std::endl;
                    }
                    //std::cout << *tempName << std::endl;
                }
                break;
        }
        std::cout << "Next choice: ";
    }

    return 0;
}
