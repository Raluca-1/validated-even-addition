#include<stdio.h>
#include<conio.h>

int main(){
 int a,b,suma;
    printf("Introduceti primul numar par de la tastatura:");
    scanf("%d",&a);
    printf("Introduceti al doilea numar par de la tastatura:");
    scanf("%d",&b);


    if((a%2==0 && a>0 && a<20 )&&(b%2==0 && b>0 && b<20)){
            suma=a+b;
            printf("Suma celor doua numere pare este:%d",suma);
    }else{
             printf("Nu ati introdus numar par sau este un numar mai mare decat 20!");
             }



getch();
return 0;
}

