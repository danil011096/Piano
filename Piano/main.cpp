#include <Windows.h>
#include <iostream>

// Функция отображения клавиш фортепиано
void piano_keys(char keyA, char keyS, char keyD, char keyF, char keyG, char keyH, char keyJ)
{
    // Отображение клавиш фортепиано в консоли
    std::cout << "  +---+ +---+  +---+  +---+  +---+  +---+  +---+" << std::endl;
    std::cout << "  |   | |   |  |   |  |   |  |   |  |   |  |   |" << std::endl;
    std::cout << "  | " << keyA << " | | " << keyS << " |  | " << keyD << " |  | " << keyF << " |  | " << keyG << " |  | " << keyH << " |  | " << keyH << " |" << std::endl;
    std::cout << "  |   | |   |  |   |  |   |  |   |  |   |  |   |" << std::endl;
    std::cout << "  +---+ +---+  +---+  +---+  +---+  +---+  +---+" << std::endl;
}

int main()
{
    // Определение частот звуков клавиш
    const int frequencyA = 261;
    const int frequencyS = 294;
    const int frequencyD = 329;
    const int frequencyF = 349;
    const int frequencyG = 391;
    const int frequencyH = 440;
    const int frequencyJ = 493;

    // Определение символов клавиш
    char keyA = 'A';
    char keyS = 'S';
    char keyD = 'D';
    char keyF = 'F';
    char keyG = 'G';
    char keyH = 'H';
    char keyJ = 'J';

    // Отображение клавиш в консоли
    piano_keys(keyA, keyS, keyD, keyF, keyG, keyH, keyJ);

    return 0;
}
