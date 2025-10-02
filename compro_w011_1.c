#include <stdio.h>

// ฟังก์ชันสำหรับรับคะแนนและแสดงผล
// ใช้ parameter 3 ตัวคือ math, physics, chemistry
// โดยจะไม่คืนค่า (void) แต่จะทำหน้าที่แค่แสดงผลออกมา
void inputAndShow(int math, int physics, int chemistry) {
    printf("Scores: Math = %d, Physics = %d, Chemistry = %d\n", math, physics, chemistry);
}

int main() {
    // ประกาศตัวแปรเก็บคะแนน 3 วิชา
    int math, physics, chemistry;

    // ขอให้ผู้ใช้กรอกคะแนนวิชา Math
    printf("Enter Math: ");
    scanf("%d", &math);

    // ขอให้ผู้ใช้กรอกคะแนนวิชา Physics
    printf("Enter Physics: ");
    scanf("%d", &physics);

    // ขอให้ผู้ใช้กรอกคะแนนวิชา Chemistry
    printf("Enter Chemistry: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชัน inputAndShow() โดยส่งค่าที่ผู้ใช้กรอกไป
    inputAndShow(math, physics, chemistry);

    // จบโปรแกรม
    return 0;
}
