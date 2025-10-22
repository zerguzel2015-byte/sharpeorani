# 📈 Sharpe Oranı Hesaplayıcı (C Programı)

Bu basit C programı, finansal piyasalardaki risk/getiri performansını ölçmek için kullanılan en önemli ölçütlerden biri olan **Sharpe Oranını** hesaplar.

Kullanıcıdan Portföy Getirisi, Risksiz Faiz Oranı ve Standart Sapma (Risk) değerlerini alarak, elde edilen fazladan getirinin alınan riske oranını hesaplar ve belirlenen kriterlere göre yorumlar.

## 🌟 Kantitatif Analize Giriş

Bu proje, yatırım kararlarını desteklemek amacıyla veri, matematik ve istatistik kullanan **Kantitatif Analiz (Nicel Analiz)** alanına temel bir giriş niteliğindedir. Sharpe Oranı, kantitatif analistlerin portföy performansını değerlendirmek için kullandığı kritik bir metriktir.

## 🛠️ Nasıl Çalışır?

Program, kullanıcıdan girdiği yüzdelik değerleri (örneğin %15 yerine `15`) alır ve şu temel formülü kullanarak Sharpe Oranını hesaplar:

$$\text{Sharpe Oranı} = \frac{\text{Yatırım Getirisi} - \text{Risksiz Faiz Oranı}}{\text{Standart Sapma}}$$

### Formülün Uygulanışı

Kod içinde, kullanıcıdan alınan yüzdelik değerler öncelikle $100.0$'a bölünerek ondalık formata (`0.15` gibi) dönüştürülür ve hesaplama bu ondalık değerler üzerinden yapılır.

## ⚙️ Gereksinimler

* Herhangi bir C derleyicisi (örneğin: GCC, Clang).

## ▶️ Kullanım

Programı derleyip çalıştı
