/* { dg-do compile } */

__bf16 x;

__bf16 foo1 (__bf16 a, __bf16 b)
{
    return a + b;
}

__bf16 foo2 (__bf16 a, __bf16 b)
{
    return a * b;
}

int foo3 (__bf16 a, __bf16 b)
{
    return a > b;
}