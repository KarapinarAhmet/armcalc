# 🧮 ASM + C Hybrid Calculator (ARM64)

Bu proje, **ARM64 Assembly** ve **C dilini** birleştirerek yapılmış hibrit bir hesap makinesidir.  
Hızlı matematiksel işlemler + düşük seviye performans + kolay kullanım bir arada 🚀

---

## ✨ Özellikler

- **Temel işlemler**: `+`, `-`, `*`, `/`, `%`
- **Üs alma**: `a ^ b`
- **Faktöriyel**: `n!`
- **Fibonacci**: `fib n`
- **EBOB (GCD)**: `gcd a b`
- **Asal kontrolü**: `prime n` (ASM + C karşılaştırmalı)
- **Mutlak değer**: `abs n`
- **Karekök**: `sqrt n`
- **Küp kök**: `cbrt n`
- **Yardım**: `help`
- **Çıkış**: `q`

---

## ⚡ Benchmark Sonuçları

### Heavy Benchmark
2 ^ 1000 = 1071508607186....068069376 ⏱ Süre: 0.000003 sn

20! = 2432902008176640000 ⏱ Süre: 0.000001 sn

fib(45) = 1134903170 ⏱ Süre: 0.000001 sn

gcd(987654321, 123456789) = 9 ⏱ Süre: 0.000001 sn

prime(1000003) = asaldır ⏱ Süre: 0.000006 sn

sqrt(999999999) = 15625021.296869 ⏱ Süre: 0.000001 sn

cbrt(999999999) = 43895747.555556 ⏱ Süre: 0.000000 sn

### Stress Test (10.000.000 tekrar)
2^1000 -> 10000000 tekrar: 0.086565 sn (ortalama 0.000000009 sn)
20!    -> 10000000 tekrar: 0.114228 sn (ortalama 0.000000011 sn) 
fib(35)-> 10000000 tekrar: 0.205780 sn (ortalama 0.000000021 sn) 
gcd()  -> 10000000 tekrar: 0.072957 sn (ortalama 0.000000007 sn) 
prime()-> 10000000 tekrar: 0.862975 sn (ortalama 0.000000086 sn) 
sqrt() -> 10000000 tekrar: 0.179270 sn (ortalama 0.000000018 sn) 
cbrt() -> 10000000 tekrar: 0.245171 sn (ortalama 0.000000025 sn)

---

## 🛠 Derleme ve Çalıştırma

```bash
# Derleme
make

# Çalıştırma
./hesap       # Etkileşimli hesap makinesi
./benchmark   # Benchmark & Stress Test


---

📂 Proje Dosyaları

main.c → Ana C programı

benchmark.c → Benchmark & stress test

*.S → Assembly fonksiyonları (topla, cikar, carp, bol, mod, power, factorial, fibonacci, gcd, prime, abs, sqrt, cbrt)

Makefile → Derleme kuralları



---

📸 Örnek Kullanım

İşlemi girin: 2 ^ 10
Sonuç: 1024.000000

İşlemi girin: 20!
Sonuç: 2432902008176640000

İşlemi girin: prime 19
ASM sonucu: 19 → asaldır
C  sonucu: 19 → asaldır


---

🔥 Neden Bu Proje?

ARM64 Assembly pratiği

C + ASM entegrasyonu

Performans odaklı matematiksel işlemler

Benchmark ve stress test ile gerçek hız ölçümü



---

---

📄 .gitignore

# Derleme çıktıları
*.o
hesap
benchmark

# Geçici dosyalar
*.swp
*.log
*.tmp

# Mac / Linux
.DS_Store


---

📄 scripts/run.sh

#!/usr/bin/env bash
# armcalc ana programı derleyip çalıştırır

set -e
make hesap
./hesap

---

📄 scripts/bench.sh

#!/usr/bin/env bash
# armcalc benchmark programını derleyip çalıştırır

set -e
make benchmark
./benchmark

⚡ unutma:

chmod +x scripts/*.sh


---

📜 Lisans

MIT License 📝

---
