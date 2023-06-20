0x0E. C - Structures, typedef
=============================

C

*   By: Julien Barbier
*   Weight: 1
*   Project will start Jun 19, 2023 6:00 AM, must end by Jun 20, 2023 6:00 AM
*   Checker was released at Jun 19, 2023 12:00 PM
*   An auto review will be launched at the deadline

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/50af78a28a081e809856d4cdbde2d7ca9d4aa93d.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230620%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230620T004626Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=728372b988ab93a202471f91150c80e78b8e5c6ab52e766518d38e42cf9693d5)

Resources
---------

**Read or watch**:

*   [0x0d. Structures.pdf](/rltoken/giS4eNQT2BQ9RLK0PMhgJQ "0x0d. Structures.pdf")
*   [struct (C programming language)](/rltoken/MinJEDOHpeZs31qaXU8v1w "struct (C programming language)")
*   [Documentation: structures](/rltoken/Nexam-lEwrNHg2awV5Gv8g "Documentation: structures")
*   [0x0d. Typedef and structures.pdf](/rltoken/TGQ3RopVP7CjUTzF-XDXUw "0x0d. Typedef and structures.pdf")
*   [typedef](/rltoken/aqqM2t7PLG5cyHaKwm5nBg "typedef")
*   **Programming in C** by Stephen Kochan - _Chapter 8, Working with Structures p163-189_
*   [The Lost Art of C Structure Packing](/rltoken/emb4ohNT7XKi8Peep5lyeA "The Lost Art of C Structure Packing") (_Advanced - not mandatory_)

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](/rltoken/qkcS8PT80wmgcNlCEdBzrQ "explain to anyone"), **without the help of Google**:

### General

*   What are structures, when, why and how to use them
*   How to use `typedef`

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
*   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl "betty-doc.pl")
*   You are not allowed to use global variables
*   No more than 5 functions per file
*   The only C standard library functions allowed are `printf`, `malloc`, `free` and `exit`.
*   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
*   Don’t forget to push your header file
*   All your header files should be include guarded

### Quiz questions

**Great!** You've completed the quiz successfully! Keep going! (Show quiz)

#### Question #0

You should write documentation for all the structures you create

*   As soon as I write my structure.
    
*   I’ll do it 5 minutes before the deadline when I try Betty on my header file
    
*   True
    

#### Question #1

Those two codes do the same thing:

    typedef struct point point;
    struct point {
       int    x;
       int    y;
    };
    point p = {1, 2};
    

    typedef struct point point;
    struct point {
       int    x;
       int    y;
    };
    point p = { .y = 2, .x = 1 };
    

*   False: the members of the structures will not have the same values
    
*   False: the second does not compile
    
*   True
    

#### Question #2

The general syntax for a struct declaration in C is:

    struct tag_name {
       type member1;
       type member2;
       /* declare as many members as desired, but the entire structure size must be known to the compiler. */
    };
    

*   Maybe
    
*   False
    
*   True
    

#### Question #3

Given this code:

    struct point {
       int x;
       int y;
    };
    struct point my_point = { 3, 7 };
    struct point *p = &my_point;
    

To set the member y of my variable my\_point to 98, I can do (select all valid answers):

*   my\_point->y = 98;
    
*   my\_point.y = 98;
    
*   p.y = 98;
    
*   (\*p).y = 98;
    
*   p->y = 98;
    

Tasks
-----

### 0\. Poppy

mandatory

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230620%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230620T004626Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=fead19e3f9c7c62fb75dd3dedf7132d82f9d683bdcc1bc8ce833cb8cb15a6b19)

Define a new type `struct dog` with the following elements:

*   `name`, type = `char *`
*   `age`, type = `float`
*   `owner`, type = `char *`

    julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
    #include <stdio.h>
    #include "dog.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        struct dog my_dog;
    
        my_dog.name = "Poppy";
        my_dog.age = 3.5;
        my_dog.owner = "Bob";
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
        return (0);
    }
    julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
    julien@ubuntu:~/0x0d. structures, typedef$ ./a 
    My name is Poppy, and I am 3.5 :) - Woof!
    julien@ubuntu:~/0x0d. structures, typedef$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x0E-structures_typedef`
*   File: `dog.h`

Done?! Help

×

#### Learners who are done with "0. Poppy"

Check your code

×

#### Correction of "0. Poppy"

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

### 1\. A dog is the only thing on earth that loves you more than you love yourself

mandatory

Write a function that initialize a variable of type `struct dog`

*   Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

    julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
    #include <stdio.h>
    #include "dog.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        struct dog my_dog;
    
        init_dog(&my_dog, "Poppy", 3.5, "Bob");
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
        return (0);
    }
    julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
    julien@ubuntu:~/0x0d. structures, typedef$ ./b 
    My name is Poppy, and I am 3.5 :) - Woof!
    julien@ubuntu:~/0x0d. structures, typedef$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x0E-structures_typedef`
*   File: `1-init_dog.c`

Done?! Help

×

#### Learners who are done with "1. A dog is the only thing on earth that loves you more than you love yourself"

Check your code

×

#### Correction of "1. A dog is the only thing on earth that loves you more than you love yourself"

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

### 2\. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

mandatory

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230620%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230620T004626Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=2564694d7170bc26e5757577d80b63f248eaed95546116e8242815852c8ecf96)

Write a function that prints a `struct dog`

*   Prototype: `void print_dog(struct dog *d);`
*   Format: see example bellow
*   You are allowed to use the standard library
*   If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
*   If `d` is `NULL` print nothing.

    julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
    #include <stdio.h>
    #include "dog.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        struct dog my_dog;
    
        my_dog.name = "Poppy";
        my_dog.age = 3.5;
        my_dog.owner = "Bob";
        print_dog(&my_dog);
        return (0);
    }
    julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
    julien@ubuntu:~/0x0d. structures, typedef$ ./c 
    Name: Poppy
    Age: 3.500000
    Owner: Bob
    julien@ubuntu:~/0x0d. structures, typedef$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x0E-structures_typedef`
*   File: `2-print_dog.c`

Done?! Help

×

#### Learners who are done with "2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad"

Check your code

×

#### Correction of "2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad"

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

### 3\. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

mandatory

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/9ef84b3fd1636992602868e45d3062719326de0e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230620%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230620T004626Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=be3d9c83cf2861901a9e6350e236d40f2ac0a270b8bc4e0891a6ad1925c12f5e)

Define a new type `dog_t` as a new name for the type `struct dog`.

    julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
    #include <stdio.h>
    #include "dog.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        dog_t my_dog;
    
        my_dog.name = "Poppy";
        my_dog.age = 3.5;
        my_dog.owner = "Bob";
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
        return (0);
    }
    julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
    julien@ubuntu:~/0x0d. structures, typedef$ ./d 
    My name is Poppy, and I am 3.5 :) - Woof!
    julien@ubuntu:~/0x0d. structures, typedef$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x0E-structures_typedef`
*   File: `dog.h`

Done?! Help

×

#### Learners who are done with "3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read"

Check your code

×

#### Correction of "3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read"

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

### 4\. A door is what a dog is perpetually on the wrong side of

mandatory

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/8c1e394774fb8d25e0bbbb73a75ebc7de0c80745.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230620%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230620T004626Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=2a19ea7f1ff82888793c7fe458f0c5ade22a1396084743660b0ae35be215c78c)

Write a function that creates a new dog.

*   Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
*   You have to store a copy of `name` and `owner`
*   Return `NULL` if the function fails

    julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
    #include <stdio.h>
    #include "dog.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        dog_t *my_dog;
    
        my_dog = new_dog("Poppy", 3.5, "Bob");
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
        return (0);
    }
    julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
    julien@ubuntu:~/0x0d. structures, typedef$ ./e
    My name is Poppy, and I am 3.5 :) - Woof!
    julien@ubuntu:~/0x0d. structures, typedef$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x0E-structures_typedef`
*   File: `4-new_dog.c`

Done?! Help

×

#### Learners who are done with "4. A door is what a dog is perpetually on the wrong side of"

Check your code

×

#### Correction of "4. A door is what a dog is perpetually on the wrong side of"

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

### 5\. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

mandatory

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/683112dbdd805c36a9b366cede0653dd80da5ec3.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230620%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230620T004626Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ab0b1a2cff11bd4c991b95c363c5cd9e88905d9a7fd1b734b2c5383c2a94bc1a)

Write a function that frees dogs.

*   Prototype: `void free_dog(dog_t *d);`

    julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
    #include <stdio.h>
    #include "dog.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        dog_t *my_dog;
    
        my_dog = new_dog("Poppy", 3.5, "Bob");
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
        free_dog(my_dog);
        return (0);
    }
    julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
    julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
    ==22840== Memcheck, a memory error detector
    ==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
    ==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
    ==22840== Command: ./f
    ==22840== 
    My name is Poppy, and I am 3.5 :) - Woof!
    ==22840== 
    ==22840== HEAP SUMMARY:
    ==22840==     in use at exit: 0 bytes in 0 blocks
    ==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
    ==22840== 
    ==22840== All heap blocks were freed -- no leaks are possible
    ==22840== 
    ==22840== For counts of detected and suppressed errors, rerun with: -v
    ==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
    julien@ubuntu:~/0x0d. structures, typedef$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x0E-structures_typedef`
*   File: `5-free_dog.c`

Done?! Help

×

#### Learners who are done with "5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg"

Check your code

×

#### Correction of "5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg"

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
