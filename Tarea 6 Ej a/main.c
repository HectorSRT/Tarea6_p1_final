#include <stdio.h>
#include <stdlib.h>

void genera_matrizA(int n, int arr[n][n]);
void genera_matrizB(int n, int matriz[n][n]);
void genera_matrizC(int n, int matriz[n][n]);
void genera_matrizD(int n, int matriz[n][n]);
void genera_matrizE(int n, int matriz[n][n]);
void genera_matrizF(int n, int matriz[n][n]);

int main()
{
    int matriz[100][100];
    int n;
    int tam=tamanio(n);
    genera_matrizA(tam,matriz);
    genera_matrizB(tam, matriz);
    genera_matrizC(tam,matriz);
    genera_matrizD(tam,matriz);
    genera_matrizE(tam, matriz);
    genera_matrizF(tam,matriz);
    return 0;
}

int tamanio(int n){
    printf("Defina el tam de la matriz: ");
    scanf("%d", &n);
    return n;
}

void genera_matrizA(int n, int matriz[n][n]){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                matriz[i][j]=1;
            }else{
                matriz[i][j]=0;
            }
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void genera_matrizB(int n, int matriz[n][n]){
    int x=1;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(i==j){
                matriz[i][j]=1;
            }else{
                matriz[i][j]=0;
            }
            if(i==n-x||j==n-x){
                matriz[i][j]=1;
            }
            printf("%d", matriz[i][j]);
        }
        printf("\n");
        x++;
    }
    printf("\n");
}

void genera_matrizC(int n, int matriz[n][n]){
    int x;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            matriz[i][j]=0;
        }
    }

    for(x=0;x<n/2;x+=2){
        for(int j=x;j<n-x;j++){
            matriz[x][j]=1;
            matriz[j][n-x-1]=1;
            matriz[n-x-1][j]=1;
            matriz[j][x]=1;
        }
    }

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void genera_matrizD(int n, int matriz[n][n]){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(i==1&&j==n-1){
                matriz[i][j]=0;
            }
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void genera_matrizE(int n, int matriz[n][n]){
    int x=0;

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            matriz[i][j]=0;
        }
    }

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(i<=x){
                matriz[i][j]=1;
            }
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void genera_matrizF(int n, int matriz[n][n]){
    int x=0,cont=1;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            matriz[i][j]=0;
        }
    }

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(cont%2==1){
                matriz[i][j]=1;
            }
            x++;
            if(x==cont){
                cont++;
                x=0;
            }
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
