void insert(struct node **beg, int val){
	if(*beg == NULL){
		struct node *temp= (struct node*)malloc(sizeof(struct node));
		(temp)->num=val;
		(temp)->link=NULL;
		(*beg)=temp;
	}
	else{
		//printf("\n Entered else");
		struct node *temp= (struct node*)malloc(sizeof(struct node));
		temp->num=val;
		temp->link=*beg;
		(*beg)=temp;
						
	}
}
