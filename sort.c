void sort(node* &top)
{
	int count = 0;
	node* tmp = top;
	while(tmp!=NULL)
	{
		tmp = tmp->next;
		count++;
	}

	if (count==0)
		return;
	int k;
	for(k=0; k < count-1; k++)
	{
		node *inode;
		printf("Hey!\n");
		int i;
		for(i=0, inode=top; i<count-k-1; i++, inode=inode->next)
			if(inode->data > inode->next->data)
			{
				int tmpdata = inode->data;
				inode->data = inode->next->data;
				inode->next->data = tmpdata;
			}
	}
}

