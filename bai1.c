/******************************************************************************
 * Họ và tên: [Nguyễn Quốc Hiệp]
 * MSSV:      [PS48461]
 * Lớp:       [CS221301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char chuoi[100];
    int nguyenAm = 0, phuAm = 0;

    printf("--- CHUONG TRINH DEM NGUYEN AM & PHU AM ---\n");
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    for (int i = 0; i < strlen(chuoi); i++) {
        char c = tolower(chuoi[i]); 

        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'y' || c == 'u') {
                nguyenAm++;
            } else {
                phuAm++;
            }
        }
    }

    printf("-------------------------------------------\n");
    printf("Ket qua:\n");
    printf("- So luong nguyen am: %d\n", nguyenAm);
    printf("- So luong phu am: %d\n", phuAm);

    return 0;
}