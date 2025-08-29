#include <stdio.h>
int main() {
    int Level ;                                                              // ประกาศตัวแปร Level เป็นจำนวนเต็ม
    printf("Enter membership level(1-4): ");                                 // รับค่าระดับสมาชิก
    scanf("%d", &Level);                                                    // เก็บค่าที่รับมาในตัวแปร Level       
    switch (Level) {
        case 1:                                                             // ถ้าระดับสมาชิกเท่ากับ 1
            printf("Silver Member :You get 5%% discount\n");                // แสดงผล Silver Member :You get 5% discount 
            break;                                                           // ออกจากเงื่อนไข                            
        case 2:                                                             // ถ้าระดับสมาชิกเท่ากับ 2
            printf("Gold Member :You get 10%% discount+Reward points\n");   // แสดงผล Gold Member :You get 10% discount+Reward points 
            break;                                                          // ออกจากเงื่อนไข 
        case 3:                                                             // ถ้าระดับสมาชิกเท่ากับ 3
            printf("Platinum Member :You get 15%% discount + Reward points + Birthday gift\n"); // แสดงผล Platinum Member :You get 15% discount + Reward points + Birthday gift
            break;                                                           // ออกจากเงื่อนไข
        case 4:                                                              // ถ้าระดับสมาชิกเท่ากับ 4
            printf("Diamond Member : You get all prerogative + VIP events\n");// แสดงผล Diamond Member : You get all prerogative + VIP events
            break;                                                          // ออกจากเงื่อนไข                                               
        default:                                                            // ถ้าระดับสมาชิกไม่เท่ากับ 1,2,3,4  หรือค่าอื่นๆ             
         printf("Invalid membership level\n");                              // แสดงผล Invalid membership level
    }

    return 0;
}