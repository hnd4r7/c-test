#include<stdio.h>
#include<string.h>

struct Person{
    char name[64];
    int age;
};

typedef struct Person myPerson;

int calArrSize(int arr[]){
    return sizeof arr;
}

int calArrSize2(int * arr){
    return sizeof arr;
}

char* func(){
	char p[] = "hello world!"; //在栈区存储 乱码
	printf("%s\n", p);
	return p;
}

void test(){
	char* p = NULL;
	p = func();  
	printf("next time: %s\n",p);  // p 已经被释放
}

int main(){
    char buf[1024];
    strcpy(buf, "helloworld");

    struct Person p = {"张阿三",11};
    myPerson p2 = {"李四", 12};

    // char* p1,p2;
    typedef char* PCHAR;
    PCHAR p3, p4; 

    int* p5;

    // p5 = p3;
    p5 = (int*)p3;

    double d = 3.14;
    printf("%d\n", sizeof d);

    unsigned int a = 3;
    printf("%u\n", a - 4);
    printf("%d\n", a - 4);
    if (a -4 > 0){
        printf("bigger than 0\n");
    }

    void* p6 = p5;
    printf("%d\n", sizeof p6);

    char* c1;
    int* c2;

    printf("%d\n",sizeof c1);
    printf("%d\n",sizeof c2);

    int arr[] = {1,3,4,5,6,5};
    printf("%d\n",sizeof arr);

    //数组退化指针
    printf("%d\n",calArrSize(arr));
    printf("%d\n",calArrSize2(arr));

    struct Person * pp = &p;
    pp->age = 100;
    printf("%d\n",p.age);
    
    char * pchar = &p;
    printf("%d\n",*(int*)(pchar+64));

    test();

    return 0;
}

