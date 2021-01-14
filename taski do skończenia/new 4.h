//Zig-Zag trees with one chopping allowed partial code.
#include <stdio.h>
#include <unistd.h>

static int a, b, mark, cnt;

int equal(int A[], int N);
int incr(int A[], int N);
int decr(int A[], int N);

int main()
{
    int A[5] = { 1, 3, 1, 2 };
    int N = 4;
    int ret;
    int mark = -1;
    a = 0;
    b = 1;
    if (A[a] == A[b]) {
        ret = equal(A, N);
    }
    else if (A[a] < A[b]) {
        a++;
        b++;
        ret = decr(A, N);
    }
    else {
        a++;
        b++;
        ret = incr(A, N);
    }
    printf("The return value is %d:", ret);
    return 0;
}
int equal(int A[], int N)
{
    while (a < N - 1 && b < N) {
        if (cnt == 0) {
            mark = a;
            cnt++;
        }
        else {
            return -1;
        }
        a++;
        b++;
        if (A[a] > A[b]) {
            decr(A, N);
        }
        else if (A[a] < A[b]) {
            incr(A, N);
        }
        else {
            return mark;
        }
    }
    return mark;
}
int incr(int A[], int N)
{
    while (a < N - 1 && b < N) {
        if (A[a] > A[b]) {
            if (cnt == 0) {
                mark = a;
                cnt++;
            }
            else {
                return -1;
            }
            a++;
            b++;
            incr(A, N);
        }
        else if (A[a] == A[b]) {
            if (cnt == 0) {
                mark = a;
                cnt++;
            }
            else {
                return -1;
            }
            a++;
            b++;
            decr(A, N);
        }
        else {
            a++;
            b++;
            decr(A, N);
        }
    }
    return mark;
}
int decr(int A[], int N)
{
    while (a < N - 1 && b < N) {
        if (A[a] < A[b]) {
            if (cnt == 0) {
                mark = a;
                cnt++;
            }
            else {
                return -1;
            }
            a++;
            b++;
            decr(A, N);
        }
        else if (A[a] == A[b]) {
            if (cnt == 0) {
                mark = a;
                cnt++;
            }
            else {
                return -1;
            }
            a++;
            b++;
            incr(A, N);
        }
        else {
            a++;
            b++;
            incr(A, N);
        }
    }
    return mark;
}