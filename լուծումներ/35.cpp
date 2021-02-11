#include <iostream>
#include <cmath>
using namespace std;
    
int main() {
    double matrix[4][4] = {{1.3, -5.0, 4.4, 3.0}, {7.0, 4.0, 2.01, 1.0}, {7.0, 12.3, -8.7, 9.0}, {4.0, 1.0, 33.0, 63.3}};
    
    int rows = sizeof(matrix)/sizeof(matrix[0]);
    int columns = sizeof(matrix[0])/sizeof(matrix[0][0]);
    
    double Vector[rows];
    
    for(int i = 0; i < rows; i++) {
            bool rowHasNegNum = false;
            for(int j = 0; j < columns; j++) {
                if (matrix[i][j] < 0) {
                    rowHasNegNum = true;
                }
            }
            Vector[i] = rowHasNegNum ? matrix[i][0] : matrix[i][columns-1];
    }
    
    cout<<"The matrix passed"<<endl;
    for(int i = 0; i < rows; i++) {
        cout<<"row "<<i+1<<"\t\t";
        for(int j = 0; j < columns; j++) {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl<<"The vector\t\t";
    for(int i=0; i<rows; i++) {
        cout<<Vector[i]<<"\t";
    }
    cout<<endl;
    
    return 0;
}