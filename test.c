#include<stdio.h>
void safeprint(void *ptr,int type);
int main(){
    int intarray[10];
    float floatarray[10];
    int *ip=intarray;
    float *fp=floatarray;
    printf("enter int value:");
    for(int i=0;i<10;i++){
        scanf("%d",(ip+i));

    }
    for(int i=0;i<10;i++){
        scanf("%f",(fp+i));
    }
        for(int i=0;i<10;i++){
            printf("value:%d,address:%p\n",*(ip+i),(void*)(ip+i));

        }
        for(int i=0;i<10;i++){
            printf("value:%f,address:%p,\n",*(fp+i),(void*)(fp+i));
        }

        int type;
        printf("enter type:");
        scanf("%d",&type);
        if(type==0){
            int intval;
            printf("enter inval:");
            scanf("%d",&intval);
            safeprint(&intval,type);

        }
        else if(type==1){
            float floatval;
            printf("enter floatval");
            scanf("%f",&floatval);
            safeprint(&floatval,type);
        }
        else{
            printf("invalid");
        }
        printf("null pointer test\n");
        safeprint(NULL,0);
        return 0;

    
}

void safeprint(void *ptr,int type){
    if(ptr==NULL){
        printf("null pointer\n");
        return;
    }
            if(type==0){
            int *p=(int*)ptr;
            printf("Intval:%d\n",*p);
            printf("address:%p\n",(void*)ptr);
            }
            if(type==1){
                int *p=(int*)ptr;
                printf("Floatval:%f\n",*p);
                printf("address:%p\n",(void*)ptr);
            }
}