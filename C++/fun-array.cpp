// sumaCerv.cpp // Funciones y arrays
#include <iostream>
using namespace std;
const int gente = 8;
int sum_Cerv (int arr[], int n);
int main() {
    int latas[gente] {1, 2, 4, 8, 16, 32, 64, 128};
    int suma = sum_Cerv(latas, gente);
    cout << "Total latas: " << suma << endl;
    return 0;
}

int sum_Cerv (int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) total += arr[i];
    return total;
}
