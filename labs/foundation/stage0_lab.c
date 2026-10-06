/*
 * 阶段 0 自测程序：在 Ghidra 中对照 docs/curriculum/phase-00-foundation.md
 * 编译：gcc -O0 -g -fno-omit-frame-pointer -o stage0_lab.exe stage0_lab.c
 */
#include <stdio.h>
#include <stdlib.h>

struct S {
    int id;
    int score;
    int hist[4];
};

/* 全局：Ghidra 里应在 .data / 全局符号，不是栈 */
int g_bias = 10;

int foo(int a, int b, int c, int d, struct S *p)
{
    int i;
    int acc = 0; /* 局部：栈上 */

    /* if / else */
    if (a > 0) {
        acc = b + c;
    } else {
        acc = b - c;
    }

    /* switch */
    switch (d) {
    case 1:
        acc += 1;
        break;
    case 2:
        acc += 2;
        break;
    default:
        acc += d;
        break;
    }

    /* for + 结构体成员 + 数组（常见 [base+index*4]） */
    for (i = 0; i < 4; i++) {
        acc += p->hist[i];
    }

    acc += p->id + p->score + g_bias;
    return acc;
}

int main(void)
{
    struct S stack_s;          /* 栈上的结构体 */
    struct S *heap_s;          /* 堆上的结构体 */
    int i;
    int r1, r2;

    stack_s.id = 1;
    stack_s.score = 100;
    for (i = 0; i < 4; i++) {
        stack_s.hist[i] = i + 1; /* 1,2,3,4 */
    }

    heap_s = (struct S *)malloc(sizeof(struct S));
    if (heap_s == NULL) {
        return 1;
    }
    heap_s->id = 2;
    heap_s->score = 200;
    for (i = 0; i < 4; i++) {
        heap_s->hist[i] = (i + 1) * 10;
    }

    /* 5 个参数：x64 Windows 下 a,b,c,d 在 rcx,rdx,r8,r9，p 在栈上 */
    r1 = foo(3, 4, 5, 2, &stack_s);
    r2 = foo(-1, 8, 2, 9, heap_s);

    /* 期望：stack=132 heap=327 */
    printf("stack=%d heap=%d\n", r1, r2);
    free(heap_s);
    return 0;
}
