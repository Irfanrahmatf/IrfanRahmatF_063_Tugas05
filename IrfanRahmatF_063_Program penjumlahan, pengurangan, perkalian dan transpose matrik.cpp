#include<stdio.h>
#include<conio.h>
int main()
{
   int m,n,a[20][20],b[20][20],i,j,sum[20][20],sub[20][20],opt,tr[20][20],opt1,ch,e,f;
      printf("Catatan : Untuk Penambahan atau Pengurangan , no. baris dan kolom harus sama dan untuk transpos matriks , matriks pertama yang Anda masukkan harus matriks yang diinginkan .\n");
      printf("Masukkan no. dari baris: ");
      scanf("%d",&m);
      printf("Masukkan no. kolom: ");
      scanf("%d",&n);
      printf("Masukkan Elemen Data dari matriks pertama\n");
    for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
     } printf("Masukkan no. dari baris untuk matriks kedua: ");
      scanf("%d",&e);
      printf("Masukkan no. kolom: ");
      scanf("%d",&f);
      printf("Masukkan Elemen Data dari matriks kedua\n");
     for(i=0;i<e;i++)
     {
       for(j=0;j<f;j++)
        {
          scanf("%d",&b[i][j]);
        }
     }
    do
      {
      if(m==e&&n==f)
     {
           printf("Masukkan 1 untuk penjumlahan atau pengurangan matriks");
           if(n==e){printf("Masukkan 2 untuk perkalian matriks\n");}
           printf("Masukkan 3 untuk transpos matriks pertama\n");
     }
   else if(m!=n&&n==e)
     {
           printf("Masukkan 2 untuk perkalian matriks\n");
           printf("Masukkan 3 untuk transpos matriks pertama\n");
     }
else
{
printf("Masukkan 3 untuk transpos matriks pertama\n\n");
}
   scanf("%d",&ch);
   switch(ch)
    {
        case 1 :
     for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
           sub[i][j]=a[i][j]-b[i][j];
        }
      }
       printf("Masukkan 1 untuk Penambahan atau 2 untuk Pengurangan: ");
       scanf("%d",&opt);
       switch(opt)
    {
         case 1 :
       printf("Matriks yang dihasilkan adalah :\n\n");
     for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
           printf("%3d",sum[i][j]);
        }
             printf("\n");
      }
      break;
         case 2 :
       printf("Matriks yang dihasilkan adalah :\n");
     for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
           printf("%3d",sub[i][j]);
        }
           printf("\n");
      }
    }
      break;
       case 2 :
            printf("Matriks yang dihasilkan adalah :\n");
            int k;
            for(i=0;i<m;i++)
            {
              for(j=0;j<f;j++)
              { sum[i][j]=0;
                for(k=0;k<m;k++)
                {
                  sum[i][j]+=a[i][k]*b[k][j];
                }
                printf("%d\t",sum[i][j]);
              }
              printf("\n");
            }
       break;
       case 3 :
           for(i=0;i<m;i++)
              {
                for(j=0;j<n;j++)
                {
                   tr[j][i]=a[i][j];
                }
              }
            printf("Matriks yang dihasilkan adalah :\n");
             for(i=0;i<n;i++)
              {
                 for(j=0;j<m;j++)
               {
                    printf("%3d",tr[i][j]);
               }
                    printf("\n");
              }

      break;  }}
     while(ch>0);
    getch();
}
