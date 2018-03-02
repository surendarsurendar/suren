#include <stdio.h>
#include<conio.h>
int main() {
	char str[25];
	int l=strlen(str);
	int count=1;
	for(int i=0;i<=l;i++)
	{
		if(str[i]=='.')
		{
			count=count+1;
		}
	}
	printf("The total no of lines in the paragraph are %d",count);
	return 0;
}
