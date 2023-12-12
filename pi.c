/*Performance Test, Dahun Chung(jdh251425142514@gmail.com)*/
/*Dankook Univ. System Programming Class-2 2023/12/12*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

typedef int data_t;

void split2(int len, int *data){
    data_t result;

    int i;
    data_t x0 = 0;
    data_t x1 = 0;

    for(i=0; i<len; i+=2){
        x0 = x0 * data[i];
        x1 = x1 * data[i+1];
    }
    for(;i<len;i++){
        x0 = x0 * data[i];
    }

}

void split4(int len, int *data){
    data_t result;

    int i;
    data_t x0 = 0;
    data_t x1 = 0;
    data_t x2 = 0;
    data_t x3 = 0;

    for(i=0; i<len; i+=4){
        x0 = x0 * data[i];
        x1 = x1 * data[i+1];
        x2 = x2 * data[i+2];
        x3 = x3 * data[i+3];
    }
    for(;i<len;i++){
        x0 = x0 * data[i];
    }

}

void split6(int len, int *data){
    data_t result;

    int i;
    data_t x0 = 0;
    data_t x1 = 0;
    data_t x2 = 0;
    data_t x3 = 0;
    data_t x4 = 0;
    data_t x5 = 0;

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

}

void split8(int len, int *data){
    data_t result;

    int i;
    data_t x0 = 0;
    data_t x1 = 0;
    data_t x2 = 0;
    data_t x3 = 0;
    data_t x4 = 0;
    data_t x5 = 0;
    data_t x6 = 0;
    data_t x7 = 0;

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

}

void split10(int len, int *data){
    data_t result;

    int i;
    data_t x0 = 0;
    data_t x1 = 0;
    data_t x2 = 0;
    data_t x3 = 0;
    data_t x4 = 0;
    data_t x5 = 0;
    data_t x6 = 0;
    data_t x7 = 0;
    data_t x8 = 0;
    data_t x9 = 0;

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
}

void split30(int len, int *data){
    data_t result;

    int i;
    data_t x0 = 0;
    data_t x1 = 0;
    data_t x2 = 0;
    data_t x3 = 0;
    data_t x4 = 0;
    data_t x5 = 0;
    data_t x6 = 0;
    data_t x7 = 0;
    data_t x8 = 0;
    data_t x9 = 0;
    data_t y0 = 0;
    data_t y1 = 0;
    data_t y2 = 0;
    data_t y3 = 0;
    data_t y4 = 0;
    data_t y5 = 0;
    data_t y6 = 0;
    data_t y7 = 0;
    data_t y8 = 0;
    data_t y9 = 0;
    data_t z0 = 0;
    data_t z1 = 0;
    data_t z2 = 0;
    data_t z3 = 0;
    data_t z4 = 0;
    data_t z5 = 0;
    data_t z6 = 0;
    data_t z7 = 0;
    data_t z8 = 0;
    data_t z9 = 0;

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
        y0 = y0 * data[i+10];
        y1 = y1 * data[i+11];
        y2 = y2 * data[i+12];
        y3 = y3 * data[i+13];
        y4 = y4 * data[i+14];
        y5 = y5 * data[i+15];
        y6 = y6 * data[i+16];
        y7 = y7 * data[i+17];
        y8 = y8 * data[i+18];
        y9 = y9 * data[i+19];
        z0 = z0 * data[i+20];
        z1 = z1 * data[i+21];
        z2 = z2 * data[i+22];
        z3 = z3 * data[i+23];
        z4 = z4 * data[i+24];
        z5 = z5 * data[i+25];
        z6 = z6 * data[i+26];
        z7 = z7 * data[i+27];
        z8 = z8 * data[i+28];
        z9 = z9 * data[i+29];
    }
    for(;i<len;i++){
        x0 = x0 * data[i];
    }
}
//git start
int main(int argc, int* argv){
    //사용할 구조체 생성
    int len = atoi(argv[1]);
    int *data = (int *) calloc(len, sizeof(int));
    if(argc==2){
        struct timeval stime, etime, gap;

        gettimeofday(&stime, NULL);
        split2(len, data);
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
        split4(len, data);
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
        split6(len, data);
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
        split8(len, data);
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
        split10(len, data);
        gettimeofday(&etime, NULL);

        gap.tv_sec = etime.tv_sec - stime.tv_sec;
        gap.tv_usec = etime.tv_usec - stime.tv_usec;
        if(gap.tv_usec < 0){
            gap.tv_sec -= 1;
            gap.tv_usec += 1000000;
        }

        printf("Elapsed time of split10 %Idsec : %Idusec\n", gap.tv_sec, gap.tv_usec);

        gettimeofday(&stime, NULL);
        split30(len, data);
        gettimeofday(&etime, NULL);

        gap.tv_sec = etime.tv_sec - stime.tv_sec;
        gap.tv_usec = etime.tv_usec - stime.tv_usec;
        if(gap.tv_usec < 0){
            gap.tv_sec -= 1;
            gap.tv_usec += 1000000;
        }

        printf("Elapsed time of split30 %Idsec : %Idusec\n", gap.tv_sec, gap.tv_usec);
    }
    else{
        printf("Usage: command length");
    }
    printf("I'm runnig");
}
