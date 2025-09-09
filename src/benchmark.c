#include <stdio.h>
#include <time.h>
#include <math.h>

// Assembly fonksiyonları
extern long factorial(long n);
extern long fibonacci(long n);
extern long gcd(long a, long b);
extern long prime(long n);
extern double sqrt_val(long n);
extern double cbrt_val(long n);
extern double power_val(long base, long exp);

double elapsed(clock_t start, clock_t end) {
    return (double)(end - start) / CLOCKS_PER_SEC;
}

int main() {
    printf("🔥 HEAVY BENCHMARK BAŞLIYOR 🔥\n\n");

    clock_t start, end;

    // 1) Power
    start = clock();
    double p = power_val(2, 1000);
    end = clock();
    printf("2 ^ 1000 = %.0f\n", p);
    printf("⏱ Süre: %.6f sn\n\n", elapsed(start, end));

    // 2) Factorial
    start = clock();
    long f = factorial(20);
    end = clock();
    printf("20! = %ld\n", f);
    printf("⏱ Süre: %.6f sn\n\n", elapsed(start, end));

    // 3) Fibonacci
    start = clock();
    long fib = fibonacci(45);
    end = clock();
    printf("fib(45) = %ld\n", fib);
    printf("⏱ Süre: %.6f sn\n\n", elapsed(start, end));

    // 4) GCD
    start = clock();
    long g = gcd(987654321, 123456789);
    end = clock();
    printf("gcd(987654321, 123456789) = %ld\n", g);
    printf("⏱ Süre: %.6f sn\n\n", elapsed(start, end));

    // 5) Prime
    start = clock();
    long pr = prime(1000003);
    end = clock();
    printf("prime(1000003) = %s\n", pr ? "asaldır" : "asal değildir");
    printf("⏱ Süre: %.6f sn\n\n", elapsed(start, end));

    // 6) Sqrt
    start = clock();
    double sq = sqrt_val(999999999);
    end = clock();
    printf("sqrt(999999999) = %.6f\n", sq);
    printf("⏱ Süre: %.6f sn\n\n", elapsed(start, end));

    // 7) Cbrt
    start = clock();
    double cb = cbrt_val(999999999);
    end = clock();
    printf("cbrt(999999999) = %.6f\n", cb);
    printf("⏱ Süre: %.6f sn\n\n", elapsed(start, end));

    printf("✅ Heavy Benchmark tamamlandı!\n\n");

    // -------------------------------
    // STRESS TEST (looplu)
    // -------------------------------
    const int REPEATS = 100000;   // 🔥 buradan sayıyı değiştirebilirsin
    printf("🔥 STRESS TEST BAŞLIYOR (%d tekrar) 🔥\n", REPEATS);

    // Power
    start = clock();
    for (int i = 0; i < REPEATS; i++) power_val(2, 1000);
    end = clock();
    printf("⏱ 2^1000 -> %d tekrar: %.6f sn (ortalama %.9f sn)\n",
           REPEATS, elapsed(start, end), elapsed(start, end)/REPEATS);

    // Factorial
    start = clock();
    for (int i = 0; i < REPEATS; i++) factorial(20);
    end = clock();
    printf("⏱ 20! -> %d tekrar: %.6f sn (ortalama %.9f sn)\n",
           REPEATS, elapsed(start, end), elapsed(start, end)/REPEATS);

    // Fibonacci
    start = clock();
    for (int i = 0; i < REPEATS; i++) fibonacci(35);
    end = clock();
    printf("⏱ fib(35) -> %d tekrar: %.6f sn (ortalama %.9f sn)\n",
           REPEATS, elapsed(start, end), elapsed(start, end)/REPEATS);

    // GCD
    start = clock();
    for (int i = 0; i < REPEATS; i++) gcd(987654321, 123456789);
    end = clock();
    printf("⏱ gcd() -> %d tekrar: %.6f sn (ortalama %.9f sn)\n",
           REPEATS, elapsed(start, end), elapsed(start, end)/REPEATS);

    // Prime
    start = clock();
    for (int i = 0; i < REPEATS; i++) prime(1009); // küçük asal seçtik hız için
    end = clock();
    printf("⏱ prime() -> %d tekrar: %.6f sn (ortalama %.9f sn)\n",
           REPEATS, elapsed(start, end), elapsed(start, end)/REPEATS);

    // Sqrt
    start = clock();
    for (int i = 0; i < REPEATS; i++) sqrt_val(999999);
    end = clock();
    printf("⏱ sqrt() -> %d tekrar: %.6f sn (ortalama %.9f sn)\n",
           REPEATS, elapsed(start, end), elapsed(start, end)/REPEATS);

    // Cbrt
    start = clock();
    for (int i = 0; i < REPEATS; i++) cbrt_val(999999);
    end = clock();
    printf("⏱ cbrt() -> %d tekrar: %.6f sn (ortalama %.9f sn)\n",
           REPEATS, elapsed(start, end), elapsed(start, end)/REPEATS);

    printf("✅ Stress Test tamamlandı!\n");

    return 0;
}
