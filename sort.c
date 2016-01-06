void sort(node ** top)
{
	int count = 0;
	node* tmp = top;
	while(tmp!=NULL)
	{
		tmp = tmp->link;
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
		for(i=0, inode=top; i<count-k-1; i++, inode=inode->link)
			if(inode->num > inode->link->num)
			{
				int tmpnum = inode->num;
				inode->num = inode->link->num;
				inode->link->num = tmpnum;
			}
	}
}
