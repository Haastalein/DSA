#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    std::cout << "enter the number of rows in a matrix : ";
    cin >> m;
    std::cout << endl << "enter the number of columns in a matrix : ";
    cin >> n;
    int arr[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            std::cout << "enter the element of [" << i << "] row and [" << j <<"] column : ";
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            std::cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}