/* { dg-do compile } */
/* { dg-options "-march=rv64if -mabi=lp64f -O" } */

__bf16 test_soft_move (__bf16 a, __bf16 b)
{
    return b;
}

/* { dg-final { scan-assembler-not "fmv.h" } } */
