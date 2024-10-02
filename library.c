#include <stdio.h>
int main () {
	int bookID;
	int DueDate;
	int returnDate;
	int daysoverdue;
	int fineRate;
	int fineamount;
	
	printf("enter the bookID:");
	scanf("%d" ,&bookID);
	
	printf("enter the DueDate:");
	scanf("%d" ,&DueDate);
	
	printf("enter returnDate:");
	;scanf("%d" ,&returnDate);
	
	daysoverdue=returnDate-DueDate;
	if(daysoverdue<=7){
    fineRate=20;
	}
	else if(daysoverdue<=14){
    fineRate=50;
	}
	else if 
		(daysoverdue>=15){
    fineRate=100;
	}
    fineamount=daysoverdue*fineRate;
    
    printf("ID book:%d\n",bookID);
printf("DueDate:%d \n",DueDate);
printf("returnDate:%d \n",returnDate);
printf("daysoverdue:%d \n",daysoverdue);
printf("fineRate:%d \n",fineRate);
printf("fineamount:%d \n",fineamount);
    
    
    
    
    
     return 0;
	
	
	
	
}