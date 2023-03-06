#include<stdlib.h>
int main (int argc,char**argv){
        int sum = 0;
        if(argc>5)
                return 0;
        else
                for(int s=1; s<argc;s++){
                        sum = sum +atoi(argv[s]);
                }
        return sum;}
                 
