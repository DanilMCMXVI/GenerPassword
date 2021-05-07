#include <string>
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    string NUM[10] = { "0","1","2","3","4","5","6","7","8","9" };
    string BigLetters[24] = { "A","B","C","D","E","F","G","I","J","K","L","M","N","O","P","R","S","T","Q","V","W","X","Y","Z" };
    string SmallLetters[24] = { "a","b","c","d","e","f","g","i","j","k","l","m","n","o","p","r","s","t","q","v","w","x","y","z" };
    string Spec[7] = { "!","@","#","%","&","№","?" };
    const int MAX_SIZE = 40;
    string str[MAX_SIZE];
    srand(time(0));
    int Enter, elemMassiv;
    
    do {
        system("cls");// проверка на приемлимость вводимых пользователем значений
        cout << "Введите размер пароля для генерациии от 5 до 40: ";
        cin >> Enter;
    } while (Enter <= 3 || Enter >= MAX_SIZE);


    cout << "Сгенерированный пароль: ";
   
    for (elemMassiv = 0; elemMassiv < Enter; elemMassiv++)//идет присвоение элементам массива str псевдослучайных значений
    {
        int sluchNum = rand() % 4 + 1;
        switch (sluchNum) {
        case(1): str[elemMassiv] = NUM[rand() % 10];
            
            break;
        case(2):str[elemMassiv] = BigLetters[rand() % 24];
            break;
        case(3):str[elemMassiv] = SmallLetters[rand() % 24];
            break;
        case(4):str[elemMassiv] = Spec[rand() % 7];
            break;
        }

        cout <<  str[elemMassiv];

    }
    
   

    cout << endl;
    system("pause");
    return 0;
}
