#include <stdio.h> 

// #include <stdio.h>
// int main() {
//    int i, space, rows, k = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i, k = 0) {
//       for (space = 1; space <= rows - i; ++space) {
//          printf("  ");
//       }
//       while (k != 2 * i - 1) {
//          printf("* ");
//          ++k;
//       }
//       printf("\n");
//    }
//    return 0;
// }


// #include<stdio.h>
// int main() {
//    int arr[]={16,18,3,4,5,2};
//    int max=arr[1];
//    int b[6]={0},k=0;
//    for(int i=0;i<6;i++){
//       for(int j=i+1;i<5;j++) {
//          if(arr[j]>arr[j+1]) {
//             max=arr[j];
//          }
//       }
//    if(b[k-1]==max)continue;
//    b[k++]=max;
//    }
//    for(int i=0;i<6;i++){
//       printf("%d ",b[i]);
//    }
// }

// #include <stdio.h>

// void find_leader(int arr[], int n)
// {
//     int max_from_right = arr[n-1];

//     for (int i = n-2; i >= 0; i--)
//     {
//         if (arr[i] > max_from_right)
//         {
//             max_from_right = arr[i];
//             printf("%d ", arr[i]);
//         }
//     }
// }

// int main()
// {
//     int arr[] = {16,18,3,4,5,2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     find_leader(arr, n);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// void printLeaders(int arr[],int size) {
//    int *SK=(int*)malloc(sizeof(int));
//    int top=-1;
//    SK[++top]=arr[size-1];
//    for(int i=size-2;i>=0;i--) {
//       if(arr[i]>SK[top])
//       SK[++top]=arr[i];
//    }
//    while(top!=-1) {
//       printf("%d ",SK[top--]);
//    }
//    free(SK);
// }
// int main() {
//    int arr[] = {16, 18, 3, 4, 5, 2};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    printLeaders(arr,n); 
//    // int b[6] = {0}, k = 0,leader,a;

//    // for (int i = 0; i < n; i++) {
//    //   leader = arr[i];
//    //   a = 1;
//    //   for (int j = i + 1; j < n; j++) {
//    //    if (arr[j] > leader) {
//    //    a = 0;
//    //    break;
//    //    }
//    //   }
//    //   if (a) {
//    //    b[k++] = leader;
//    //   }
//    // }
//    // printf("leaders: ");
//    // for (int i = 0; i < k; i++) {
//    //   printf("%d ", b[i]);
//    // }
//    return 0;
// }
 
// #include <stdio.h>
// void RevArr(int arr[],int start,int end){
//     if(end-start>0){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         RevArr(arr,start+1,end-1);
//     }
// }
// void printArray(int arr[],int size){
//     for (int i=0;i<size;i++){
//         printf(" %d",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[]={6,36,9,34,6,3,83};
//     int size=sizeof(arr)/sizeof(arr[0]);
    
//     printf("Array before reversal:");
//     printArray(arr,size);
//     RevArr(arr,0,size-1);
//     printf("Array after reversal:");
//     printArray(arr,size);
// }

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char a[5]="ABCD";
//     printf("%d %d",sizeof(a),strlen(a));
// }

// int main() {
//   int a[6] = {16, 18, 3, 4, 5, 2};
//   int leaders[6];
//   int i, j, k = 0;

//   for (i = 0; i < 6; i++) {
//     int isLeader = 1;
//     for (j = i + 1; j < 6; j++) {
//       if (a[i] <= a[j]) {
//         isLeader = 0;
//         break;
//       }
//     }
//     if (isLeader) {
//       leaders[k++] = a[i];
//     }
//   }

//   printf("Leaders of the array are: ");
//   for (i = 0; i < k; i++) {
//     printf("%d ", leaders[i]);
//   }
//   printf("\n");

//   return 0;
// }

#include <stdio.h>
#include <string.h>
#include <limits.h>

int myAtoi(char* s) {
    int len = strlen(s);
    int  neg = 0, i, num;
    int max = INT_MAX;
    long long sum=0;

    for (i = 0; i < len; i++) {
        if (s[i] == ' ') continue;
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            break;
        }
        if (s[i] == '-') {
            neg = 1;
            continue;
        }
        num = s[i] - '0';
        sum = sum * 10 + num;
    }
    if (neg) {
        sum = -sum;
    }
    if(sum>INT_MAX) {
        return INT_MAX;
    } else if(sum<INT_MIN) {
        return INT_MIN;
    }
    return sum;
}

int main() {
    char str[] = "3.14";
    printf("Converted integer: %d\n", myAtoi(str));
    return 0;
}
