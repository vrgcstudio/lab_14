#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double sum_1 = 0;
    for(int i = 0; i < N; i++){
        sum_1 += A[i];
    }
    B[0] = sum_1 / N;

    double sum_2 = 0;
    for(int i = 0; i < N; i++){
        sum_2 += pow(A[i] - B[0], 2);
    }
    B[1] = sqrt(sum_2 / N);

    double sum_3 = 1;
    for(int i = 0; i < N; i++){
        sum_3 = sum_3 * A[i];
    }
    B[2] = pow(sum_3, pow(N,-1));

    double sum_4 = 0;
    for(int i = 0; i < N; i++){
        sum_4 +=  pow(A[i],-1);
    }
    B[3] = N / sum_4;

    double max = 0;
    for(int i = 0; i < N; i++){
        if (max < A[i]){
            max = A[i];
        }
    }
    B[4] = max;

    double min = max;
    for(int i = 0; i < N; i++){
        if (min > A[i]){
            min = A[i];
        }
    }
    B[5] = min;
}


