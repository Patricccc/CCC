#include <stdio.h>

int main() {
    int n, i, xmax, xmin, ymax, ymin;
    xmax = ymax = 0;
    xmin = ymin = 100;
    scanf("%d", &n);
    int x[n], y[n];
    for(i=0;i<n;i++){
        scanf("%d, %d", &x[i], &y[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]>xmax){
            xmax = x[i];
        }
        if(x[i]<xmin){
            xmin = x[i];
        }
        if(y[i]>ymax){
            ymax = y[i];
        }
        if(y[i]<ymin){
            ymin = y[i];
        }
    }
    printf("%d, %d\n%d, %d", xmin-1, ymin-1, xmax+1, ymax+1);
    return 0;
}