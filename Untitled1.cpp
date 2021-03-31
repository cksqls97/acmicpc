#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;
double min(double a, double b) {
    if (a >= b) return b;
    else return a;
}
double COMPUTE_SMALLEST_H(double x) {
    double temp1 = numeric_limits<double>::max();
    double temp2 = numeric_limits<double>::max();
    if (x - 34 > 0) {
        temp1 = COMPUTE_SMALLEST_H(x - 34);
    }
    if ((x - 11) / 2 > 0) { 
        temp2 = COMPUTE_SMALLEST_H((x - 11) / 2); 
    }
    return min(min(temp1, temp2), x);
}

int main() {
    double n;
    std::cin >> n;
    std::cout << "작은 나무 : " << COMPUTE_SMALLEST_H(n);
}
