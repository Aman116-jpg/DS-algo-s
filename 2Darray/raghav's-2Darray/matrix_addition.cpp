#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void addMatrices(int firstMatrix[MAX_ROWS][MAX_COLS], int secondMatrix[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows and columns for matrices: ";
    std::cin >> rows >> cols;

    int firstMatrix[MAX_ROWS][MAX_COLS], secondMatrix[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];

    std::cout << "Enter elements of the first matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            std::cin >> firstMatrix[i][j];
        }
    }

    std::cout << "Enter elements of the second matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            std::cin >> secondMatrix[i][j];
        }
    }

    addMatrices(firstMatrix, secondMatrix, result, rows, cols);

    std::cout << "Resultant Matrix after addition:" << std::endl;
    displayMatrix(result, rows, cols);

    return 0;
}
