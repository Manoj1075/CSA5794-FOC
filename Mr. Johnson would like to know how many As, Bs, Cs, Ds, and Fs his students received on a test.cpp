#include <stdio.h>

int main() {
    int studentNumber, grade;
    int As = 0, Bs = 0, Cs = 0, Ds = 0, Fs = 0;
    
    for (int i = 1; i <= 200; i++) {
        printf("Enter student number for student %d: ", i);
        scanf("%d", &studentNumber);
        
        printf("Enter number grade for student %d: ", i);
        scanf("%d", &grade);
        
        if (grade >= 90 && grade <= 100) {
            printf("Student %d: Number Grade = %d, Letter Grade = A\n", studentNumber, grade);
            As++;
        } else if (grade >= 78 && grade <= 89) {
            printf("Student %d: Number Grade = %d, Letter Grade = B\n", studentNumber, grade);
            Bs++;
        } else if (grade >= 65 && grade <= 77) {
            printf("Student %d: Number Grade = %d, Letter Grade = C\n", studentNumber, grade);
            Cs++;
        } else if (grade >= 50 && grade <= 64) {
            printf("Student %d: Number Grade = %d, Letter Grade = D\n", studentNumber, grade);
            Ds++;
        } else {
            printf("Student %d: Number Grade = %d, Letter Grade = F\n", studentNumber, grade);
            Fs++;
        }
    }
    
    printf("\nTotal number of grades:\n");
    printf("As: %d\n", As);
    printf("Bs: %d\n", Bs);
    printf("Cs: %d\n", Cs);
    printf("Ds: %d\n", Ds);
    printf("Fs: %d\n", Fs);
    
    return 0;
}
