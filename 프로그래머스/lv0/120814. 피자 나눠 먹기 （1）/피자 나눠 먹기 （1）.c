#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    if(n<=7)
    {
        answer=1;
    }
    else if(n>7)
    {
        answer=n/7;
        if(n%7!=0)
        {
            answer++;
        }
    }
    return answer;
}