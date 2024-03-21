#include <stdio.h>
int main()
 {
    int i, num1,num2,num,count;
    printf("enter the starting range: ");
    scanf("%d",&num1);
    printf("enter the Ending range: ");
    scanf("%d",&num2);
    for (num = num1; num <= num2; num++) 
	{
        count = 0;
        for (i = 2; i <= num / 2; i++)
		 {
            if (num % i == 0) 
			{
                count++;
                break;
            }
        }
        if (count == 0 && num != 1) 
		{
            printf("%d ", num);
        }
    }
    return 0;
}

