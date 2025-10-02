#include <stdio.h>

// ฟังก์ชันสำหรับรับค่าคะแนนนักเรียน 3 คน (แต่ละคนมี 3 วิชา)
// ใช้ 2D array arr[3][3] เก็บค่า
void inputScores(float arr[3][3]) {
    // วนลูปรับค่าคะแนนของนักเรียนแต่ละคน
    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);

        printf("Math: ");
        scanf("%f", &arr[i][0]);   // เก็บ Math ไว้ที่คอลัมน์ 0

        printf("Physics: ");
        scanf("%f", &arr[i][1]);   // เก็บ Physics ไว้ที่คอลัมน์ 1

        printf("Chemistry: ");
        scanf("%f", &arr[i][2]);   // เก็บ Chemistry ไว้ที่คอลัมน์ 2
    }
}

// ฟังก์ชันแสดงตารางคะแนนของนักเรียนทั้งหมด
void printTable(float arr[3][3]) {
    printf("\nScore Table\n");
    printf("Student   Math   Physics   Chemistry\n");

    // วนลูปนักเรียนแต่ละคน
    for (int i = 0; i < 3; i++) {
        printf("%3d   %6.2f   %7.2f   %9.2f\n", 
               i + 1, arr[i][0], arr[i][1], arr[i][2]);
    }
}

// ฟังก์ชันคำนวณและแสดงค่าเฉลี่ยของแต่ละวิชา
void printAverage(float arr[3][3]) {
    float avgMath = 0, avgPhysics = 0, avgChemistry = 0;

    // วนลูปรวมคะแนนของนักเรียนแต่ละวิชา
    for (int i = 0; i < 3; i++) {
        avgMath += arr[i][0];       // รวมคะแนน Math
        avgPhysics += arr[i][1];    // รวมคะแนน Physics
        avgChemistry += arr[i][2];  // รวมคะแนน Chemistry
    }

    // หาค่าเฉลี่ย (รวมทั้งหมด / จำนวนนักเรียน 3 คน)
    avgMath /= 3;
    avgPhysics /= 3;
    avgChemistry /= 3;

    // แสดงผลค่าเฉลี่ย
    printf("\nAverage for each subject:\n");
    printf("Math: %.2f\n", avgMath);
    printf("Physics: %.2f\n", avgPhysics);
    printf("Chemistry: %.2f\n", avgChemistry);
}

int main() {
    // ประกาศ array 2D สำหรับเก็บคะแนนนักเรียน 3 คน (3 วิชา)
    float scores[3][3];

    // เรียกใช้ฟังก์ชันเพื่อรับค่า
    inputScores(scores);

    // เรียกใช้ฟังก์ชันเพื่อแสดงตารางคะแนน
    printTable(scores);

    // เรียกใช้ฟังก์ชันเพื่อแสดงค่าเฉลี่ย
    printAverage(scores);

    return 0;   // จบโปรแกรม
}
