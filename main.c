#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1();
void filestat2();
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main(){
    filestat1();
    filestat2();
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(){
    stat("test1", &stat1);
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(){
    stat("test2", &stat2);
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(){
    stat("test1", &stat1);
    time1 = localtime(&stat1.st_mtime);    
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){
    stat("test2", &stat2);
    time2 = localtime(&stat2.st_mtime);    
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(){
    
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(){
    
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(){
    if (time1->tm_year != time2->tm_year)
        printf("%s is earlier\n", (time1->tm_year < time2->tm_year) ? "text1" : "text2");
    else if (time1->tm_mon != time2->tm_mon)
        printf("%s is earlier\n", (time1->tm_mon < time2->tm_mon) ? "text1" : "text2");
    else if (time1->tm_mday != time2->tm_mday)
        printf("%s is earlier\n", (time1->tm_mday < time2->tm_mday) ? "text1" : "text2");
    else
        printf("same date\n");
    printf("\n");
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(){
    if (time1->tm_hour != time2->tm_hour)
        printf("%s is earlier\n", (time1->tm_hour < time2->tm_hour) ? "text1" : "text2");
    else if (time1->tm_min != time2->tm_min)
        printf("%s is earlier\n", (time1->tm_min < time2->tm_min) ? "text1" : "text2");
    else
        printf("same time\n");
    printf("\n");
}
