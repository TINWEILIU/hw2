#include <stdio.h>
#include <string.h>
	int main(void){

	char str[50];
	char str1[] = "hello";
	char str2[] = "makerbar";
	char str3[] = "exit";
	
		while(1){
			printf("->");
			scanf("%s",str);

				if(strcmp(str,str1)==0){
					printf("Hello world\n");
				}else if(strcmp(str,str2)==0){
					printf("PU makerbar\n");
				}else if(strcmp(str,str3)==0){
					printf("You can leave:)\n");
						return 0;
				}else{
					printf("wrong!\n");
				}	
}
		return 0;
}
