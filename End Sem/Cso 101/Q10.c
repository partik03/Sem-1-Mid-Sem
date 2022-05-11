// // #include <stdio.h>
// // #include <math.h>
// // int main()
// // {
// //     float a, b, c, discriminant, root1, root2, realPart, imagPart;
// //     printf("Enter coefficients a, b and c: ");
// //     scanf("%f %f %f", &a, &b, &c);
// //     discriminant = b * b - 4 * a * c;
// //     if (discriminant > 0)
// //     {
// //         root1 = (-b + sqrt(discriminant)) / (2 * a);
// //         root2 = (-b - sqrt(discriminant)) / (2 * a);
// //         printf("root1 = %f and root2 = %f", root1, root2);
// //     }
// //     else if (discriminant == 0)
// //     {
// //         root1 = root2 = -b / (2 * a);
// //         printf("root1 = root2 = %f %f;", root1,root2);
// //     }
// //     else
// //     {
// //         realPart = -b / (2 * a);
// //         imagPart = sqrt(-discriminant) / (2 * a);
// //         printf("root1 = %f+%fi and root2 = %f-%fi", realPart, imagPart, realPart, imagPart);
// //     }
// //     return 0;
// // }

// #include "stdlib.h"
// void update(int *pa, int *pb)
// {
// int a;
// a=*pa;
// *pa=a+*pb;
// *pb=abs((2*a)-*pa);
// }
// int main() {
// int a, b;
// int *pa = &a, *pb = &b;
// scanf("%d %d", &a, &b);
// update(pa, pb);
// printf("%d\n%d", a, b);
// return 0;
// }
// #include <stdio.h>
// int main(void)
// {
//     printf("Main");
//     int cso()
//     {
//         printf("cso");
//         int endsem()
//         {
//             printf("endsem");
//         }
//         return 1;
//     }
//     endsem();
// }
// #include<stdio.h>
// const int N=1000;
// int grid[1000][1000];
// void grid_filling(int row,int alpha,int n){
//     if(row>=n){
//         return;
//     }
//     else{
//         grid[row][alpha]=1;
//         alpha=(alpha==0)? 2:0;
//         return grid_filling(row+1,alpha,n);
//     }
// }
// void grid_init(int n){
//     if(n<=2){
//         return;
//     }
//     else if(n>=3){
//         grid_filling(0,0,n);
//     }
// }
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         grid_init(n);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 printf("%d ",grid[i][j]);
//             }
//             printf("\n");
//         }
//     }
// }
#include<stdio.h>
void swap(int *a,int *b){
    int x=*a;
    *a=*b;
    *b=x;
}
int main()
{
    int a,b;
    int *x=&a,*y=&b;
    scanf("%d %d",x,y);
    swap(x,y);
    printf("%d %d",a,b);
    return 0;
}
