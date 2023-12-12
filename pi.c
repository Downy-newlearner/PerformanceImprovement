/*Performance Test, Dahun Chung(jdh251425142514@gmail.com)*/
/*Dankook Univ. System Programming Class-2 2023/12/12*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

typedef int data_t;

#define IDENT 0

typedef struct{
    int len;
    data_t *data;
} vec_rec, *vec_ptr;

void split2(vec_ptr v){
    data_t result;

    int i;
    int len = v->len;
    data_t *data = v->data;
    data_t x0 = IDENT;
    data_t x1 = IDENT;

    for(i=0; i<len; i+=2){
        x0 = x0 * data[i];
        x1 = x1 * data[i+1];
    }
    for(;i<len;i++){
        x0 = x0 * data[i];
    }

    result = x0 * x1;    
}

void split4(vec_ptr v){
    data_t result;

    int i;
    int len = v->len;
    data_t *data = v->data;
    data_t x0 = IDENT;
    data_t x1 = IDENT;
    data_t x2 = IDENT;
    data_t x3 = IDENT;

    for(i=0; i<len; i+=4){
        x0 = x0 * data[i];
        x1 = x1 * data[i+1];
        x2 = x2 * data[i+2];
        x3 = x3 * data[i+3];
    }
    for(;i<len;i++){
        x0 = x0 * data[i];
    }

    result = x0 * x1 * x2 * x3;    
}

void split6(vec_ptr v){
    data_t result;

    int i;
    int len = v->len;
    data_t *data = v->data;
    data_t x0 = IDENT;
    data_t x1 = IDENT;
    data_t x2 = IDENT;
    data_t x3 = IDENT;
    data_t x4 = IDENT;
    data_t x5 = IDENT;

    for(i=0; i<len; i+=6){
        x0 = x0 * data[i];
        x1 = x1 * data[i+1];
        x2 = x2 * data[i+2];
        x3 = x3 * data[i+3];
        x4 = x4 * data[i+4];
        x5 = x5 * data[i+5];
    }
    for(;i<len;i++){
        x0 = x0 * data[i];
    }

    result = x0 * x1 * x2 * x3 * x4 * x5;    
}

void split8(vec_ptr v){
    data_t result;

    int i;
    int len = v->len;
    data_t *data = v->data;
    data_t x0 = IDENT;
    data_t x1 = IDENT;
    data_t x2 = IDENT;
    data_t x3 = IDENT;
    data_t x4 = IDENT;
    data_t x5 = IDENT;
    data_t x6 = IDENT;
    data_t x7 = IDENT;

    for(i=0; i<len; i+=8){
        x0 = x0 * data[i];
        x1 = x1 * data[i+1];
        x2 = x2 * data[i+2];
        x3 = x3 * data[i+3];
        x4 = x4 * data[i+4];
        x5 = x5 * data[i+5];
        x6 = x6 * data[i+6];
        x7 = x7 * data[i+7];
    }
    for(;i<len;i++){
        x0 = x0 * data[i];
    }

    result = x0 * x1 * x2 * x3 * x4 * x5 * x6 * x7;    
    
}

void split10(vec_ptr v){
    data_t result;

    int i;
    int len = v->len;
    data_t *data = v->data;
    data_t x0 = IDENT;
    data_t x1 = IDENT;
    data_t x2 = IDENT;
    data_t x3 = IDENT;
    data_t x4 = IDENT;
    data_t x5 = IDENT;
    data_t x6 = IDENT;
    data_t x7 = IDENT;
    data_t x8 = IDENT;
    data_t x9 = IDENT;

    for(i=0; i<len; i+=10){
        x0 = x0 * data[i];
        x1 = x1 * data[i+1];
        x2 = x2 * data[i+2];
        x3 = x3 * data[i+3];
        x4 = x4 * data[i+4];
        x5 = x5 * data[i+5];
        x6 = x6 * data[i+6];
        x7 = x7 * data[i+7];
        x8 = x8 * data[i+8];
        x9 = x9 * data[i+9];
    }
    for(;i<len;i++){
        x0 = x0 * data[i];
    }

    result = x0 * x1 * x2 * x3 * x4 * x5 * x6 * x7 * x8 * x9;    
}

int main(int argc, int* argv){
    //사용할 구조체 생성
    int len = argv[1];
    if(len<=0)
        return 0;
    vec_ptr st = (vec_ptr) malloc(sizeof(vec_rec));
    st->len = len;
    data_t *data = (data_t *) calloc(len, sizeof(data_t));
    st->data = data;
        
    if(argc==2){
        
    

        struct timeval stime, etime, gap;

        gettimeofday(&stime, NULL);
        split2(st);
        gettimeofday(&etime, NULL);

        gap.tv_sec = etime.tv_sec - stime.tv_sec;
        gap.tv_usec = etime.tv_usec - stime.tv_usec;
        if(gap.tv_usec < 0){
            gap.tv_sec -= 1;
            gap.tv_usec += 1000000;
        }

        printf("Elapsed time of split2 %Idsec : %Idusec\n", gap.tv_sec, gap.tv_usec);

        // struct timeval stime, etime, gap;
        gettimeofday(&stime, NULL);
        split4(st);
        gettimeofday(&etime, NULL);

        gap.tv_sec = etime.tv_sec - stime.tv_sec;
        gap.tv_usec = etime.tv_usec - stime.tv_usec;
        if(gap.tv_usec < 0){
            gap.tv_sec -= 1;
            gap.tv_usec += 1000000;
        }

        printf("Elapsed time of split4 %Idsec : %Idusec\n", gap.tv_sec, gap.tv_usec);

        // struct timeval stime, etime, gap;
        gettimeofday(&stime, NULL);
        split6(st);
        gettimeofday(&etime, NULL);

        gap.tv_sec = etime.tv_sec - stime.tv_sec;
        gap.tv_usec = etime.tv_usec - stime.tv_usec;
        if(gap.tv_usec < 0){
            gap.tv_sec -= 1;
            gap.tv_usec += 1000000;
        }

        printf("Elapsed time of split6 %Idsec : %Idusec\n", gap.tv_sec, gap.tv_usec);

        // struct timeval stime, etime, gap;
        gettimeofday(&stime, NULL);
        split8(st);
        gettimeofday(&etime, NULL);

        gap.tv_sec = etime.tv_sec - stime.tv_sec;
        gap.tv_usec = etime.tv_usec - stime.tv_usec;
        if(gap.tv_usec < 0){
            gap.tv_sec -= 1;
            gap.tv_usec += 1000000;
        }

        printf("Elapsed time of split8 %Idsec : %Idusec\n", gap.tv_sec, gap.tv_usec);

        // struct timeval stime, etime, gap;
        gettimeofday(&stime, NULL);
        split10(st);
        gettimeofday(&etime, NULL);

        gap.tv_sec = etime.tv_sec - stime.tv_sec;
        gap.tv_usec = etime.tv_usec - stime.tv_usec;
        if(gap.tv_usec < 0){
            gap.tv_sec -= 1;
            gap.tv_usec += 1000000;
        }

        printf("Elapsed time of split10 %Idsec : %Idusec\n", gap.tv_sec, gap.tv_usec);
    }
    else{
        printf("Usage: command length");
    }
    printf("I'm runnig");
}