#include <iostream>

// 計算 n 的階乘
long factorial(int n) {
    long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}


long combination(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int A, B;

    std::cin >> A;
    std::cin >> B;

    long ways = combination(A, B);
    std::cout << ways << std::endl;

    return 0;
}
