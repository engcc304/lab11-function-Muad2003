/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/
int armstrong( int number ) {
    int a = number / 100 ;
    int b = ( number - a * 100 ) / 10 ;
    int c = ( number - ( ( a * 100 ) + ( b * 10 ) ) ) / 1 ;
    a = a * a * a ;
    b = b * b * b ;
    c = c * c * c ;
    return a + b + c ;
} // end funtion armstrong

#include <stdio.h>

int main() {

    int numbers ;
    printf ( "Enter Numbers:\n" ) ;
    scanf ( "%d", &numbers ) ;
    int ans = armstrong( numbers) ;
    if ( ans == numbers ) printf ( "Pass." ) ;
    else printf ( "Not Pass." ) ;
    
}//end main function