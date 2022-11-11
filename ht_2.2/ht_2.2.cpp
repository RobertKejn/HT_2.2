#include <iostream>
#include <string>

struct User
{
    long long AccountNumber = 0;
    std::string Name = "";
    double Balance = 0;
};

void ChangeBalance(User& user, double newBalance) {
    user.Balance = newBalance;
}

void ViewAccout(User& user) {
    std::cout << "Ваш счёт : " << user.Name << ", " << user.AccountNumber << ", " << user.Balance << "\n";
}

int main()
{
    std::setlocale(LC_ALL, "Russian");
    User user;
    double newBalance = 0;
    std::cout << "Введите номер счета : ";
    std::cin >> user.AccountNumber;
    std::cout << "Введите имя владельца : ";
    std::cin >> user.Name;
    std::cout << "Введите баланс : ";
    std::cin >> user.Balance;
    std::cout << "Введите новый баланс : ";
    std::cin >> newBalance;
    ChangeBalance(user, newBalance);
    ViewAccout(user);
}
