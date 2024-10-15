// Lab 6.1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main() {
    const int size = 24;
    const int min_value = -15;
    const int max_value = 75;
    std::vector<int> array(size);

    // Ініціалізація генератора випадкових чисел
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Генерація масиву
    for (int i = 0; i < size; ++i) {
        array[i] = std::rand() % (max_value - min_value + 1) + min_value;
    }

    // Виведення оригінального масиву
    std::cout << "Оригінальний масив:\n";
    for (int num : array) {
        std::cout << std::setw(3) << num;  // Виведення з форматуванням
    }
    std::cout << std::endl;

    // Змінні для підрахунку
    int count = 0;
    int total_sum = 0;

    // Заміна елементів та підрахунок
    for (int i = 0; i < size; ++i) {
        if (array[i] % 2 == 0 && array[i] <= 0) {  // Критерій: парні, крім додатніх
            count++;
            total_sum += array[i];
            array[i] = 0;  // Замінюємо на 0
        }
    }

    // Виведення результатів
    std::cout << "\nКількість елементів, що задовольняють критерію: " << count << std::endl;
    std::cout << "Сума елементів, що задовольняють критерію: " << total_sum << std::endl;

    // Виведення модифікованого масиву
    std::cout << "\nМодифікований масив:\n";
    for (int num : array) {
        std::cout << std::setw(3) << num;  // Виведення з форматуванням
    }
    std::cout << std::endl;

    return 0;
}
