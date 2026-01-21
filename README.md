# Matematik-odev-1.soru
Meryem Cevahiroğlu
2507020080
Bilgisayar Mühendisliği

İkinci dereceden denklemlerin köklerini bilgisayar ortamında hesaplayan C++ programı.

<img width="929" height="464" alt="Ekran Görüntüsü (19)" src="https://github.com/user-attachments/assets/e443cae3-9562-4c19-91be-370c8520b078" />

<img width="832" height="421" alt="Ekran Görüntüsü (18)" src="https://github.com/user-attachments/assets/2cb2c87f-5de4-4016-b67d-19151bad43bb" />


İ
Programın işleyişinin adımları:
1.ADIM: #include <iostream>: Bunu ekledik çünkü bilgisayarla konuşmamız (ekrana yazı yazmamız cout ve klavyeden veri almamız cin) gerekiyordu.
#include <cmath>: Bunu ekledik çünkü formülümüzde karekök alma işlemi vardı. C++ karekök almayı doğuştan bilmez, bu kütüphane sayesinde sqrt() komutunu kullanabildik.

2.ADIM: İnt yerine double kullandık çünkü  -> Double (ondalıklı sayı) kullanarak sonucun hassas ve doğru çıkmasını garantiledik.

3.ADIM: Kullanıcıdan a sayısı istedik. Matematiksel olarak x karenin katsayısı sıfır olmaz.Programın hata vermemesi için WHİLE(a==0) döngüsü kurduk.Bu sayede kullanıcı verisini doğru girmeye zorladık.

4.ADIM: Denklemin köklerinin varlığını belirlemek için önce delta değerini hesapladık. (KOD:(b*b)-(4*a*c)).

5.ADIM: IF ve ELSE ile delta sonucnu 3 yolla koşula bağladık. 
        delta<0 (kök yok)  delta=0(tek kök var)  delta>0(2 kök var)  
        
delta<0 :   <img width="968" height="517" alt="Ekran Görüntüsü (20)" src="https://github.com/user-attachments/assets/072598a0-e680-490f-95bc-0596380d185e" />

delta=0     <img width="967" height="514" alt="Ekran Görüntüsü (22)" src="https://github.com/user-attachments/assets/19a3a583-d084-4b69-aa03-a57c4f96eb3b" />

delta>0      <img width="938" height="488" alt="Ekran Görüntüsü (21)" src="https://github.com/user-attachments/assets/828d28e4-6af5-4b3f-83d7-e6b3fd40aae1" />
