#include<stdio.h>
typedef struct {
    int num;
    int times;
}numbers;
int main(){
    int a[101];
    numbers b[101];
    int n, i, j, temp, max, m;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    j = 0;
    b[j].num = a[0];
	b[j].times = 0;
    for(i = 0; i < n; i++) { 
        if(a[i] != a[i + 1]) {
			b[j].times++;
            j++;
            b[j].num = a[i + 1];
			b[j].times = 0;
        }
        else {
            b[j].times++;
        }
    }
    m = j;
    max = 0;
    for(i = 0; i <= m; i++) {
        if (b[i].times > max) {
            max = b[i].times;
        }
    }
    for(i = 0; i <= m; i++) {
        if (b[i].times == max) {
            printf("%d %d\n", b[i].num, b[i].times);
        }
    }
    return 0;
} 

