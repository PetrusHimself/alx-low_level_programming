0x05. C - Pointers, arrays and strings
======================================

C

*   By: Julien Barbier
*   Weight: 1
*   Project over - took place from May 29, 2023 6:00 AM to May 30, 2023 6:00 AM
*   An auto review will be launched at the deadline

#### In a nutshell…

*   **Auto QA review:** 46.15/71 mandatory & 15.6/24 optional
*   **Altogether:**  **107.25%**
    *   Mandatory: 65.0%
    *   Optional: 65.0%
    *   Calculation:  65.0% + (65.0% \* 65.0%)  == **107.25%**

### Concepts

_For this project, we expect you to look at these concepts:_

*   [Pointers and arrays](/concepts/60)
*   [Data Structures](/concepts/120)

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/216/IMG_2410.JPG)

Resources
---------

**Read or watch**:

*   [C - Arrays](/rltoken/PVi2XMuApOK3jfhsoqsyXw "C - Arrays")
*   [C - Pointers](/rltoken/oyHybzYBeFiLUMALpb_usA "C - Pointers")
*   [C - Strings](/rltoken/sUeh9qDyW9pePOfJIpx_Bw "C - Strings")
*   [Memory Layout](/rltoken/0k6CD2ZMzSFOMUxMOBiAlQ "Memory Layout")

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](/rltoken/OLGzIaD19ia5NZ-WCMckeg "explain to anyone"), **without the help of Google**:

### General

*   What are pointers and how to use them
*   What are arrays and how to use them
*   What are the differences between pointers and arrays
*   How to use strings and how to manipulate them
*   Scope of variables

### Copyright - Plagiarism

*   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
*   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
*   You are not allowed to publish any content of this project.
*   Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements
------------

### General

*   Allowed editors: `vi`, `vim`, `emacs`
*   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
*   All your files should end with a new line
*   A `README.md` file, at the root of the folder of the project is mandatory
*   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
*   You are not allowed to use global variables
*   No more than 5 functions per file
*   You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
*   You are allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
*   You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
*   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
*   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
*   Don’t forget to push your header file

More Info
---------

You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, `malloc` and `free` - yet.

### Quiz questions

**Great!** You've completed the quiz successfully! Keep going! (Show quiz)

#### Question #0

We declare the following variable

    int arr[5];
    

What is the equivalent of typing `arr[2]`?

*   \*(arr + 2)
    
*   \*arr + 2
    
*   arr + 2
    

#### Question #1

What happens when one tries to access an illegal memory location?

*   Segmentation fault
    
*   There’s a chance for the computer to catch fire, and sometimes even explode
    
*   The computer shuts down
    
*   The operation is ignored
    

#### Question #2

What is the size of a pointer to a `char` (on a 64-bit architecture)

*   2 bytes
    
*   8 bytes
    
*   4 bytes
    
*   1 byte
    

#### Question #3

If we have a variable called `var` of type `int`, how can we get its address in memory?

*   &var
    
*   \*(var)
    
*   \*var
    

#### Question #4

The process of getting the value that is stored in the memory location pointed to by a pointer is called:

*   Accessing
    
*   Casting
    
*   Dereferencing
    
*   Pointing
    

#### Question #5

What is the value of `n` after the following code is executed?

    int n = 98;
    int *p = &n;
    
    *p++;
    

*   98
    
*   402
    
*   99
    
*   0
    

#### Question #6

What is the value of `n` after the following code is executed?

    int n = 98;
    int *p = &n;
    
    p = 402;
    

*   98
    
*   402
    
*   99
    
*   0
    

#### Question #7

What is the value of `n` after the following code is executed?

    int n = 98;
    int *p = &n;
    

*   98
    
*   402
    
*   99
    
*   0
    

#### Question #8

What is the size of a pointer to an `int` (on a 64-bit architecture)

*   2 bytes
    
*   8 bytes
    
*   4 bytes
    
*   1 byte
    

#### Question #9

Is it possible to declare a pointer to a pointer?

*   It depends on the type the pointer is pointing to
    
*   No
    
*   Yes
    

#### Question #10

What is the identifier to print an address with `printf`?

*   %d
    
*   %x
    
*   %p
    
*   %a
    

#### Question #11

What is the value of `n` after the following code is executed?

    int n = 98;
    int *p = &n;
    
    *p = 402;
    

*   98
    
*   402
    
*   99
    
*   0
    

#### Question #12

We declare the following variable

    int arr[5];
    

What is the size in memory of the variable `arr`?

*   5 bytes
    
*   4 bytes
    
*   20 bytes
    
*   8 bytes
    
*   10 bytes
    
*   32 bytes
    

Tasks
-----

### 0\. 98 Battery st.

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.

*   Prototype: `void reset_to_98(int *n);`

    julien@ubuntu:~/0x05$ cat 0-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code 
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int n;
    
        n = 402;
        printf("n=%d\n", n);
        reset_to_98(&n);
        printf("n=%d\n", n);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
    julien@ubuntu:~/0x05$ ./0-98 
    n=402
    n=98
    julien@ubuntu:~/0x05$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `0-reset_to_98.c`

Done?! Help

×

#### Learners who are done with "0. 98 Battery st."

Check your code

×

#### Correction of "0. 98 Battery st."

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox QA Review

×

#### 0\. 98 Battery st.

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 1\. Don't swap horses in crossing a stream

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write a function that swaps the values of two integers.

*   Prototype: `void swap_int(int *a, int *b);`  
    

    julien@ubuntu:~/0x05$ cat 1-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int a;
        int b;
    
        a = 98;
        b = 42;
        printf("a=%d, b=%d\n", a, b);
        swap_int(&a, &b);
        printf("a=%d, b=%d\n", a, b);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
    julien@ubuntu:~/0x05$ ./1-swap 
    a=98, b=42
    a=42, b=98
    julien@ubuntu:~/0x05$
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `1-swap.c`

Done?! Help

×

#### Learners who are done with "1. Don't swap horses in crossing a stream"

Check your code

×

#### Correction of "1. Don't swap horses in crossing a stream"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

QA Review

×

#### 1\. Don't swap horses in crossing a stream

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 2\. This report, by its very length, defends itself against the risk of being read

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write a function that returns the length of a string.

*   Prototype: `int _strlen(char *s);`

FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

    julien@ubuntu:~/0x05$ cat 2-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *str;
        int len;
    
        str = "My first strlen!";
        len = _strlen(str);
        printf("%d\n", len);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
    julien@ubuntu:~/0x05$ ./2-strlen 
    16
    julien@ubuntu:~/0x05$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `2-strlen.c`

Done?! Help

×

#### Learners who are done with "2. This report, by its very length, defends itself against the risk of being read"

Check your code

×

#### Correction of "2. This report, by its very length, defends itself against the risk of being read"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

QA Review

×

#### 2\. This report, by its very length, defends itself against the risk of being read

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 3\. I do not fear computers. I fear the lack of them

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write a function that prints a string, followed by a new line, to `stdout`.

*   Prototype: `void _puts(char *str);`

FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

    julien@ubuntu:~/0x05$ cat 3-main.c
    #include "main.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *str;
    
        str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
        _puts(str);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
    julien@ubuntu:~/0x05$ ./3-puts 
    I do not fear computers. I fear the lack of them - Isaac Asimov
    julien@ubuntu:~/0x05$ 
    
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `3-puts.c`

Done?! Help

×

#### Learners who are done with "3. I do not fear computers. I fear the lack of them"

Check your code

×

#### Correction of "3. I do not fear computers. I fear the lack of them"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

QA Review

×

#### 3\. I do not fear computers. I fear the lack of them

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 4\. I can only go one way. I've not got a reverse gear

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write a function that prints a string, in reverse, followed by a new line.

*   Prototype: `void print_rev(char *s);`

    julien@ubuntu:~/0x05$ cat 4-main.c
    #include "main.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *str;
    
        str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
        print_rev(str);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
    julien@ubuntu:~/0x05$ ./4-print_rev 
    vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
    julien@ubuntu:~/0x05$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `4-print_rev.c`

Done?! Help

×

#### Learners who are done with "4. I can only go one way. I've not got a reverse gear"

Check your code

×

#### Correction of "4. I can only go one way. I've not got a reverse gear"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

QA Review

×

#### 4\. I can only go one way. I've not got a reverse gear

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 5\. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write a function that reverses a string.

*   Prototype: `void rev_string(char *s);`  
    

    julien@ubuntu:~/0x05$ cat 5-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char s[10] = "My School";
    
        printf("%s\n", s);
        rev_string(s);
        printf("%s\n", s);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
    julien@ubuntu:~/0x05$ ./5-rev_string 
    My School
    loohcS yM
    julien@ubuntu:~/0x05$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `5-rev_string.c`

Done?! Help

×

#### Learners who are done with "5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes"

Check your code

×

#### Correction of "5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

QA Review

×

#### 5\. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 6\. Half the lies they tell about me aren't true

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

*   Prototype: `void puts2(char *str);`

    julien@ubuntu:~/0x05$ cat 6-main.c
    #include "main.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *str;
    
        str = "0123456789";
        puts2(str);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
    julien@ubuntu:~/0x05$ ./6-puts2 
    02468
    julien@ubuntu:~/0x05$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `6-puts2.c`

Done?! Help

×

#### Learners who are done with "6. Half the lies they tell about me aren't true"

Check your code

×

#### Correction of "6. Half the lies they tell about me aren't true"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

QA Review

×

#### 6\. Half the lies they tell about me aren't true

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 7\. Winning is only half of it. Having fun is the other half

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write a function that prints half of a string, followed by a new line.

*   Prototype: `void puts_half(char *str);`
*   The function should print the second half of the string
*   If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`

    julien@ubuntu:~/0x05$ cat 7-main.c
    #include "main.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *str;
    
        str = "0123456789";
        puts_half(str);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
    julien@ubuntu:~/0x05$ ./7-puts_half 
    56789
    julien@ubuntu:~/0x05$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `7-puts_half.c`

Done?! Help

×

#### Learners who are done with "7. Winning is only half of it. Having fun is the other half"

Check your code

×

#### Correction of "7. Winning is only half of it. Having fun is the other half"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

QA Review

×

#### 7\. Winning is only half of it. Having fun is the other half

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 8\. Arrays are not pointers

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write a function that prints `n` elements of an array of integers, followed by a new line.

*   Prototype: `void print_array(int *a, int n);`  
    
*   where `n` is the number of elements of the array to be printed
*   Numbers must be separated by comma, followed by a space
*   The numbers should be displayed in the same order as they are stored in the array
*   You are allowed to use `printf`

    julien@ubuntu:~/0x05$ cat 8-main.c
    #include "main.h"
    
    /**
     * main - check the code for
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int array[5];
    
        array[0] = 98;
        array[1] = 402;
        array[2] = -198;
        array[3] = 298;
        array[4] = -1024;
        print_array(array, 5);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
    julien@ubuntu:~/0x05$ ./8-print_array 
    98, 402, -198, 298, -1024
    julien@ubuntu:~/0x05$
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `8-print_array.c`

Done?! Help

×

#### Learners who are done with "8. Arrays are not pointers"

Check your code

×

#### Correction of "8. Arrays are not pointers"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

QA Review

×

#### 8\. Arrays are not pointers

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 9\. strcpy

mandatory

Score: 65.0% (Checks completed: 100.0%)

*   Prototype: `char *_strcpy(char *dest, char *src);`

Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.

*   Return value: the pointer to `dest`

FYI: The standard library provides a similar function: `strcpy`. Run `man strcpy` to learn more.

    julien@ubuntu:~/0x05$ cat 9-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char s1[98];
        char *ptr;
    
        ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
        printf("%s", s1);
        printf("%s", ptr);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
    julien@ubuntu:~/0x05$ ./9-strcpy 
    First, solve the problem. Then, write the code
    First, solve the problem. Then, write the code
    julien@ubuntu:~/0x05$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `9-strcpy.c`

Done?! Help

×

#### Learners who are done with "9. strcpy"

Check your code

×

#### Correction of "9. strcpy"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

QA Review

×

#### 9\. strcpy

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 10\. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

#advanced

Score: 65.0% (Checks completed: 100.0%)

Write a function that convert a string to an integer.

*   Prototype: `int _atoi(char *s);`
*   The number in the string can be preceded by an infinite number of characters
*   You need to take into account all the `-` and `+` signs before the number
*   If there are no numbers in the string, the function must return `0`
*   You are not allowed to use `long`
*   You are not allowed to declare new variables of “type” array
*   You are not allowed to hard-code special values
*   We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code.

FYI: The standard library provides a similar function: `atoi`. Run `man atoi` to learn more.

    julien@ubuntu:~/0x05$ cat 100-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int nb;
    
        nb = _atoi("98");
        printf("%d\n", nb);
        nb = _atoi("-402");
        printf("%d\n", nb);
        nb = _atoi("          ------++++++-----+++++--98");
        printf("%d\n", nb);
        nb = _atoi("214748364");
        printf("%d\n", nb);
        nb = _atoi("0");
        printf("%d\n", nb);
        nb = _atoi("Suite 402");
        printf("%d\n", nb);
        nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
        printf("%d\n", nb);
        nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
        printf("%d\n", nb);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
    julien@ubuntu:~/0x05$ ./100-atoi 
    98
    -402
    -98
    214748364
    0
    402
    98
    402
    julien@ubuntu:~/0x05$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `100-atoi.c`

Done?! Help

×

#### Learners who are done with "10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers"

Check your code

×

#### Correction of "10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

QA Review

×

#### 10\. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 11\. Don't hate the hacker, hate the code

#advanced

Score: 65.0% (Checks completed: 100.0%)

Create a program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c "101-crackme").

*   You are allowed to use the standard library
*   You don’t have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
*   man `srand`, `rand`, `time`
*   `gdb` and `objdump` can help

    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
    julien@ubuntu:~/0x05$ ./101-crackme "`./101-keygen`"
    Tada! Congrats
    julien@ubuntu:~/0x05$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x05-pointers_arrays_strings`
*   File: `101-keygen.c`

Done?! Help

×

#### Learners who are done with "11. Don't hate the hacker, hate the code"

Check your code

×

#### Correction of "11. Don't hate the hacker, hate the code"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox QA Review

×

#### 11\. Don't hate the hacker, hate the code

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

×

#### Recommended Sandbox

Running only

### 1 image(1/2 Sandboxes spawned)

### Ubuntu 20.04

Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations

SSH

SFTP

[Webterm](/user_containers/406524/webterm)

RestartDestroy

#### Credentials

**Host**9a9fb4fcf688.863f791e.alx-cod.online

**Username**9a9fb4fcf688

**Password**1f244c6781d7ba39443a

#### Web access

[HTTPS](https://9a9fb4fcf688.863f791e.alx-cod.online)[HTTP](http://9a9fb4fcf688.863f791e.alx-cod.online)[3000](http://9a9fb4fcf688.863f791e.alx-cod.online:3000)[4000](http://9a9fb4fcf688.863f791e.alx-cod.online:4000)[5000](http://9a9fb4fcf688.863f791e.alx-cod.online:5000)[5001](http://9a9fb4fcf688.863f791e.alx-cod.online:5001)[8000](http://9a9fb4fcf688.863f791e.alx-cod.online:8000)[8080](http://9a9fb4fcf688.863f791e.alx-cod.online:8080)

#### Port mapping

**SSH**33841

**HTTP**33840

**HTTPS**33839

**3000**33838

**MySQL**33837

**4000**33836

**5000**33835

**5001**33834

**8000**33833

**8080**33832
