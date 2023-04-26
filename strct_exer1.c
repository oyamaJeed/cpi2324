#include <stdio.h>

#ifndef USER_COM_ENA
	#define USER_COM_ENA
#endif

#include "exer_com.h"

int main(int argv, char *argc[])
{
	ST_EXER	st_val = {'1','2', "Good morning!"};	
	ST_EXER *st_val_p = &st_val;

	printf("*** Before ****\n");

	printf("struct from=%c\n", st_val_p->from);
	printf("struct to=%c\n", st_val.to);
	printf("struct msg=");
	for(int i=0 ; st_val_p->msg[i] != NULL; i++){
	printf("%c",st_val_p->msg[i]);
	}
	printf("\n");

	ST_EXER st_vall = {'A','B',"This is a pen!"};
	ST_EXER *st_vall_p = &st_vall;
	
	printf("*** After ****\n");

	printf("struct from=%c\n", st_vall_p->from);
	printf("struct to=%c\n", st_vall.to);
	printf("struct msg=");
	for(int i=0 ; st_vall.msg[i] != NULL ; i++){
	printf("%c",st_vall.msg[i]);
	}
	printf("\n");
	
	printf("COM_VALUE=%d\n", COM_VALUE);

	return 0;
}
