void issuebooks(){  //this function is used to keep record of isseued books

int choice;
do{
	printf("\n\n\t1. Add issue book record");
	printf("\n\t2. display issue book record");
	printf("\n\t3. MainMenu");
	printf("\n\n\tEnter choice for issue record : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		
		       fptr2=fopen("C:\\Users\\Gajanan\\Documents\\GTH PRACTICAL\\all c lang\\library managment system project\\issuerecord.txt","a");
	           if(fptr2==NULL){
		              printf("\tFile path not found..!");
	           }else{
	     			printf("\tEnter id :");
					scanf("%d",&ib.id);
					printf("\n\tEnter student name :");
					scanf("%s",&ib.stname);
					printf("\n\tEnter bookname :");
					scanf("%s",&ib.name);
					printf("\n\tEnter catgeory :");
					scanf("%s",&ib.cat);
					printf("\n\tEnter issue date in(dd/mm/yy):");
					scanf("%d%d%d",&ib.issue.tm_mday,&ib.issue.tm_mon,&ib.issue.tm_year);
					printf("\n\tEnter due date in(dd/mm/yy):");
					scanf("%d%d%d",&ib.duedate.tm_mday,&ib.duedate.tm_mon,&ib.duedate.tm_year);
					fprintf(fptr2,"%d\t%s\t%s\t%s\t%d %d %d\t%d %d %d",ib.id,ib.stname,ib.name,ib.cat,
					ib.issue.tm_mday,ib.issue.tm_mon,ib.issue.tm_year,ib.duedate.tm_mday,ib.duedate.tm_mon,ib.duedate.tm_year);
					fputs("\n",fptr2);
					printf("\n\tIssue record added successfully..!");
					fclose(fptr2);
					//fflush(stdin);
				}
	        
	        break;
	    case 2:
	
				fptr2=fopen("C:\\Users\\Gajanan\\Documents\\GTH PRACTICAL\\all c lang\\library managment system project\\issuerecord.txt","r");
	    		if(fptr2==NULL){
		   			 printf("\tFile path not found..!");
	    		}else{
	    			printf("\tId\tsname\tBname\tcat\tissue_date\tDue_date\n");
		     		while(fscanf(fptr2,"%d%s%s%s%d%d%d%d%d%d",&ib.id,&ib.stname,&ib.name,&ib.cat,&ib.issue.tm_mday,&ib.issue.tm_mon,&ib.issue.tm_year,&ib.duedate.tm_mday,&ib.duedate.tm_mon,&ib.duedate.tm_year)!=-1){
    	         				printf("\t%d\t%s\t%s\t%s\t%d %d %d\t%d %d %d\n",ib.id,ib.stname,ib.name,ib.cat,ib.issue.tm_mday,ib.issue.tm_mon,ib.issue.tm_year,ib.duedate.tm_mday,ib.duedate.tm_mon,ib.duedate.tm_year);
         				}
         		      fclose(fptr2);	
	      		}
      		
	  		break;
		case 3:
		   mainmenu();
		   break;	
	}
}while(choice!=4);

}

