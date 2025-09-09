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

Stress Test (10M tekrar)

2^1000   -> ort. 0.000000009 sn
20!      -> ort. 0.000000011 sn
fib(35)  -> ort. 0.000000021 sn
gcd()    -> ort. 0.000000007 sn
prime()  -> ort. 0.000000086 sn
sqrt()   -> ort. 0.000000018 sn
cbrt()   -> ort. 0.000000025 sn

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
