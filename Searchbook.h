void searchbooks(struct Book b){
	int bookid,flag;
    fptr=fopen("C:\\Users\\Gajanan\\Documents\\GTH PRACTICAL\\all c lang\\library managment system project\\demo.txt","r");
     if(fptr==NULL){
     	printf("\tRecords not found..");
	 }else{
	 	flag=0;
	 	printf("\tEnter Book Id :");
	    scanf("%d",&bookid);
	    while(fscanf(fptr,"%d%d%s%s%d%d",&b.id,&b.price,&b.name,&b.author,&b.count,&b.rackno)!=-1){
	    	    if(b.id==bookid)
         	    {
         	    	flag=1;
				    break;
				 }
			 }
	 }
	 
	  if(flag){
	  	printf("\n\tId\tPrice\tBName\tAName\tCount\tRackno\n");
	 	printf("\t%d\t%d\t%s\t%s\t%d\t%d",b.id,b.price,b.name,b.author,b.count,b.rackno);
	 }else{
	 	printf("\n\tBook not found..");
	 }
    fclose(fptr);	
	
}
