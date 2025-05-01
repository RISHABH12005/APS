//WAP to calculate difference between two time periods using the C structures.
#include <stdio.h>
typedef struct {
    int H;
    int M;
    int S;
} T;
T TDiff(T t1, T t2) {
    T diff;
    int totalS1, totalS2, totalDiffS;
    totalS1 = t1.H * 3600 + t1.M * 60 + t1.S;
    totalS2 = t2.H * 3600 + t2.M * 60 + t2.S;
    totalDiffS= totalS2 - totalS1;
    diff.H = totalDiffS / 3600;
    totalDiffS %= 3600;
    diff.M = totalDiffS / 60;
    diff.S = totalDiffS % 60;
    return diff;
}
int main() {
    T startT, endT, diff;
    printf("Enter the start time (hr min sec): ");
    scanf("%d %d %d", &startT.H, &startT.M, &startT.S);
    printf("Enter the end time (hr min sec): ");
    scanf("%d %d %d", &endT.H, &endT.M, &endT.S);
    diff = TDiff(startT, endT);
    printf("Difference is %d hr, %d min, %d sec\n",
           diff.H, diff.M, diff.S);
    return 0;
}
