#include<stdio.h>
main(){
FILE *fp;
char ch;
fp=fopen("sample_text.txt","w");
printf("Enter Data..");
while((ch==getchar()) !=EOF){
	putchar(ch,fp);
}
fclose(fp);
fp=fopen("sample_text.txt","r");

while((ch=getchar(fp) !=EOF))
	printf("%c",ch);

fclose(fp);

return 0;

}
