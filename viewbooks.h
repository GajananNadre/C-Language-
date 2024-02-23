void viewbooks(){        //this function is used to get the list of all records
	fptr=fopen("C:\\Users\\Gajanan\\Documents\\GTH PRACTICAL\\all c lang\\library managment system project\\demo.txt","r");
    if(fptr==NULL){    //if file  is not found then show msg;
    	printf("\tRecords not found..");
	}  
	else
	{   printf("\n available books\n");
	    printf("\n\tId\tPrice\tBName\tAName\tCount\tRackno\n");
	//this loop read all records until eof
		while(fscanf(fptr,"%d%d%s%s%d%d",&b.id,&b.price,&b.name,&b.author,&b.count,&b.rackno)!=-1){ 
			
			//printing all records
    	       printf("\t%d\t%d\t%s\t%s\t%d\t%d\n",b.id,b.price,b.name,b.author,b.count,b.rackno);
    	    
         	}
         	fclose(fptr);	//closing file pointer
	}
}
