int search(struct node *head, int key)
{
        int c=0;
    while (head != NULL)
    {
        if (head->num == key)
        {
            printf("key found\n");
            return c;
        }
        c++;
        head = head->next;
    }
    printf("Key not found\n");
    return c;
}
