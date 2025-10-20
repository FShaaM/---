#include <iostream>

int** create(size_t row, size_t col);

void remove(int** m, size_t row);

void input(int** m, size_t row, size_t col);

void output(const int* const* m, size_t row, size_t col);

int main () {

size_t row = 0, col = 0;

std::cin >> row >> col;

if (!std::cin)
        return 1;

int** m = create(row, col);

input(m, row, col);

if (!std::cin) {
        remove(m, row);
        return 1;
}

output(m, row, col);

remove(m, row);

std::cout << '\n' << row << " " << col << '\n';


}


void input(int** m, size_t row, size_t col) {
    for (size_t i = 0; i < row && (std::cin); ++i)
        for (size_t j = 0; j < col && (std::cin); ++j)
            std::cin >> m[i][j];
}

void output(const int* const* m, size_t row, size_t col) {

    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j)
            std::cout << m[i][j] << " ";
    std::cout << '\n';
    }

}

int** create(size_t row, size_t col) {

    int** result = new int* [row];

    size_t i = 0;

    try {

        for ( ; i < row; ++i) {

            result[i] = new int[col];
        }
    }
    catch (...) {

            remove(result, i);
            throw;
    }

        return result;
}



void remove(int** m, size_t row) {

    for (size_t i = 0; i < row; ++i)
        delete[] m[i];

    delete[] m;

}
