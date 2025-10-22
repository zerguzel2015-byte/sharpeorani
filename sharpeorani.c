#include <stdio.h>

// Sharpe Oranı Hesaplama Fonksiyonu
void sharpe_orani_hesapla() {
    // Değişken tanımlamaları (Ondalık hassasiyet için 'double' kullanıldı)
    double yatirim_getirisi, risksiz_faiz_orani, standart_sapma, sharpe_orani;
    
    printf("--- Sharpe Orani Hesaplayicisina Hos Geldiniz ---\n");
    
    //  Yatırım Getirisi bilgisini al
    printf("Yatirimin Yuzde Getirisini giriniz (or: 15): ");
    // Kullanıcıdan girdiyi alıyoruz
    if (scanf("%lf", &yatirim_getirisi) != 1) {
        printf("Hatali giris.\n");
        return;
    }

    //  Risksiz Faiz Oranı bilgisini al
    printf("Risksiz Faiz Oranini giriniz (ör: 5): ");
    if (scanf("%lf", &risksiz_faiz_orani) != 1) {
        printf("Hatali giris.\n");
        return;
    }
    
    //  Standart Sapma (Risk) bilgisini al
    printf("Portfoyun Standart Sapmasini (Riskini) giriniz (ör: 12): ");
    if (scanf("%lf", &standart_sapma) != 1) {
        printf("Hatali giris.\n");
        return;
    }
    
    // Standart sapmanın sıfır olup olmadığını kontrol et (Sıfıra bölme hatasını önlemek için)
    if (standart_sapma == 0) {
        printf("\nHata: Standart Sapma sifir olamaz. Sharpe Orani hesaplanamiyor.\n");
        return;
    }

    // FORMÜL: Sharpe Oranı = (Yatırım Getirisi - Risksiz Faiz Oranı) / Standart Sapma
    // NOT: Tüm girdiler yüzdelik olduğu için (örn: 15), hesaplama öncesinde 100.0'a bölerek ondalık değere çeviriyoruz.
    sharpe_orani = ((yatirim_getirisi / 100.0) - (risksiz_faiz_orani / 100.0)) / (standart_sapma / 100.0);
    
    printf("\n------------------------------------------------------\n");
    // Sonucu ekrana yaz
    printf("Hesaplanan Sharpe Orani: %.4f\n", sharpe_orani);
    
    // Sharpe Oranı yorumlama 
    printf("Sharpe Orani Yorumu: ");
    
    if (sharpe_orani > 3.0) {
        printf("MUKEMMEL - Alinan risk basina cok yuksek getiri ** MUKEMMEL ** \n"); // > 3 mükemmel
    } else if (sharpe_orani > 2.0) {
        printf("COK İYİ - Alinan risk basina yuksek getiri ** COK IYI ** \n"); // > 2 çok iyi
    } else if (sharpe_orani > 1.0) {
        printf("İYİ - Alinan risk basina kabul edilebilir getiri ** IYI ** \n"); // > 1 iyi
    } else {
        printf("DUSUK/KABUL EDİLEMEZ - Alinan risk, getiriyi yeterince karsilamiyor.\n");
    }
    printf("------------------------------------------------------\n");
}

int main() {
    // Programın ana fonksiyonu çalıştırılır
    sharpe_orani_hesapla();
    return 0;
}
