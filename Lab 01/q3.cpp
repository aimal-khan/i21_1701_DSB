#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

// Function prototypes
void inputMatrix(int A[][MAX_SIZE], int m, int n);
void displayMatrix(int A[][MAX_SIZE], int m, int n);
int sumOfElements(int A[][MAX_SIZE], int m, int n);
void displayRowSum(int A[][MAX_SIZE], int m, int n);
void displayColumnSum(int A[][MAX_SIZE], int m, int n);
void transposeMatrix(int A[][MAX_SIZE], int m, int n);

int main() {
    int m, n;
    int A[MAX_SIZE][MAX_SIZE];

    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    int choice;
    do {
        cout << "\nMatrix Operations Menu:\n";
        cout << "1. Input elements into the matrix\n";
        cout << "2. Display elements of the matrix\n";
        cout << "3. Sum of all elements of the matrix\n";
        cout << "4. Display row-wise sum of the matrix\n";
        cout << "5. Display column-wise sum of the matrix\n";
        cout << "6. Create transpose of the matrix\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputMatrix(A, m, n);
                break;
            case 2:
                displayMatrix(A, m, n);
                break;
            case 3:
                cout << "Sum of all elements of the matrix: " << sumOfElements(A, m, n) << endl;
                break;
            case 4:
                displayRowSum(A, m, n);
                break;
            case 5:
                displayColumnSum(A, m, n);
                break;
            case 6:
                transposeMatrix(A, m, n);
                break;
            case 7:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 7);

    return 0;
}

void inputMatrix(int A[][MAX_SIZE], int m, int n) {
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> A[i][j];
        }
    }
}

void displayMatrix(int A[][MAX_SIZE], int m, int n) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int sumOfElements(int A[][MAX_SIZE], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

void displayRowSum(int A[][MAX_SIZE], int m, int n) {
    cout << "Row-wise sum of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += A[i][j];
        }
        cout << "Sum of elements in row " << i << ": " << rowSum << endl;
    }
}

void displayColumnSum(int A[][MAX_SIZE], int m, int n) {
    cout << "Column-wise sum of the matrix:\n";
    for (int j = 0; j < n; ++j) {
        int columnSum = 0;
        for (int i = 0; i < m; ++i) {
            columnSum += A[i][j];
        }
        cout << "Sum of elements in column " << j << ": " << columnSum << endl;
    }
}

void transposeMatrix(int A[][MAX_SIZE], int m, int n) {
    int transpose[MAX_SIZE][MAX_SIZE];
    cout << "Transpose of the matrix:\n";
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            transpose[j][i] = A[i][j];
        }
    }
    displayMatrix(transpose, n, m);
}
