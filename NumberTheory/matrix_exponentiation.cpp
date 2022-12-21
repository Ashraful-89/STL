#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 101

ll power_matrix [N][N];
ll Identity_matrix[N][N];
ll A[N][N];
void mul(ll A[N][N] , ll B[N][N],ll dim) {
    for(int i = 0 ; i < dim; i++) {
        for(int j = 0; j < dim ; j++) {
            int temp = 0;
            for(int k = 0; k < dim; k++) {
                temp = temp + A[i][k] * B[k][j];
            }
            A[i][j] = temp;
        }
    }
}
void matrix_exponentiation(ll A[N][N] , ll dim , ll p){
    for(int i = 0 ; i  < dim ;i++) {
        for(int j = 0; j < dim; j++) {
            if(i == j) {
                Identity_matrix[i][j] = 1;
            }
            else {
                Identity_matrix[i][j] = 0;
            }
        }
    }
    while(p) {
        if(p % 2 == 1) {
            mul(Identity_matrix,A,dim);
        }
        else {
            mul(A,A,dim);
        }
    }
}
int main() {
    ll dim , p;
    cout << "Enter the dimension and power of the matrix exponentiation :"; cin >> dim >> p;
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            cin >> A[i][j];
        }
    }
    matrix_exponentiation(A,dim,p);
    cout << "Print the matrix : \n";
    for(int i = 0; i < dim; i++) {
        for(int j = 0 ; j < dim; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}