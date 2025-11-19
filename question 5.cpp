#include <stdio.h>
int main(){
	int CourseFull, Prerequisite;
	printf("Enter 0 if seats are available\n");
	scanf(" %d",&CourseFull);
	printf("If prerequisite is avaialable then enter 1\n");
	scanf("%d",& Prerequisite);
	if (CourseFull==0 && Prerequisite==1){
		printf("Enrolled Successfully");
	}
	else if(CourseFull!=0 && Prerequisite==1){
		printf("Can not enroll, course is full");
	}
	else if(CourseFull==0 && Prerequisite!=1){
		printf("Can not enroll, prerequisite missing");
	}
	else if(CourseFull==0 && Prerequisite==1){
		printf("Can not enroll, prerequisite missing and course id full");
	}
    return 0;	
}
