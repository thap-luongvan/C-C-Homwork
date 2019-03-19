
#include <stdio.h>
#include <stdlib.h>
#define ID_Length 50
#define Name_Length 100

typedef struct Student {
    char ID[ID_Length];
    char name[Name_Length];
    int grade;

    struct Student* next;

} Student;

Student getStudentInfor();

Student *root;
Student *current;
int position;
int countList = 0;


void sortDecsending() {

}

void addNode() {
   // Student newStudent = getStudentInfor();
   
    Student st;
    fflush(stdin);
    printf("Enter ID: ");
    scanf("%[^\n]s", st.ID);
    fflush(stdin);
    printf("Enter Name: ");
    scanf("%[^\n]s", st.name);
    printf("Enter grade: ");
    scanf("%d", st.grade);
    st.next = NULL;
    
    Student *tempSt = &st ;
    
    if(position == 0) { // Ds dang rong, add luon vao dau danh sach!
        printf("Chay position = 0 \n");
		
		root = tempSt;
        tempSt->next = NULL;
        countList++;
        
        printf("Chay position = 0 \n");
    } 
    if(position == 1) {

        
        printf("chay khoi lenh position 1 \n");
        tempSt->next = root;
        root = tempSt;


    }
	if(position > 1) {
        printf("chay khoi lenh position > 1 \n");
    
        current = root;
        int i;
        for (i = 0; i < position - 2; i++) { //dich chuyen current toi position can add 
            current = current->next;
        }
        // add node vao nay 
        tempSt->next = current->next;
        current->next = tempSt;
        current = tempSt;
    }

}

//int countList() {
//    int count = 0;
//    Student *st = root;
//
//    while (st != NULL) {
//        count++;
//        st = st->next;
//    }
//    
//    printf("Count : %d \n",count);
//    return count;
//}

void printStudentInfor() {
    Student *st;
    st = root;
    
   while (st != NULL) {
            printf("ID : %s\n", st->ID);
            printf("Name : %s\n", st->name);
            printf("Grade : %d\n", st->grade);
            printf("---========---\n");
        st = st->next;
    }
}


int main() {
    root = NULL;
    current = root;
    int i;
    for (i = 0; i < 4; i++) {
 
        if (countList == 0) {
        	position = 0;
            printf("Student list is empty! Insert to index 1 automatically \n");
            addNode();
            
        } else {
//            do {
//                printf("==Student list is not empty!==\n");
          printf("Please chose the position from 1 to %d!\n", countList + 1);
          scanf("%d", &position);
//                if (position <= 0 || position > countList() + 1) printf("Wrong position!Enter again \n");
//            } while (position <= 0 || position > countList() + 1);
            
            printf("In ra root truoc khi goi ham: \n");
            printf("ID : %s\n", root->ID);
            printf("Name : %s\n", root->name);
            printf("Grade : %d\n", root->grade);
            printf("------\n");
            
            printStudentInfor();
            addNode();
           
        }

             }


    return 0;
}

