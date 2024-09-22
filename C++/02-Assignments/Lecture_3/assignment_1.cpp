#include <iostream>

using namespace std;

void printMatrix(int** matrix, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter dimentions of matrix A: ";
    cin >> rows1 >> cols1;

    cout << "Enter dimentions of matrix B: ";
    cin >> rows2 >> cols2;

    if ((rows1 != cols2) || (cols1 != rows2)) {
        cout << "Matrix multiplication not possible";
        return 0;
    }
    else
    {
        int** matrix1 = new int*[rows1] ;
        for(int i = 0; i < rows1; i++) {
            matrix1[i] = new int[cols1];
        }

        int** matrix2 = new int*[rows2];
        for(int i = 0; i < rows2; i++) {
            matrix2[i] = new int[cols2];
        }

        int i, j, k;
        cout << "Enter elements of matrix A: ";
        for(i = 0; i < rows1; i++) {
            for(j = 0; j < cols1; j++) {
                cin >> matrix1[i][j];
            }
        }

        cout << "Enter elements of second B: ";
        for(i = 0; i < rows2; i++) {
            for(j = 0; j < cols2; j++) {
                cin >> matrix2[i][j];
            }
        }

        int** result = new int*[rows1];
        for(i = 0; i < rows1; i++) {
            result[i] = new int[cols2];
        }

        for(i = 0; i < rows1; i++) {
            for(j = 0; j < cols2; j++) {
                result[i][j] = 0;
                for(k = 0; k < cols1; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        cout << "Result of matrix mutiplication:\n";
        printMatrix(result, rows1, cols2);
        
        for(i = 0; i < rows1; i++) {
            delete[] matrix1[i]; 
        }
        delete[] matrix1;

        for(i = 0; i < rows2; i++) {
            delete[] matrix2[i]; 
        }
        delete[] matrix2;

        for(i = 0; i < rows1; i++) {
            delete[] result[i]; 
        }
        delete[] result;

    }        
    return 0;
}