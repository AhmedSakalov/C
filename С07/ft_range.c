#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int i;

	i = 0;
	int *a = (int *)malloc((max - min - 1) * 4);
	if((min - max) >= 0)
	{
	    printf("min > max");
		return 0;
	}
	while(i < (max - min - 1))
	{
		a[i] = min + i;
		i++;
	}
	return a;
}

int main(){
	int *b = ft_range(11, 10);
	int i = 0;
	while(i < 10){
	    b[i] = i;
		printf("%d", b[i]);
		i++;
	}

	return 0;
}rn 0;
}
