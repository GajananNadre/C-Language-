#include "filelogin.h"
#include<string.h>
struct Login{
	char user[30];
	char pass[30];
};
struct Login l;
void loginlab(){
    fp=fopen("C:\\Users\\Gajanan\\Documents\\GTH PRACTICAL\\all c lang\\library managment system project\\login.txt","w");
	if(fp==NULL){
		printf("\tFile path not found..!");
	}else{
		char user_name[30]="Gajanan";
		char password_[30]="Nadre";
		strcpy(l.user,user_name);
		strcpy(l.pass,password_);
		fputs(l.user,fp);
		fputs("\n",fp);
		fputs(l.pass,fp);
		fclose(fp);
	}
}
