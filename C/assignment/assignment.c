// A character is entered through keyboard, WAP to determine whether the character is entered capital, small, digit or special character.
// #include <stdio.h>
// int main(){
//     char a;
//     printf("Enter a character: \n");
//     scanf("%c",&a);
//     if (a >='a' && a <= 'z'){
//         printf("Character entered is a small letter.");
//     }
//     else if (a>='A' && a<='Z'){
//         printf("Character entered is a capital letter.");
//     }
//     else if (a>='1' && a<='9'){
//         printf("Character entered is a number.");
//     }
//     else {
//         printf("Chracter entered is a special character.");
//     }
//     return 0;
// }


// WAP to find the largest of 3 nos. using conditional operators.
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     printf("Enter third number: ");
//     scanf("%d",&c);
//     ((a > b && a > c) ? printf("%d is greater",a) : ((b>a && b> c) ? printf("%d is greater",b) : printf("%d is greater",c)));
// }


// WAP to check whether a entered year is leap year or not.
// #include<stdio.h>
// int main(){
//     int year;
//     printf("Enter year: ");
//     scanf("%d",&year);
//     if (year % 4 == 0 && year % 100 !=0 || year % 400 == 0){
//         printf("Leap Year");
//     }
//     else{
//         printf("Not a leap year.");
//     }
//     return 0;
//     }

//WAP to calculate the Armstrong nos. b/w 1 and 500.
// #include <stdio.h>
// int main(){
//     int i=1;
//     while (i<500){
//     int n=i;
//     int temp=n;
//     int p=0;
    
//     while (n>0){
//         int rem=n%10;
//         p=p+(rem*rem*rem);
//         n=n/10;
//     }
//     if (temp==p){
//         printf("%d\n",p);
//     }
//     i=i+1;
//     }
//     return 0;
// }

//  WAP to determine if a no. is prime or not.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number to check if prime or not:\n");
//     scanf("%d",&n);
//     int fact=0;
//     if (n==1){
//         printf("Not a prime number.");
//     }
//     else{
//     for (int i=1; i<=n; i++){
//         if (n%i==0){
//             fact=fact+1;
//         }
//     }
//     if (fact>2){
//         printf("No, its not a prime number.");
//     }
//     else{
//         printf("Yes, its a prime number.");
//     }
//     }

//     return 0;
// }

// WAP to find diameter, circumference and area of a circle using functions
// #include<stdio.h>
// float diameter(float *d, float r){
//     *d=r*2;
//     }
// float area(float *a,float r){
//     *a=3.14*r*r;
// }
// int main(){
//     float r , a, d;
//     printf("Enter radius of circle: ");
//     scanf("%f",&r);
//     diameter(&d, r);
//     area(&a, r);
//     printf("Diameter = %f\n",d);
//     printf("Area = %f\n",a);

//     return 0;
// }


// Q7 WAP to find max and min element of array
// #include <stdio.h>
// int main(){
//     int n,i;
//     printf("Enter length of array : \n");
//     scanf("%d",&n);
//     int arr[n];
//     //entry
//     for (i=0;i<n;i++){
//         printf("Enter value for %d \n", i);
//         scanf("%d",&arr[i]);
//     }
//     int max=arr[0];
//     int min=arr[0];
//     //printing
//     for (int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     for (int i=0;i<n;i++){
//         if (arr[i]>max){
//             max=arr[i];
//         }
//     }
//     for (int i=0;i<n;i++){
//         if (arr[i]<min){
//             min=arr[i];
//         }
//     }
//     printf("\n%d is MAXIMUM element in the array.\n",max);
//     printf("%d is MINIMUM element in the array.\n",min);
//     return 0;
// }

// Q8
//  A five digit no. is taken input from user, write a program to reverse that number and find sum of the digit of its digit too.
// #include<stdio.h>
// int main(){
//     int reverse=0;
//     int n;
//     printf("Enter a five digit number: \n");
//     scanf("%d",&n);
//     for (int i=5;i>0;i--){
//         reverse=reverse*10+n%10;
//         n=n/10;
//     }
//     printf("%d",reverse);
//     return 0;
// }

//Q9WAP to print the following pattern.
// #include<stdio.h>
// int main(){
//     for (int i=1;i<=5;i++){
//         for (int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for (int i=1;i<=5;i++){
//         for (int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     printf("\n");

//     int p=5;
//     for (int i=1;i<6;i++){
//         for (int j=5;j>=i;j--){
//             printf("%d",p);
//         }
//         p=p-1;
//             printf("\n");
//     }
//     printf("\n");

//     for (int i=1;i<6;i++){
//         int a=65;
//         for (int j=1;j<=i;j++){
//             printf("%c",a++);
//         }
//         printf("\n");
//     }
// return 0;
// }

//Q10 PROG. TO PRINT SUM OF THE SERIES-“1-1/2+1/3-1/4…….n” terms.
// #include <stdio.h>
// int main(){
//     float sum=0;
//     int n;
//     printf("Enter no. of terms:");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         if (i%2==0){
//             sum=sum-(1.0/i);
//         }
//         else{
//             sum=sum+(1.0/i);
//         }
//     }
//     printf("Sum=%f",sum);
//     return 0;
// }

// 11 PROG. TO FIND THE SUM OF SERIES-“X-X^3/3!+X^5/5!-
// X^7/7!+X^9/9!....n “terms.
// #include <stdio.h>
// #include <math.h>
// int main(){
//     float x;
//     int n;
//     float sum;
//     printf("Enter value of x");
//     scanf("%f",&x);
//     printf("Enter value of n");
//     scanf("%d",&n);

//     for (int i=1;i<n;i++){
//         int fact=1;
//         for (int j=1;j<=i;j++){
//             fact=fact*j;
//         }
//         sum=sum+pow(-1,i)*pow(x,i)/fact;
//     }
//     printf("Sum=%f",sum);
//     return 0;
// }

// 12 WAP to do Linear Search, Binary search, Bubble Sort, Selection Sort using menu driven program by using functions

// #include <stdio.h>
// int linearSearch(int arr[],int n,int x){
//     for (int i=0;i<n;i++){
//         if (arr[i] == x){
//             return i;
//         }
//     }
//     return -1;
// }

// int binarySearch(int arr[],int n,int x ){
//     int low, mid, high;
//     low=0;
//     high=n-1;
//     while (low<=high){
//         mid = (low + high)/2;
//         if (arr[mid]==x){
//             return mid;
//         }
//         if (arr[mid]<x){
//             low=mid+1; 
//         } 
//         else{
//             high=mid-1;
//         } 
//     }
//     return -1;
// }

// int bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for (int j=0;j<n-1-i;j++){
//             if (arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp; 
//             }
//         }
//     }
// }

// int selectionSort(int arr[],int n){
//     int indexOfMin;
//     for (int i=0;i<n-1;i++){
//         indexOfMin=i;
//         for (int j=i+1;j<n;j++){
//             if (arr[j]<arr[indexOfMin]){
//                 indexOfMin=j;
//             }
//         }
//         int temp=arr[i];
//         arr[i]=arr[indexOfMin];
//         arr[indexOfMin]=temp;
//     }
// }
// int main(){
//     int arr[10]={1,2,3,4,5};
//     int n=5;
//     while(1){
//         int ch=0;
//         printf("\n M \tE \tN \tU \n");
//         printf("1.Linear Search\n");
//         printf("2.Binary Search\n");
//         printf("3.Bubble Sort\n");
//         printf("4.Selection Sort\n");
//         printf("5.Exit\n");
//         printf("Enter yout choice: \n");
//         scanf("%d",&ch);
        
        
//         if (ch==1){
//             int x;
//             printf("Enter the number which you wanna find:\n");
//             scanf("%d",&x);
//             int result=linearSearch(arr,n,x);
//             if (result==-1){
//                 printf("Element not found at any index.\n");
//             }
//             else{
//                 printf("Element found at index %d",result);
//             }
//         }
//         else if (ch==2){
//             int x; 
//             printf("Enter the number which you wanna find:\n");
//             scanf("%d",&x);
//             int result=binarySearch(arr,n,x);
//             if (result==-1){
//                 printf("Element not found.\n");
//             }
//             else{
//                 printf("Element found at index %d\n",result);
//             }
//         }
//         else if(ch==3){
//             bubbleSort(arr,n);
//             printf("Sorted array:\n");
//             for (int i=0;i<n;i++){
//                 printf("%d \t",arr[i]);
//             }
//         }
//         else if (ch==4){
//             selectionSort(arr,n);
//             printf("Sorted array:\n");
//             for (int i=0;i<n;i++){
//                 printf("%d \t",arr[i]);
//             }
//         }
//         else if (ch==5){
//             return 0;
//         }
//     }
//     return 0;
// }

//13 WAP to print table of any no. entered by the user.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number whose table you want to print.\n");
//     scanf("%d",&n);
//     for (int i=1;i<=10;i++){
//         printf("%d * %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

//14 Wap to check whether the input character is a vowel or not using switch case.
// #include<stdio.h>
// int main(){
//     char c;
//     printf("Enter a character.\n");
//     scanf("%c",&c);
//     switch(c){
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//         printf("%c is a vowel.\n",c);
//         break;
//         default:
//         printf("%c is a consonant.\n",c);
//     }
//     return 0;
// }

// 15WAP to insert and delete an element to and from array at specified position
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Number of elements in array?\n");
//     scanf("%d",&n);
//     int arr[n];
//     //entering
//     for (int i=0;i<n;i++){
//         printf("Element %d \t",i);
//         scanf("%d",&arr[i]);
//     }
//     //printing
//     printf("Array:\n");
//     for (int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     //delete
//     int index;
//     printf("Enter element index to delete:\n");
//     scanf("%d",&index);
//     for (int i=index;i<n;i++){
//         arr[i]=arr[i+1];
//     }
//     n=n-1;
//     //printing
//     printf("Array:\n");
//     for (int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     //insert
//     int element;
//     printf("Element to be inserted\n");
//     scanf("%d",&element);
//     printf("Index at which you want to insert\n");
//     scanf("%d",&index);
//     n=n+1;
//     for (int i=n-1;i>=index;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[index]=element;
//     //printing
//     printf("Array:\n");
//     for (int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// 16)WAP to print first 20 nos. of fibonacci series.
// #include<stdio.h>
// int main(){
//     int first=0;
//     int second=1;
//     for (int i=0;i<20;i++){
//         printf("%d \n",first);
//         int next=first+second;
//         first=second;
//         second=next;
//     }
//     printf("\n");
//     return 0;
// }

// 17)
// #include<stdio.h>


// void sum(int arr1[][2],int arr2[][2],int arr3[][2], int size){
//     for (int i=0;i<size;i++){
//         for (int j=0;j<size;j++){
//             arr3[i][j]=arr1[i][j]+arr2[i][j];
//         }
//     }
// }
// void multiply(int arr1[][2],int arr2[][2],int arr3[][2], int size){
//     for (int i=0;i<size;i++){
//         for (int j=0;j<size;j++){
//             arr3[i][j]=0;
//             for (int k=0;k<size;k++){
//                 arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
//             }
//         }
//     }
// }


// int main(){
//     int size;
//     printf("Enter size of matrix\n");
//     scanf("%d",&size);
//     int arr1[size][size],arr2[size][size],arr3[size][size];


//     //entry for 1st matrix
//     for (int i=0;i<size;i++){
//         for (int j=0;j<size;j++){
//             printf("Element %d %d:\t",i,j);
//             scanf("%d",&arr1[i][j]);
//         }
//     }


//     //printing
//     printf("Matrix 1:\n");
//     for (int i=0;i<size;i++){
//         printf("\n");
//         for (int j=0;j<size;j++){
//             printf("%d\t",arr1[i][j]);
//         }
//     }


//     printf("\n\n");


//     //entry matrix 2
//     for (int i=0;i<size;i++){
//         for (int j=0;j<size;j++){
//             printf("Element %d %d\t",i,j);
//             scanf("%d",&arr2[i][j]);
//         }
//     }


//     //printing
//     printf("Matrix 2:\n");
//     for (int i=0;i<size;i++){
//         printf("\n");
//         for (int j=0;j<size;j++){
//             printf("%d\t",arr2[i][j]);
//         }
//     }


//         printf("\n\n");
// while(1){
//     int ch;
//     printf("\n\tM\t E\t N\t U\t\n");
//     printf("1.SUM\n");
//     printf("2.Multiply\n");
//     scanf("%d",&ch);
//     if (ch==1){
//         sum(arr1,arr2,arr3,size);
//     }
//     else if(ch==2){
//         multiply(arr1,arr2,arr3,size);
//     }


//     //printing
//     printf("Matrix :\n");
//     for (int i=0;i<size;i++){
//         printf("\n");
//         for (int j=0;j<size;j++){
//             printf("%d\t",arr3[i][j]);
//         }
//     }
   
// }
// printf("\n\n");
//     return 0;
// }



// 18)
// //18.WAP to find the LCM and GCF of 2 entered numbers.
// #include<stdio.h>
// int main(){
//    int first,second,gcd;
//    printf("Enter first number.\n");
//    scanf("%d",&first);
//    printf("Enter second number.\n");
//    scanf("%d",&second);
//    for (int i=1;i<=first && i<=second;i++){
//        if (first%i==0 && second%i==0){
//            gcd=i;
//        }
//    }
//    int lcm=first*second/gcd;
//    printf("LCM and GCF of %d and %d are %d and %d respectively.\n",first,second,lcm,gcd);
//    return 0;
// }

// 19)
// // 19 WAP to swap 2 names using array of pointers.
// #include<stdio.h>
// int main(){
//    char name1[10],name2[10];
//    char *names[]={name1,name2};
//    printf("Enter first name: \n");
//    scanf("%s",name1);
//    printf("Enter second name: \n");
//    scanf("%s",name2);


//    char *temp=names[0];
//    names[0]=names[1];
//    names[1]=temp;
//    printf("%s %s",names[0],names[1]);
//    return 0;


// }

//20)
// #include<stdio.h>
// int main(){
//     int n;
//     int flag=1;
//     printf("Enter length of the word.");
//     scanf("%d",&n);
//     char word[n];
//     printf("Enter word=>\n");
//     scanf("%s",word);
//     for (int i=0;i<n/2;i++){
//         if (word[i]==word[n-i-1]){
//             flag=1;
//         }
//         else{
//             flag=0;
//             break;
//         }
//     }
//     if (flag==1){
//         printf("Yes, its a pallindrome.");
//     }
//     else{
//         printf("No,not a pallindrome.");
//     }
//     return 0;
// }
