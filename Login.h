#include "Loginmodel.h"
#include "mainapplication.h"
void password(){
loginlab();
int cnt=1;
char username[30];
char password[30];
fp=fopen("C:\\Users\\Gajanan\\Documents\\GTH PRACTICAL\\all c lang\\library managment system project\\login.txt","r");
if(fp==NULL){
		printf("\tFile path not found..!");
	}
	printf("\tWELCOME TO LIBRARY MANAGEMENT SYSTEM\n\n");
	printf("\tLogin to application\n\n");
	do{
		printf("\n\tUSERNAME :");
    	scanf("%s",username);
		printf("\n\tPASSWORD :");
		scanf("%s",password);
		if((!strcmp(username,l.user))&&(!strcmp(password,l.pass))){
		    mainmenu();
		}else{
			printf("\n\n\t\tInvalid Username or Password, please Enter again..\n\n");
			cnt++;
		}
	}while(cnt<=3);
	if(cnt>3){
		printf("\t\tLogin Faild..Unknown user..!\n");
		exit(1);
	}
	fclose(fp);
}
