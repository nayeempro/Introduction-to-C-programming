#include<stdio.h>

int main(){

//    int ar[5];
//    printf("%d\n",&ar[0]);
//    printf("%d\n",&ar[1]);
//    printf("%d\n",&ar[2]);        //4 byte index increase
//    printf("%d\n",&ar[3]);
//    printf("%d\n",&ar[4]);



//    long long int ar[5];
//    printf("%d\n",&ar[0]);
//    printf("%d\n",&ar[1]);
//    printf("%d\n",&ar[2]);          //8 byte index increase
//    printf("%d\n",&ar[3]);
//    printf("%d\n",&ar[4]);




                //ARRAY INITIALIZATION

// int ar[5] = {1,3,4,5,7};
// for(int i=0; i<5; i++)
// {
//     printf("%d  ",ar[i]);
// }
     //if one increase run error
// int ar[5] = {1,3,4,5,7,9};
// for(int i=0; i<=5; i++)
// {
//     printf("%d  ",ar[i]);
// }
//
// int ar[5] = {};    //if input are less it will be 0;
// for(int i=0; i<5; i++)
// {
//     printf("%d  ",ar[i]);
// }

            //array SUM MAX MIN REVERSE



//     int ar[5];
//
//  for(int i =0; i<5; i++)
//  {
//    scanf("%d",&ar[i]);
//
//  }
//  int sum =0, max=ar[0],min=ar[0],val;
//
//  //SUM
//  for(int i=0; i<5; i++){
//
//    val =ar[i];
//    sum +=val;
//  }
//  printf(" Sum is ----> %d\n",sum);
//
//  //MAX
//  for(int i=1; i<5; i++)
//  {
//      val = ar[i];
//      if (max < val)
//      {
//          max = val;
//      }
//  }
//  printf("Max is ----->%d \n",max);
//
//  //MIN
//  for(int i=1; i<5; i++)
//  {
//      val=ar[i];
//      if(min >val)
//      {
//        min = val;
//      }
//  }
//  printf("Min is --> %d\n",min);
//
//    //REVERSE OF ARRAY
//
//
// for(int i = 4; i>= 0; i--)
// {
//     printf("%d  ",ar[i]);
// }


                //VARIABLE SIZED ARRAY
//
// int size,ar[size];
// scanf("%d",&size);
// for(int i =0;i<size;i++)
// {
//     scanf("%d ",&ar[i]);
// }
//
// for(int i =0;i<size;i++)
// {
//     printf("%d ", ar[i]);
// }

        //sizeof and memset
//
//  int n;
//  scanf("%d",&n);
//  int ar[n];
//  printf("%d\n",sizeof(ar)); //4 byte nibe
//  printf("%d",sizeof(ar)/sizeof(ar[0])); //how manay size are in array
//

//  int n;
//  scanf("%d",&n);
//  int ar[n];        //array er initialize kora jayna
//  memset(ar,0,sizeof(ar)); //problem 0 bade onno kisu hoina
//
//  for(int i=0;i<n;i++)
//  {
//      printf("%d ",ar[i]);
//  }
//
//
//            //COUNTER
//
//int n;
//scanf("%d",&n);
//int ar[n];
//for(int i=0;i<n;i++)
//{
//    scanf("%d",&ar[i]);
//}
//
//int count[11]={0};
//
//for(int i= 0;i<n;i++)
//{
//    int val = ar[i];
//    count[val]++;
//}
//for(int i=0; i<n; i++)
//{
//    int val = ar[i];
//    printf("value --> %d, count --> %d\n",val,count[val]);
//}
//
//printf("\n\n\n\n");
//
//for(int val=0; val<10; val++) //value 10 er beshi hbe nah dore nilam
//{
//
//    printf("value --> %d, count --> %d\n",val,count[val]);
//}
//
//printf("\n\n\n\n");
//
//for(int val=0; val<10; val++) //value 10 er beshi hbe nah dore nilam
//{
//    if(count[val]>0)
//    {
//         printf("value --> %d, count --> %d\n",val,count[val]);
//    }
//
//}
//
//
//
//
//
return 0;
}
