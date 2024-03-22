#include <stdio.h>
#include <math.h>

// Hàm kiểm tra xem một số có phải là số chính phương hay không
int isPerfectSquare(int n) {
    int squareRoot = sqrt(n);
    return squareRoot * squareRoot == n;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void countAndPrintPerfectSquares(int n) {
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);
    countAndPrintPerfectSquares(n);
    return 0;
}
