#include <stdio.h>

int main() {
int m;
printf("enter the no. of rows:\n");
scanf("%d",&m);
int n;
printf("enter the no. of coloumn:\n");
scanf("%d",&n);
int a[m][n];
//input matrix
printf("enter elements:\n");
for(int i = 0;i<m;i++){
    for(int j = 0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
//spiral print
printf("\n");
int minr = 0;
int maxr = m-1;
int minc = 0;
int maxc = n-1;
int tne = m*n;
int count = 0;
while(count<tne){
    //print mini row
    for(int j = minc;j<=maxc;j++){
        printf("%d ",a[minr][j]);
        count++;
    }
    minr++;
    //print max coloum
    for(int i = minr;i<=maxr;i++){
        printf("%d ",a[i][maxc]);
        count++;
    }
    maxc--;
    //print max row
    for(int j = maxc;j>=minc;j--){
        printf("%d ",a[maxr][j]);
        count++;
    }
    maxr--;
    // print min coloum
    for(int i = maxr;i>=minr;i--){
        printf("%d ",a[i][minc]);
        count++;
    }
    minc++;
}

 return 0;

}
    
