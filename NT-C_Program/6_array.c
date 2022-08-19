//#define arr_size 10
int main()
{
    int arr[5][4],i,j,sum=0;
    //s=sizeof(arr)/sizeof(arr[0]);
    printf("First Matrix\n");
    for(i=0;i<5;i++)
    {
      for(j=0;j<4;j++)
      {
          scanf("%d",&arr[i][j]);
      }
    }

    for (j=0;j<4;j++)
    {
        for (i=0;i<5;i++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
   //int arr_name[arr_size], i;

   /*for (i=1;i<=arr_size;i++)
   {
      scanf("%d",&arr_name[i]);
   }

   for (i=1;i<=arr_size;i++)
   {
      printf("position: %d\n Element:%d \n",i,arr_name[i]);
   }*/

}
