::: {role="main"}
::: {#layout-bars}
:::

::: {.project .row}
::: {.col-xs-12 .col-md-10 .col-lg-8 .contains-images}
0x12. C - Singly linked lists {#x12.-c---singly-linked-lists .gap}
=============================

::: {react-class="tags/Tags" react-props="{\"tags\":[{\"id\":7,\"value\":\"C\",\"author_id\":null,\"created_at\":\"2022-06-16T01:59:38.000Z\",\"updated_at\":\"2022-06-16T01:59:38.000Z\"},{\"id\":17,\"value\":\"Algorithm\",\"author_id\":null,\"created_at\":\"2022-06-16T01:59:38.000Z\",\"updated_at\":\"2022-06-16T01:59:38.000Z\"},{\"id\":18,\"value\":\"Data structure\",\"author_id\":null,\"created_at\":\"2022-06-16T01:59:38.000Z\",\"updated_at\":\"2022-06-16T01:59:38.000Z\"}]}" react-cache-id="tags/Tags-0"}
:::

::: {react-class="projects/ProjectMetadata" react-props="{\"metadata\":{\"author\":\"Julien Barbier\",\"weight\":1,\"correction\":{\"released\":false,\"auto_correction_available_at\":\"2022-10-24T12:00:00.000+03:00\",\"requires_auto_correction\":true,\"requires_manual_correction\":false},\"bpi\":{\"current\":true,\"started\":false,\"in_second_deadline\":false,\"starts_at\":\"2022-10-24T06:00:00.000+03:00\",\"ends_at\":\"2022-10-25T06:00:00.000+03:00\",\"second_deadline_at\":\"2022-10-26T06:00:00.000+03:00\"}}}" react-cache-id="projects/ProjectMetadata-0"}
:::

::: {#project_id style="display: none" project-id="229"}
:::

::: {.panel .panel-default}
::: {.panel-heading}
### Concepts {#concepts .panel-title}
:::

::: {.panel-body}
*For this project, we expect you to look at this concept:*

-   [Data Structures](/concepts/120)
:::
:::

::: {#project-description .panel .panel-default}
::: {.panel-body}
![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif)

Resources
---------

**Read or watch**:

-   [Linked Lists](/rltoken/joxg32-tt4lUh8Afgst8tA "Linked Lists")
-   [Google](/rltoken/USaZbNdfcuIFII-K2YPsKQ "Google")
-   [Youtube](/rltoken/epKUCIcoA6XaN1T3Vtr_9w "Youtube")

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to
anyone](/rltoken/xtUoOGrH_fQu_r19q1Tivw "explain to anyone"), **without
the help of Google**:

### General

-   When and why using linked lists vs arrays
-   How to build and use linked lists

### Copyright - Plagiarism

-   You are tasked to come up with solutions for the tasks below
    yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following
    project by copying and pasting someone else's work.
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in
    removal from the program.

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`,
    using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is
    mandatory
-   Your code should use the `Betty` style. It will be checked using
    [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")
    and
    [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   The only C standard library functions allowed are `malloc`, `free`
    and `exit`. Any use of functions like `printf`, `puts`, `calloc`,
    `realloc` etc... is forbidden
-   You are allowed to use
    [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don't have to push `_putchar.c`, we will use our file. If you do
    it won't be taken into account
-   In the following examples, the `main.c` files are shown as examples.
    You can use them to test your functions, but you don't have to push
    them to your repo (if you do we won't take them into account). We
    will use our own `main.c` files at compilation. Our `main.c` files
    might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the
    function `_putchar` should be included in your header file called
    `lists.h`
-   Don't forget to push your header file
-   All your header files should be include guarded

More Info
---------

Please use this data structure for this project:

    /**
     * struct list_s - singly linked list
     * @str: string - (malloc'ed string)
     * @len: length of the string
     * @next: points to the next node
     *
     * Description: singly linked list node structure
     */
    typedef struct list_s
    {
        char *str;
        unsigned int len;
        struct list_s *next;
    } list_t;
:::
:::

::: {#project-quiz-questions-title .panel .panel-default}
::: {.panel-heading}
### Quiz questions {#quiz-questions .panel-title}
:::

::: {.panel-body}
::: {.section .quiz_questions_show_container}
::: {.quiz_question_item_container data-role="quiz_question918" position="1"}
::: {#quiz_question-918 .clearfix}
#### Question \#0 {#question-0 .quiz_question}

What's a node? (select all possible answers)

-   It's a server

-   It's a structure with a pointer to the next node and value
    information

-   It's a cell in an array

-   It's an integer

-   It's a space allocated in memory
:::
:::

::: {.quiz_question_item_container data-role="quiz_question919" position="2"}
::: {#quiz_question-919 .clearfix}
#### Question \#1 {#question-1 .quiz_question}

What's the "head" of a linked list?

-   It's the last node

-   It's the node with the highest value

-   It's the first node

-   It's the node with the lowest value

-   It's the node with the pointer to the next equals to `NULL`
:::
:::

::: {.quiz_question_item_container data-role="quiz_question920" position="3"}
::: {#quiz_question-920 .clearfix}
#### Question \#2 {#question-2 .quiz_question}

What's the "tail" of a linked list?

-   It's the node with the pointer to the next equals to `NULL`

-   It's the first node

-   It's the node with the highest value

-   It's the node with the lowest value
:::
:::

::: {.quiz_question_item_container data-role="quiz_question921" position="4"}
::: {#quiz_question-921 .clearfix}
#### Question \#3 {#question-3 .quiz_question}

In a singly linked list, what are possible directions to traverse it?
(select all possible answers)

-   Forward

-   Backward
:::
:::

::: {.quiz_question_item_container data-role="quiz_question922" position="5"}
::: {#quiz_question-922 .clearfix}
#### Question \#4 {#question-4 .quiz_question}

Arrays Vs Linked Lists: select all true statements

-   We can add elements indefinitely to a linked list

-   We can add elements indefinitely to an array

-   Linked list can contain as value a structure

-   Array can contain as value a structure

-   We can easily remove an element from an Array

-   We can easily removed an element from a Linked list

-   Memory is aligned for a Linked list - each elements are back to back
    in the memory

-   Memory is aligned for an Array - each elements are back to back in
    the memory
:::
:::

::: {.quiz_questions_results}
::: {.spinner}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

Submit answers

::: {.error}
:::
:::
:::
:::
:::

Please make sure to validate all quiz questions before moving on to project tasks {#please-make-sure-to-validate-all-quiz-questions-before-moving-on-to-project-tasks .gap .warning}
---------------------------------------------------------------------------------
:::
:::

::: {.copyright}
Copyright © 2022 ALX, All rights reserved.
:::
:::

::: {#search-modal .modal .fade tabindex="-1" role="dialog" aria-labelledby="search-modal-label"}
::: {.modal-dialog .modal-md}
::: {.modal-content}
::: {.modal-header}
::: {#search-bar-container}
:::
:::

::: {.modal-body}
::: {#modal-spinner .spinner .gap}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {#search-results-container}
:::
:::
:::
:::
:::

::: {#markdownGuideModal .modal .fade tabindex="-1" role="dialog" aria-labelledby="markdownGuideModalLabel" aria-hidden="true"}
::: {.modal-dialog .modal-md}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Markdown Guide {#markdown-guide .modal-title}
:::

::: {.modal-body}
#### Emphasis

    **bold**
    *italics*
    ~~strikethrough~~

#### Headers

    # Big header
    ## Medium header
    ### Small header
    #### Tiny header

#### Lists

    * Generic list item
    * Generic list item
    * Generic list item

    1. Numbered list item
    2. Numbered list item
    3. Numbered list item

#### Links

    [Text to display](http://www.example.com)

#### Quotes

    > This is a quote.
    > It can span multiple lines!

#### Images

CSS style available: `width, height, opacity`

    ![](http://www.example.com/image.jpg)
    ![](http://www.example.com/image.jpg | width: 200px)
    ![](http://www.example.com/image.jpg | height: 124px | width: 80px | opacity: 0.6)

#### Tables

    | Column 1 | Column 2 | Column 3 |
    | -------- | -------- | -------- |
    | John     | Doe      | Male     |
    | Mary     | Smith    | Female   |

    Or without aligning the columns...

    | Column 1 | Column 2 | Column 3 |
    | -------- | -------- | -------- |
    | John | Doe | Male |
    | Mary | Smith | Female |

#### Displaying code

    `var example = "hello!";`

    Or spanning multiple lines...

    ```
    var example = "hello!";
    alert(example);
    ```
:::
:::
:::
:::
