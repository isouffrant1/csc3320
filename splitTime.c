#include<stdio.h>

void split_time(long, int*, int*, int*);

int main() {
        int n,hr,min,sec;
        printf("Enter seconds:");
        scanf("%d",&n);

        if(n < 0) {

        printf("Seconds are not negative values");
}
        else{

        split_time(n, &hr, &min, &sec);

        printf("Converted format: %d hour %d mins %d secs",hr, min, sec);
}
        return 0;
}

        void split_time(long total_sec, int *hr, int *min, int *sec) {
          
        int remaining_sec = 0;

        *hr = total_sec/3600;

        remaining_sec = total_sec%3600;

        *min = remaining_sec/60;

        *sec = remaining_sec%60;

}
