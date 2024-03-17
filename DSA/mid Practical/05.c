
#include<stdio.h>  
#include<stdlib.h>  

struct node   
{  
    int data;  
    struct node *link;   
};  
struct node *start = NULL , *start2 = NULL;  

void insert_at_beg(int item){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    if (start == NULL){
        start = temp;
        temp->link = NULL;
    } else {
        temp->link = start;
        start = temp;
    }
}
void display(){
    struct node *ptr;
    ptr = start;
    if (ptr == NULL){
        printf("List is empty\n");
        return;
    }
    while (ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
void insert_at_end(int item){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->link = NULL;
    if (start == NULL){
        start = temp;
        return;
    }
    ptr = start;
    while (ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}
void insert_at_pos(int pos, int item){
   
    if (start == NULL){
        printf("List is empty\n");
        return;
    }
    else if (pos == 1){
        insert_at_beg(item);
    }
    else{
        struct node *temp, *ptr;
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = item;
        int i;
        ptr = start;
        for (i = 1; i < pos - 1; i++){
            ptr = ptr->link;
            if (ptr == NULL){
                printf("There are less than %d elements\n", pos);
                return;
            }
        }
        temp->link = ptr->link;
        ptr->link = temp;
    }

}
void delete_at_beg(){
    struct node *ptr;
    if (start == NULL){
        printf("List is empty\n");
        return;
    }
    ptr = start;
    start = start->link;
    free(ptr);
}
void delete_at_end(){
    struct node *ptr, *preptr;
    if (start == NULL){
        printf("List is empty\n");
        return;
    }
    if (start->link == NULL){
        ptr = start;
        start = NULL;
        free(ptr);
        return;
    } else {
        ptr = start;
        while (ptr->link != NULL){
            preptr = ptr;
            ptr = ptr->link;
        }
        preptr->link = NULL;
        free(ptr);
    }
}
void delete_at_pos(int pos){
    struct node *ptr, *preptr;
    int i;
    if (start == NULL){
        printf("List is empty\n");
        return;
    }
    if (pos == 1){
        ptr = start;
        start = start->link;
        free(ptr);
        return;
    } else {
        ptr = start;
        for (i = 1; i < pos; i++){
            preptr = ptr;
            ptr = ptr->link;
            if (ptr == NULL){
                printf("There are less than %d elements\n", pos);
                return;
            }
        }
        preptr->link = ptr->link;
        free(ptr);
    }
}
void search(int item){
    struct node *ptr;
    int pos = 1;
    ptr = start;
    while (ptr != NULL){
        if (ptr->data == item){
            printf("Item %d found at position %d\n", item, pos);
            return;
        }
        ptr = ptr->link;
        pos++;
    }
    printf("Item %d not found in list\n", item);
}
void insert_second_link(int item){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->link = NULL;
    if (start2 == NULL){
        start2 = temp;
        return;
    }
    ptr = start2;
    while (ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}
void add_value_to_list(){
    int i,n;
    printf("Enter the number of items in second list ");
    scanf("%d", &n);
    for( i=0; i<n; i++){
        int item;
        printf("Enter the value of item %d: ", i+1);
        scanf("%d", &item);
        insert_second_link(item);
    }
}
void concatinate(){
     struct node *ptr;
     ptr = start; 
     if (ptr == NULL){
        printf("List 1 is empty\n");
        return;
    }
    printf("enter the vlues to add in second\n");
    add_value_to_list();
    while (ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = start2;

}


int main(){
    int choice, item,pos;
    while (1){
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from position\n");
        printf("7. Search\n");
        printf("8. Concatinate\n");
        printf("9. Display\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf("Enter item to insert: ");
                scanf("%d", &item);
                insert_at_beg(item);
                break;
            case 2:
                printf("Enter item to insert: ");
                scanf("%d", &item);
                insert_at_end(item);
                break;
            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);
                printf("Enter item to insert: ");
                scanf("%d", &item);
                insert_at_pos(pos, item);
                break;
            case 4:
                delete_at_beg();
                break;
            case 5:
                delete_at_end();
                break;
            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                delete_at_pos(pos);
                break;
            case 7:
                printf("Enter item to search: ");
                scanf("%d", &item);
                search(item);
                break;
            case 8:
                concatinate();
                break;
            case 9:
                display();
                break;
            case 10:
                exit(1);
            default:
                printf("Invalid choice\n");
        }
    }
  
    return 0;
}
  

