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

    // ����������� ���������� ���������� �����
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // ��������� ������
    for (int i = 0; i < size; ++i) {
        array[i] = std::rand() % (max_value - min_value + 1) + min_value;
    }

    // ��������� ������������ ������
    std::cout << "����������� �����:\n";
    for (int num : array) {
        std::cout << std::setw(3) << num;  // ��������� � �������������
    }
    std::cout << std::endl;

    // ���� ��� ���������
    int count = 0;
    int total_sum = 0;

    // ����� �������� �� ���������
    for (int i = 0; i < size; ++i) {
        if (array[i] % 2 == 0 && array[i] <= 0) {  // �������: ����, ��� �������
            count++;
            total_sum += array[i];
            array[i] = 0;  // �������� �� 0
        }
    }

    // ��������� ����������
    std::cout << "\nʳ������ ��������, �� ������������� �������: " << count << std::endl;
    std::cout << "���� ��������, �� ������������� �������: " << total_sum << std::endl;

    // ��������� �������������� ������
    std::cout << "\n������������� �����:\n";
    for (int num : array) {
        std::cout << std::setw(3) << num;  // ��������� � �������������
    }
    std::cout << std::endl;

    return 0;
}
