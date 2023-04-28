/* { dg-do compile } */
/* { dg-options "-march=rv64if -mabi=lp64f -O" } */

int test_soft_compare (__bf16 a, __bf16 b)
{
    /* Make sure __gtbf2 not invoked here. */
    /* { dg-final { scan-assembler-times "call\t__extendbfsf2" 2 } } */
    return a > b;
    /* { dg-final { scan-assembler-not "call\t__gtbf2" } } */
    /* { dg-final { scan-assembler-times "fgt.s" 1 } } */
}

