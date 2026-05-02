#include <iostream>

void Get_cash(int &b) {
    int get_c;
    std::cout << "Сколько вы хотите снять? ";
    std::cin >> get_c;
    int get_temp = b - get_c;

    if(get_temp >= 0) {
        b -= get_c;
    std::cout << "Снято с баланса " << get_c << std::endl;
    }
    else {
        std::cout << "Недостаточно средств " << std::endl;
    }
}

void deposit(int &b) {
    int dep;
    std::cout << "Сколько внести? ";
    std::cin >> dep;

    b += dep;
    std::cout << "Баланс пополнен на " << dep << std::endl;
}

int main() {
    int balance = 0;
    int menu = 0;
    
    while (menu != 4) {
        std::cout << "\n1.Баланс\n2.Снять\n3.Внести\n4.Выход\n";
        std::cin >> menu;

        switch (menu) {
        case 1:
            std::cout << "Текущий баланс: " << balance << std::endl;
            break;
        case 2:
            Get_cash(balance);
            break;
        case 3:
            deposit(balance);
            break;
        case 4:
            break;
        default:
                std::cout << "Такой функции не существует" << std::endl;
        }
    }
    return 0;
}