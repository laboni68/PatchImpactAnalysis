
/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int64_t_fscanf_add_01.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-01.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: add
 *    GoodSink: Ensure there will not be an overflow before adding 1 to data
 *    BadSink : Add 1 to data, which can cause an overflow
 * Flow Variant: 01 Baseline
 *
 * */

#include <inttypes.h>
#include <stdio.h>
#include <assert.h>
#include <limits.h>


int postinc(int data)
{
    int result=-1;
    if (data < INT_MAX)
    result = data++;
    return result;
}
int main(){
    return 0;
}