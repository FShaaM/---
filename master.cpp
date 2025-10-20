#include <iostream>

int** create (size_t row, size_t col);

void remove (int** m, size_t row);

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
remove (m, row);

std::cout << row << " " << col; << '\n';


} 


void input (int** m, size_t row, size_t col) {
	for (size_t i = 0; i < row && (std::cin); ++i)
		for (size_t j = 0; j < col && (std::cin); ++j)
			std::cin >> m[i][j];
}

void output (conste int* const * m, size_t row, size_t col) {

	for (size_t i = 0; i < row && (std::cin); ++i)
                for (size_t j = 0; j < col && (std::cin); ++j)
			std::cout << m[i][j];


}


int** create (size_t row, size_t col){

}


void remove (int** m, size_t row){

	for (size_t i = 0; i < row && (std::cin); ++i)
		delete[] m[i];

	delete[] m;

