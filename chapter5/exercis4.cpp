//	4 . Дафна инвестировала $ 100 под простые 10% . Другими словами, ежегодно инве­
//	стиция должна приносить 10% инвестированной суммы, т.е. $ 10 каждый год:
//	прибыль = 0,10 х исходный баланс
//	В то же время Клео инвестировала $100 под сложные 5%. Это значит, что прибыль
//	составит 5% от текущего баланса, включая предыдущую накопленную прибьmь:
//	прибыль = 0,05 х текущий баланс
//	Клео зарабатывает 5% от $ 100 в первый год, что дает ей $ 105. На следующий
//	год она зарабатывает 5% от $105, что составляет $5.25, и т.д. Напишите про­
//	грамму, которая вычислит, сколько лет понадобится для того, чтобы сумма ба­
//	ланса Клео превысила сумму баланса Дафны, с отображением значений обоих
//	балансов за каждый год.

#include <iostream>

int main(int argc, char **argv){
    double dafnasBalance ,dafnasBalanceStart;
    dafnasBalance = dafnasBalanceStart = 100;
    double kleoBalance, kleoBalanceStart;
    kleoBalance = kleoBalanceStart = 100;
    int year(1);
    for(; kleoBalance <= dafnasBalance; ++year){
        dafnasBalance += (dafnasBalanceStart*0.1);
        kleoBalance += kleoBalance*0.05;
        std::cout << "Year " << year <<
                     " - Dafna`s balance: " << dafnasBalance <<
                     "\t Kleo`s balance: " << kleoBalance << std::endl;
    }
//    std::cout << year;

    return 0;
}
