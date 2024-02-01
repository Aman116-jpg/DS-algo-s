#include<iostream>
using namespace std;



int main(){
       // print multiplication of two matrix
   
    //const  int MAX_SIZE = 100;  // Maximum size for static arrays
    
    
       // max size isliye dere hai kyuki yaha par size bhi input leni hai
    
//  int matrix1[MAX_SIZE][MAX_SIZE];
//     int matrix2[MAX_SIZE][MAX_SIZE];
//     int result[MAX_SIZE][MAX_SIZE];
    

    int row1, col1, row2, col2;


      // Input dimensions of the first matrix
    cout << "Enter the number of rows and columns for the first matrix:" << endl;
    cin >> row1 >> col1;
    


     // Input dimensions of the second matrix
    cout << "Enter the number of rows and columns for the second matrix:" << endl;
    cin >> row2 >> col2;


int matrix1[row1][col1];
    int matrix2[row2][col2];
    int result[100][100];

     if (col1 != row2) {
        cout << "Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 1;
    }


    // Input elements of the first matrix
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> matrix1[i][j];
        }
        cout<<endl;
    }


     // Input elements of the second matrix
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> matrix2[i][j];
        }
        cout<<endl;
    }


        // Perform matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }


     // Print the result
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;

    }
    return 0;

       
}