#include<string.h>
#include "bookmodel.h"
#include "filepath.h"
#include "Searchbook.h"
#include "viewbooks.h"
#include "addBook.h"
#include "Editbookrecords.h"
#include "Deletebooks.h"
#include "issueBooksmodel.h"
#include "issuerecords.h"
#include "CloseApplication.h"
void mainmenu(){
	int choice;
	do{ printf("\n\n\n-------------MAIN MENU------------\n\n\n");
		printf("\n\t1 : Add Books");
		printf("\n\t2 : Delete Books");
		printf("\n\t3 : Search Books");
		printf("\n\t4 : Issue Books");
		printf("\n\t5 : View Book List");
		printf("\n\t6 : Edit Book Record");
		printf("\n\t7 : Close The Application");
		printf("\n\n\tEnter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				addbook(b);
				break;
			case 2:
				deletebooks();
				break;
			case 3:
				searchbooks(b);
				break;
			case 4:
				issuebooks();
				break;
			case 5:
				viewbooks();
				break;
			case 6:
				//editbooks();
				editbook();
				break;
			case 7:
				closeapplication();
				break;
				
		}
		
	}while(choice!=7);
}
