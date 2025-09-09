#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Assembly fonksiyonları
extern long topla(long a, long b);
extern long cikar(long a, long b);
extern long carp(long a, long b);
extern long bol(long a, long b);
extern long mod(long a, long b);
extern long factorial(long n);
extern long fibonacci(long n);
extern long gcd(long a, long b);
extern long prime(long n);
long prime_c(long n);
extern long abs_val(long n);
extern double sqrt_val(long n);
extern double cbrt_val(long n);
extern double power_val(long base, long exp);

long prime_c(long n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (long i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    char input[100];
    long a, b, sonuc;
    char op;

    printf("ASM + C Hesap Makinesi\n");
    printf("Yardım menüsü için 'help' komutunu kullanabilirsiniz\n");
    printf("Çıkmak için 'q' yaz.\n");

    while (1) {
        printf("\nİşlemi girin: ");
        if (!fgets(input, sizeof(input), stdin)) break;

        if (input[0] == 'q' || input[0] == 'Q') {
            printf("Çıkılıyor...\n");
            break;
        }
        // Yardım menüsü
                if (strncmp(input, "help", 4) == 0) {
                    printf("\n=== Komut Listesi ===\n");
                    printf("İfade tabanlı işlemler:\n");
                    printf("  a + b   -> toplama\n");
                    printf("  a - b   -> çıkarma\n");
                    printf("  a * b   -> çarpma\n");
                    printf("  a / b   -> bölme\n");
                    printf("  a %% b   -> mod\n");
                    printf("  a ^ b   -> üs alma (pozitif/negatif)\n");
                    printf("  n !     -> faktöriyel\n");
                    printf("\nKomut tabanlı işlemler:\n");
                    printf("  fib n   -> Fibonacci\n");
                    printf("  gcd a b -> EBOB\n");
                    printf("  prime n -> Asal kontrol\n");
                    printf("  abs n   -> Mutlak değer\n");
                    printf("  sqrt n  -> Kareköke\n");
                    printf("  cbrt n  -> Küpkök\n");
                    printf("\nYardım:\n");
                    printf("  help    -> bu menüyü gösterir\n");
                    printf("  q       -> çıkış\n");
                    printf("=====================\n");
                    continue;
                }

        // 1) İkili matematiksel operatörler (+ - * / % ^) boşluklu yazım (ör: 2 ^ 10)
        if (sscanf(input, "%ld %c %ld", &a, &op, &b) == 3) {
            switch (op) {
                case '+': sonuc = topla(a, b); printf("Sonuç: %ld\n", sonuc); break;
                case '-': sonuc = cikar(a, b); printf("Sonuç: %ld\n", sonuc); break;
                case '*': sonuc = carp(a, b);  printf("Sonuç: %ld\n", sonuc); break;
                case '/':
                    if (b == 0) {
                        printf("Hata: 0'a bölme\n");
                        continue;
                    }
                    sonuc = bol(a, b);
                    printf("Sonuç: %ld\n", sonuc);
                    break;
                case '%': sonuc = mod(a, b); printf("Sonuç: %ld\n", sonuc); break;
                case '^': {
                    if (b > 1000 || b < -1000) {
                        printf("Hata: üs çok büyük, desteklenen aralık -1000 ile 1000\n");
                        continue;
                    }
                    double sonuc_d = power_val(a, b);
                    printf("Sonuç: %.6f\n", sonuc_d);
                    continue;
                }
                default:
                    printf("Bilinmeyen işlem: %c\n", op);
                    continue;
            }
            continue;
        }

        // 2) Boşluksuz üs yazımı (ör: 2^10)
        if (sscanf(input, "%ld^%ld", &a, &b) == 2) {
            double sonuc_d = power_val(a, b);
            printf("Sonuç: %.6f\n", sonuc_d);
            continue;
        }

        // 3) Faktöriyel (n !)
        if (sscanf(input, "%ld !", &a) == 1) {
            sonuc = factorial(a);
            printf("Sonuç: %ld\n", sonuc);
            continue;
        }
        else if (sscanf(input, "prime %ld", &a) == 1) {
            long asm_result = prime(a);     // ASM fonksiyonu
            long c_result   = prime_c(a);   // C fonksiyonu (karşılaştırma)
        
            printf("ASM sonucu: %ld → %s\n", a, asm_result ? "asaldır" : "asal değildir");
            printf("C  sonucu: %ld → %s\n", a, c_result ? "asaldır" : "asal değildir");
            continue;
        }
        
        // 4) Komut tabanlı işlemler
        if (sscanf(input, "fib %ld", &a) == 1) {
            sonuc = fibonacci(a);
            printf("Sonuç: %ld\n", sonuc);
            continue;
        }
        if (sscanf(input, "gcd %ld %ld", &a, &b) == 2) {
            sonuc = gcd(a, b);
            printf("Sonuç: %ld\n", sonuc);
            continue;
        }
        if (sscanf(input, "prime %ld", &a) == 1) {
            sonuc = prime(a);
            if (sonuc == 1)
                printf("%ld asaldır\n", a);
            else
                printf("%ld asal değildir\n", a);
            continue;
        }
        if (sscanf(input, "abs %ld", &a) == 1) {
            sonuc = abs_val(a);
            printf("Sonuç: %ld\n", sonuc);
            continue;
        }
        if (sscanf(input, "sqrt %ld", &a) == 1) {
            double sonuc = sqrt_val(a);
            printf("Sonuç: %.6f\n", sonuc);
            continue;
        }
        if (sscanf(input, "cbrt %ld", &a) == 1) {
            double sonuc = cbrt_val(a);
            printf("Sonuç: %.6f\n", sonuc);
            continue;
        }

        printf("Geçersiz giriş!\n");
    }

    return 0;
}
