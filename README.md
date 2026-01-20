# Matematik-odev-1.soru
Meryem Cevahiroğlu

2507020080

Bilgisayar Mühendisliği

İkinci dereceden denklemlerin köklerini diskriminant yöntemiyle hesaplayan C++ programı.

<img width="1002" height="496" alt="Ekran Görüntüsü (6)" src="https://github.com/user-attachments/assets/f7022952-ff08-4b1a-a570-3ff3c5b06641" />

<img width="1054" height="500" alt="Ekran Görüntüsü (5)" src="https://github.com/user-attachments/assets/da1c89bf-304c-4d7c-a182-e8a90636ba50" />

<img width="1068" height="418" alt="Ekran Görüntüsü (3)" src="https://github.com/user-attachments/assets/398211c7-80e2-41e8-89ba-75d7ecccbf76" />
Öncelikle buraya yazdığım kodlarımın ekran görüntüsünü göstermek istedim.


1.ADIM: #include <iostream>: Bunu ekledik çünkü bilgisayarla konuşmamız (ekrana yazı yazmamız cout ve klavyeden veri almamız cin) gerekiyordu.
#include <cmath>: Bunu ekledik çünkü formülümüzde karekök alma işlemi vardı. C++ karekök almayı doğuştan bilmez, bu kütüphane sayesinde sqrt() komutunu kullanabildik.

2.ADIM: İnt yerine doble kullandık çünkü  -> Double (ondalıklı sayı) kullanarak sonucun hassas ve doğru çıkmasını garantiledik.
3.ADIM: Kullanıcıdan a sayısı istedik. Matematiksel olarak x karenin katsayısı sıfır olmaz.Programın hata vermemesi için WHİLE(a==0) döngğsü kurduk.Bu sayede kullanıcı verisini doğru girmeye zorladık.
4.ADIM: Denklemin köklerinin varlığını belirlemek için önce delta değerini hesapladık. (KOD:(b*b)-(4*a*c)).
5.ADIM: IF ve ELSE ile delta sonucnu 3 yolla koşula bağladık. 
        delta<0 (kök yok)  delta=0(tek kök var) deta>0(2 kök var)  
