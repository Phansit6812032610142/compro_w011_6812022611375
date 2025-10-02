#include <stdio.h>

// ฟังก์ชัน average มีหน้าที่คำนวณค่าเฉลี่ย
// รับ parameter คือ คะแนน 3 วิชา a, b, c
// ส่งผลลัพธ์ออกมาเป็น float (จำนวนทศนิยมได้)
float average(int a, int b, int c) {
    float avg;                 // ตัวแปรเก็บค่าเฉลี่ย
    avg = (a + b + c) / 3.0;   // หารด้วย 3.0 เพื่อให้ผลลัพธ์เป็นทศนิยม
    return avg;                // คืนค่าเฉลี่ยกลับไปที่ main
}

int main() {
    // ประกาศตัวแปรสำหรับเก็บคะแนนของแต่ละวิชา
    int math, physics, chemistry;
    float avg;   // ตัวแปรเก็บค่าเฉลี่ยที่ได้จากฟังก์ชัน

    // รับค่าคะแนนจากผู้ใช้
    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชัน average() โดยส่งคะแนน 3 วิชาไป
    // และเก็บผลลัพธ์ไว้ในตัวแปร avg
    avg = average(math, physics, chemistry);

    // แสดงผลคะแนนแต่ละวิชา
    printf("\nMath = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);

    // แสดงผลค่าเฉลี่ย
    printf("Average = %.2f\n", avg); // .2f หมายถึง แสดงทศนิยม 2 ตำแหน่ง

    return 0;   // จบโปรแกรม
}
