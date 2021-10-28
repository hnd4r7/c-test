#include <stdio.h>

void test01(int a , char b){
    printf("%d\n",a);
}

void testFunc00(){
    void(*pFunc)(int,char) = test01;
    pFunc(10,'c');
}

void testFunc01(){
    int * p = (int * )4199760;
    void (*pFunc)(int,char) = (void (*) (int,char))p;
    pFunc(10,'c');
}

void testFunc02(){
    typedef void(myfun)(int, char);
    myfun * f = test01;
    f(11,'c');
}

void testFunc03(){
    typedef void(*myfun)(int, char);
    myfun f = test01;
    f(12,'c');
}

void myPrint(void* data,void(f)(void*)){
    printf("%s\n","start print");
    f(data);
    printf("%s\n","end print");
}

void myPrintArray(void* arr,int eleSize, int len ,void(f)(void*)){
    char * p = arr;
    for(int i = 0; i < len ; i ++){
        char * addr = p + eleSize* i;
        f(addr);
    }
}

void printInt(void* data){
    int * intData = data;
    printf("%d\n", *intData);
}

int main()
{
    printf("%d\n",test01);
    testFunc00();
    testFunc01();
    testFunc02();
    testFunc03();

    int a = 222;
    myPrint(&a,printInt);

    int arr[] = {1,2,3,4,5};
    myPrintArray(arr,sizeof(arr[0]),5,printInt);

    return 0;
}