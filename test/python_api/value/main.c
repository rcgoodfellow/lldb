//===-- main.c --------------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#include <stdio.h>

// This simple program is to test the lldb Python API SBValue.GetChildAtIndex().

int g_my_int = 100;

const char *days_of_week[7] = { "Sunday",
                                "Monday",
                                "Tuesday",
                                "Wednesday",
                                "Thursday",
                                "Friday",
                                "Saturday" };

const char *weekdays[5] = { "Monday",
                            "Tuesday",
                            "Wednesday",
                            "Thursday",
                            "Friday" };

const char **g_table[2] = { days_of_week, weekdays };

int main (int argc, char const *argv[])
{
    int i;
    int *my_int_ptr = &g_my_int;
    printf("my_int_ptr points to location %p\n", my_int_ptr);
    const char **str_ptr = days_of_week;
    for (i = 0; i < 7; ++i)
        printf("%s\n", str_ptr[i]); // Break at this line
                                    // and do str_ptr_val.GetChildAtIndex(5, lldb.eNoDynamicValues, True).
    
    return 0;
}
