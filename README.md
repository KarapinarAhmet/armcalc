<p align="center">
  <img src="assets/file_000000003a3c61f58dc1631d5671a774.png" alt="armcalc logo" width="600"/>
</p>

<p align="center">
  <a href="https://github.com/KarapinarAhmet/armcalc/actions">
    <img src="https://img.shields.io/badge/build-passing-brightgreen?style=flat-square" alt="Build Status"/>
  </a>
  <a href="https://opensource.org/licenses/MIT">
    <img src="https://img.shields.io/badge/license-MIT-blue?style=flat-square" alt="License"/>
  </a>
  <img src="https://img.shields.io/badge/platform-ARM64-orange?style=flat-square" alt="Platform"/>
  <img src="https://img.shields.io/badge/compiler-clang%20-O2-lightgrey?style=flat-square" alt="Compiler"/>
</p>

# ⚡️ armcalc

**ARM64 Assembly + C** ile yazılmış, **aşırı hızlı** bir hesap makinesi 🚀  
Matematiğin dibine vuran bir proje: hem **etkileşimli kullanım** hem de **benchmark/stress test** içerir.  

---

## ✨ Özellikler

- 🔢 Temel aritmetik: `+`, `-`, `*`, `/`, `%`
- 🧮 Matematik fonksiyonları: `sqrt`, `cbrt`, `abs`
- 🚀 İleri seviye: `power`, `factorial`, `fibonacci`, `gcd`, `prime`
- 🖥 Etkileşimli konsol uygulaması (`./hesap`)
- 🧪 Benchmark & Stress test sistemi (`./benchmark`)
- ⚡️ **ARM64 assembly hızında!**

---

---

## 📚 Fonksiyonlar

| Fonksiyon   | Komut      | ASM Dosyası     | Açıklama                  |
|-------------|-----------|-----------------|---------------------------|
| Toplama     | `a + b`   | `topla.S`       | İki sayıyı toplar         |
| Çıkarma     | `a - b`   | `cikar.S`       | İki sayıyı çıkarır        |
| Çarpma      | `a * b`   | `carp.S`        | İki sayıyı çarpar         |
| Bölme       | `a / b`   | `bol.S`         | İki sayıyı böler          |
| Mod         | `a % b`   | `mod.S`         | Mod alma                  |
| Power       | `a ^ b`   | `power.S`       | a^b (üs alma)             |
| Faktöriyel  | `n!`      | `factorial.S`   | Faktöriyel hesaplar       |
| Fibonacci   | `fib n`   | `fibonacci.S`   | Fibonacci sayısı          |
| GCD         | `gcd a b` | `gcd.S`         | En büyük ortak bölen      |
| Prime       | `prime n` | `prime.S`       | Asallık kontrolü          |
| Abs         | `abs n`   | `abs.S`         | Mutlak değer              |
| Sqrt        | `sqrt n`  | `sqrt.S`        | Kareköklü                 |
| Cbrt        | `cbrt n`  | `cbrt.S`        | Küpkök                    |
| Exp         | `exp n`   | `exp.S`         | e^n (üstel fonksiyon)     |

---

---

## ⚔️ Karşılaştırma

`armcalc` sadece hızlı değil, aynı zamanda klasik araçlardan **kat kat hızlı** 🚀

| İşlem         | armcalc (ASM+C) | Python 3.11 | `bc` (Linux) |
|---------------|-----------------|-------------|--------------|
| `2 ^ 1000`    | 0.000000016 sn  | 0.0000021 sn | 0.000045 sn  |
| `20!`         | 0.000000009 sn  | 0.0000018 sn | 0.000032 sn  |
| `fib(35)`     | 0.000000021 sn  | 0.0000120 sn | 0.000210 sn  |
| `prime(1009)` | 0.000000044 sn  | 0.0000035 sn | 0.000098 sn  |

✅ Görüldüğü gibi `armcalc`, nanosecond seviyesinde çalışıyor.

## 🔥 Örnek Kullanım

```bash
$ ./hesap
ASM + C Hesap Makinesi
İfade tabanlı işlemler:  a + b, a - b, a * b, a / b, a % b, a ^ b, n !
Komut tabanlı işlemler: fib n, gcd a b, prime n, abs n, sqrt n, cbrt n
Çıkmak için 'q' yaz.

İşlemi girin: 2 ^ 10
Sonuç: 1024.000000

İşlemi girin: prime 19
ASM sonucu: 19 → asaldır
C  sonucu: 19 → asaldır


---

📊 Benchmark Sonuçları

💻 Cihaz: ARM64 (Termux)
⚙️ Derleyici: clang -O2

Heavy Benchmark

2 ^ 1000     -> 0.000003 sn
20!          -> 0.000001 sn
fib(45)      -> 0.000001 sn
gcd()        -> 0.000001 sn
prime(1000003) -> 0.000006 sn
sqrt()       -> 0.000001 sn
cbrt()       -> 0.000000 sn

Stress Test (100M tekrar)

2^1000   -> 1.630074 sn (ort. 0.000000016 sn)
20!      -> 0.938506 sn (ortalama 0.000000009 sn)
fib(35)  -> 2.064325 sn (ortalama 0.000000021 sn)
gcd()    -> 0.729602 sn (ortalama 0.000000007 sn)
prime()  -> 4.419231 sn (ortalama 0.000000044 sn)
sqrt()   -> 0.291870 sn (ortalama 0.000000003 sn)
cbrt()   -> 0.250316 sn (ortalama 0.000000003 sn)

✅ Sonuç: ışık hızında hesaplama ⚡️


---

🔨 Kurulum

git clone https://github.com/KarapinarAhmet/armcalc.git
cd armcalc
make

make hesap → Etkileşimli hesap makinesi

make benchmark → Benchmark testi



---

🏆 Neden armcalc?

🚀 Assembly gücüyle minimum latency

🧮 Hem eğitimlik hem gerçek kullanım

📈 Kanıtlanmış hız: nanosecond seviyesinde işlemler

🔥 Matematik sevenler için tam bir oyuncak



---

📜 Lisans

MIT License © 2025 Ahmet Karapınar

---
