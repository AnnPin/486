/*
 *    sieve_c.c  ( List 1-1 )
 *    Copyright (C) Teruhisa Kamachi and ASCII Corp. 1994
 *    All rights reserved.
 *
 *    ���̃t�@�C���́w�͂��߂ēǂ�486�x�i�A�X�L�[�o�ŋǁj�Ɍf�ڂ���
 *    �v���O�����̈ꕔ�ł��B�v���O�������e�◘�p���@�ɂ��Ă͖{����
 *    �L�q���Q�Ƃ��Ă��������B
 */

/*
 *    List 1-1  [sieve_c.c  1/1] (page 30)
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM 10000

void main(int argc, char *argv[])
{
    unsigned char *tbl;
    unsigned int m, i, snum;
    void sieve(unsigned char *tbl, unsigned int num);
    int isprime(unsigned char *tbl, unsigned int num);

    if (argc>1)
        m = atol(argv[1]);
    else
        m = NUM;

    tbl = (char *) malloc(m+1);
    if (tbl == NULL) {
        fprintf(stderr, "Can't alloc memory\n");
        exit(1);
    }

    sieve(tbl, m);

    snum=0;
    for (i=2;i<=m;i++) {
        if (isprime(tbl, i)) {
            snum++;
            printf("%u ", i);
        }
    }
    putchar('\n');
    printf("%u prime numbers in 2..%u\n", snum, m);
}

void sieve(unsigned char *tbl, unsigned int num)
{
    unsigned int i;
    unsigned long j;

    for (i=0;i<=num;i++)
        tbl[i] = 1;

    for (i=2;i<=num/2;i++) {
        if (tbl[i] == 1) {
            for (j=i+i;j<=num;j+=i)
                tbl[j] = 0;
        }
    }
}

int isprime(unsigned char *tbl, unsigned int num)
{
    return tbl[num];
}
