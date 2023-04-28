/* { dg-do compile } */
/* { dg-options "-march=rv64if -mabi=lp64f -O" } */

__bf16 test_soft_add (__bf16 a, __bf16 b)
{
    /* Make sure __addbf3 not invoked here. */
    /* { dg-final { scan-assembler-times "call\t__extendbfsf2" 2 } } */
    return a + b;
    /* { dg-final { scan-assembler-not "call\t__addbf3" } } */
    /* { dg-final { scan-assembler-times "fadd.s" 1 } } */
    /* { dg-final { scan-assembler-times "call\t__truncsfbf2" 1 } } */
}

