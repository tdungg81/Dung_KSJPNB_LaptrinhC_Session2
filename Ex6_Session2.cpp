#include <stdio.h>

int main() {
	
    const float PI = 3.14;
    float bankinh = 10;

    float chuvi = 2 * PI * bankinh;        
    float dientich = PI * bankinh * bankinh; 

    printf("Ban kinh hinh tron la: %.2f\n", bankinh);
    printf("Chu vi hinh tron la: %.2f\n", chuvi);
    printf("Dien tich hinh tron la: %.2f\n", dientich);

    return 0;
}
