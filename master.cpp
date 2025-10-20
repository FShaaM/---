#include <iostream>

int** create (size_t row, size_t col);

void remove (int** m, size_t row, size_t col);

void input (int** m, size_t row, size_t col);

void output (conste int* const * m, size_t row, size_t col);

int main {

size_t row = 0, row = 0;

std::cin >> row >> col;

if (!std::cin)
	return 1;

int** m = create (row, col);
input (m, row, col);

if (!std::cin) {
	remove (row, col);
	remove 1;
}

output (m, row, col);

std::cout << row << " " << col; << '\n';


} 
