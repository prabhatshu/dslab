#include<stdio.h>
#include<conio.h>

int main() {
    int a[5][5], i, j, t, m, n;
    clrscr();


    printf(" enter rows of a matrix");
    scanf("%d", &m);

    printf(" Enter columsn of a matrix");;
    scanf("%d", &n);

    if(m == n) {
        printf(" enter a matrix");

        for(i=0; i<m; i++) {
            printf("\n\n\t Enter row %d");

            for(j=0; j<n; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        for(i=0; i<m; i++) {
            for(j=0; j<n; j++) {
                if( (i != j) && (i > j) ) {
                    t = a[i][j];
                    a[i][j] = a[j][i];
                    a[j][i] = t;
                }
            }
        }

        printf("\n\n\t Transpose \n\n\t");
        for(i=0; i<m; i++) {
            for(j=0; j<n; j++) {
                printf("  %d", a[i][j]);
            }
            printf("\n\n\t");
        }

    }
    else {
        printf("\n\n\t Not a square matrix");
    }

 
    return 0;
}