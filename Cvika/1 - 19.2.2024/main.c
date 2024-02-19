#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int plat;
}osoba;

int isLeap(int rok);
void daysInMonth(int month, int year);
void isPrime(int num);
void decToBin(int num);
void maxArray(osoba *osoby);
int power(int x, int y);


int main()
{
    int array[10] = {2341,13241,13241,3214,14312,34213,43123,34132,4313,43124};

    osoba *osoby;

    osoby = (osoba*)malloc(10 * sizeof(osoba));

    for (int i = 0; i < 10; i++)
    {
        osoby[i].plat = array[i];
    }
    


    
    if(isLeap(2024))
        printf("\nis a leap year");
    else
        printf("\nis not a leap year");


    daysInMonth(2, 2020);
    isPrime(13);
    decToBin(123);
    maxArray(osoby);



    return 0;
}

int isLeap(int rok)
{
    if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
        return 1;
    else
        return 0;
}

void daysInMonth(int month, int year)
{
    int days;
    switch (month)
    {
    case 1:
        days = 31;
        break;
    case 2:
        if(isLeap(year))
            days = 29;
        else
            days = 28;
        break;
    case 3:
        days = 31;
        break;
    case 4:
        days = 30;
        break;
    case 5:
        days = 31;
        break;
    case 6:
        days = 30;
        break;
    case 7:
        days = 31;
        break;
    case 8:
        days = 31;
        break;
    case 9:
        days = 30;
        break;
    case 10:
        days = 31;
        break;
    case 11:
        days = 30;
        break;
    case 12:
        days = 31;
        break;
    }

    printf("\nThere are %d days in the month %d", days, month);
}

void isPrime(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            count++;
    }

    if(count == 0)
    {
        printf("\nnumber %d is prime", num);
    }
    else
    {
        printf("\nnumber %d is not a prime", num);
    }   
}

void decToBin(int num)
{
    int *binNum;
    int tmp, startNum = num;
   
    binNum = (int*)malloc(8 * sizeof(int));

    for (int i = 0; num > 0; i++)
    {
        binNum[i] = num % 2;
        num /= 2;
    }

    for (int i = 0; i < 8 / 2; i++){
        tmp = binNum[i];
        binNum[i] = binNum[8 - i - 1];
        binNum[8 - i - 1] = tmp;
    }


    printf("\nnumber %d in binary is ", startNum);
    for (int i = 0; i < 8; i++)
    {
        printf("%d",binNum[i]);
    }
    
}

void maxArray(osoba *osoby)
{
    int max = 0, i;
    for (i = 0; i < 10; i++)
    {
        if (max < osoby[i].plat)
            max = osoby[i].plat;
    }
    
    printf("\nthe highest salary is %d of person %d\n", max, i + 1);
}

int power(int x, int y)
{
    int mem = x;
    for (y; y > 1; y--)
    {
        x *= mem;
    }
    return x;
}