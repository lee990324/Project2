#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1(char *filename);
void filestat2(char *filename);
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main(){
    char filename1[] = "file1.txt"; // 첫 번째 파일 이름
    char filename2[] = "file2.txt"; // 두 번째 파일 이름

    filestat1(filename1);
    filestat2(filename2);
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();

    return 0;
}

void filestat1(char *filename){
    
}

void filestat2(char *filename){
}

void filetime1(){
   
}

void filetime2(){
   
}

void sizecmp(){
    if (stat1.st_size > stat2.st_size)
        printf("file1.txt가 더 큽니다.\n");
    else if (stat1.st_size < stat2.st_size)
        printf("file2.txt가 더 큽니다.\n");
    else
        printf("두 파일의 크기가 같습니다.\n");
}

void blockcmp(){
    if (stat1.st_blocks > stat2.st_blocks)
        printf("file1.txt가 더 많은 블록을 사용합니다.\n");
    else if (stat1.st_blocks < stat2.st_blocks)
        printf("file2.txt가 더 많은 블록을 사용합니다.\n");
    else
        printf("두 파일의 블록 수가 같습니다.\n");
}

void datecmp(){
    
}

void timecmp(){
   
}
