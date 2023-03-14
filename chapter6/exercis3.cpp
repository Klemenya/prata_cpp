//  3. Напишите предшественник программы, управляемой меню. Она должна 
//  отображать меню из четырех пунктов, каждый из них помечен буквой. Если 
//  пользователь вводит букву, отличающуюся от четырех допустимых, программа 
//  должна повторно приглашать его ввести правильное значение до тех пор, пока 
//  он этого не сделает. Затем она должна выполнить некоторое простое действие 
//  на основе пользовательского выбора. Работа программы должна выглядеть при­
//  мерно так: 
//        Please enter оnе of the following choices: 
//        с) carnivore    р) pianist 
//        t) tree         g) game 
//        f 
//        Please enter а с, р, t, or g : q 
//        Please enter а с, р, t, or g : t 
//        А maple is а tree . 

#include <iostream>

int main(int argc, char ** argv){
    std::cout << "Please enter one of the following choices: " << std::endl;
    std::cout << "c) carnivore\t\tp) pianist"<< std::endl;
    std::cout << "t) tree\t\t\tg) game"<< std::endl;
    char myMenu{};
    bool flag = false;
    while(!flag){
        std::cin >> myMenu; 
        switch (myMenu){
            case 'c' :
                std::cout << "A maple is a carnivore.\n";
                ++flag;
                break;
            case 'p' :
                std::cout << "A maple is a pianist.\n";
                ++flag;
                break;
            case 't' :
                std::cout << "A maple is a tree.\n";
                ++flag;
                break;
            case 'g' :
                std::cout << "A maple is a game.\n";
                ++flag;
                break;
            default :
                std::cout << "Please enter a c, p, t, or g :\n";
        }

    }
    return 0;
}