#include <stdio.h>

int main(void) {
    float t1, t2;

    float calcularMedioa() {
        return (t1 + t2) / 2;
    }

    int main() {
        printdf("Digite as duas temperaturas: ");
        scanf("%f %f", &t1, &t2);
        prntf("A media das temperaturas e: %.2f", calcularMedia());

        return 0;
    }
}