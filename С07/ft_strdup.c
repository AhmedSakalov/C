#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    //считаем сколько памяти выделить
	int i = 0;
	//считаем количество байтов на строку(char 1 byte)
	while(src[i] != '\0'){
		i++;
	}
	//выделяем память на хранение дублируемой строки
	/*
	в данном случае ломаем malloc ;)
	*/
	char *a = (char *)malloc(10000000000000);
	//если ось дала отказ на память, вернем 0
	if(NULL == a){
	    return 0;
	}
	//копируем значения лежащие в поинтерах
	a = src;
	//возвращаем строку назначения
	return a;
}

int main(){
	char *a = "dsfsdfsfsdhks";
	char *s = ft_strdup(a);
	printf("%s", s);
	return 0;
}
