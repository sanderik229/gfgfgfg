#include <iostream>



int main() {
    const int rows = 3;
    const int cols = 5;
    float numbers[rows][cols];
    float row_sum;
    float row_average;


    for (int i = 0; i < rows; i++) {
        std::cout << "Введите строки " << i + 1 << ":\n";
        for (int j = 0; j < cols; j++) {
            std::cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        row_sum = 0;
        for (int j = 0; j < cols; j++) {
            row_sum += numbers[i][j];
        }
        row_average = row_sum / cols;
        std::cout << "Среднее арифметическое строки " << i + 1 << ": " << row_average << "\n";
    }

    return 0;
}