#include <stdio.h>

int main() {
    // Kieu so nguyen (integer) dung de luu gia tri so nguyen 
    int songuyen = 10; // Bien kieu int, luu so nguyen 10 

    // Kieu so thuc dau cham dong don (float) dung de luu gia tri so thap phan  
    float sothuc = 3.14f; // Bien kieu float, luu gia tri 3.14.

    // Kieu so thuc dau cham dong kep (double) dung de luu gia tri so thap phan, do chinh xac cao hon float  
    double sothucchinhxac = 3.14159265359; // Bien kieu double, luu gia tri chinh xac cao  

   // Kieu ki tu (char) dung de luu 1 ki tu  
    char kytu = 'A'; // Bien kieu char, luu ki tu 'A'   
    
    // In ra các giá tr? ð? ki?m tra
    printf("So nguyen: %d\n", songuyen);
    printf("So thuc: %f\n", sothuc);
    printf("So thuc chinh xac: %lf\n", sothucchinhxac);
    printf("Ky tu: %c\n", kytu);
   
    return 0;
}

