#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  char S[5000];
  printf("�п�J�n�ഫ���^��r��:");
  while(scanf("%s",S)==1)
      {
      	printf("�B�z�L�᪺�^��r��");
        int a,N=strlen(S);
        for(a=N-1;a>=0;a--)
        printf("%c",S[a]);
        puts(""); 
      } 
 return 0;   
}
