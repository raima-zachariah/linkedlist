void insert(struct node **beg, int val){
	if(*beg == NULL){
		struct node *temp= (struct node*)malloc(sizeof(struct node));
		(temp)->val=val;
		(temp)->next=NULL;
		(*beg)=temp;
	}
	else{
		//printf("\n Entered else");
		struct node *temp= (struct node*)malloc(sizeof(struct node));
		temp->val=val;
		temp->next=*beg;
		(*beg)=temp;
						
	}
}
