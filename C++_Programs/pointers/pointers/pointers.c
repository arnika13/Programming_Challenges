/* introduction to pointers*/
#include<stdio.h>
#include<string.h>
void main()
{
	/*
	int a=1025;
	int *p;
	p = &a;
	
	printf("The value at P is:  %d\n", p);
	printf("The value of &a is %d\n", &a);
	printf("the value of &p is: %d \n", &p);
	printf("the value of *p is : %d \n", *p);
	*p = 6;
	printf("The new value of a is : %d \n", a);
	

	printf("size of integer is %d bytes \n", sizeof(int));
	printf("address = %d, value = %d \n", p, *p);
	printf("address = %d, value = %d \n", p+1, *(p+1)); // move the pointer p to 4 bytes ahead as we gave p+1, and *(p+1) we didnt store any value at this location so its gonna take some garbage value.
	char *p0;
	p0 = (char*)p; // typecasting 
	printf("size of char is %d bytes \n", sizeof(char));
	printf("address = %d, value = %d \n", p0, *p0);
	printf("address = %d, value = %d \n", p0 + 1, *(p0 + 1)); // 1025= 00000000 00000000 00000100 00000001, first byte value is 1 and when *(p0+1) = moves to second byte value i.e. 4.
	*/
	/* pointers to pointers*/
	/*
	int x = 5;

	int *p;
	p = &x;
	int **q;
	q = &p;
	int ***r;
	r = &q;
	printf("address = %d, value = %d, address of x= %d \n", p, *p, &x);
	printf("address = %d, value = %d , value= %d \n", q, *q,*(*q));
	printf("address = %d, value = %d , value= %d, value= %d \n", r, *r, *(*r), ***r);
	*/
	/* pointers and array*/
	
	int a[] = { 1,2,3,4,5 };
	printf("address = %d\n", &a[0]);
	printf("address = %d\n",a);
	printf("value= %d\n", *a);
	printf("value= %d\n", a[0]);
	
	

}

