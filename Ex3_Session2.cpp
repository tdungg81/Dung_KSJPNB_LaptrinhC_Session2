#include <stdio.h>

int main() {
   
    int so1 = 10; 
    int so2 = 20; 

    int tong = so1 + so2;
	 
    int hieu = so1 - so2;
	 
    int tich = so1 * so2; 
    
    float thuong = (float)so1 / so2; 

    printf("Tong cua %d va %d la: %d\n", so1, so2, tong);
    printf("Hieu cua %d va %d la: %d\n", so1, so2, hieu);
    printf("Tich cua %d va %d la: %d\n", so1, so2, tich);
    printf("Thuong cua %d va %d la: %.2f\n", so1, so2, thuong);

    return 0;
}

