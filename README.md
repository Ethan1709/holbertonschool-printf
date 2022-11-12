# Title of the project: Printf

*My first group project*

## Description of the printf project:

***This project consists about recreating the printf function in the C language, and getting the exact same output as if we were using teh original one.***

### Here is the compilation command 

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

#### Requirements

- Files are compiled on Ubuntu 20.04 LTS, using gcc
- Our code is using the Betty style. It's the style required by Holberton School in C
- Not using global variables
- No more than 5 functions per files
- All my prototypes are included in the header file called ***main.h***
- All our code is pushed and validated on github using git add, git commit -m, and git push

## Exemples

***I will show you some exemples using the function***

1. - Input: "Let's print a simple sentence.\n"

   - Output: Let's print a simple sentence

*Here we can see that the function handled every chraracter of the function and printed it*


2. - Input: "A char inside a sentence: %c. Did it work ?\n", 'F'

   - Output: A char inside a sentence: F. Did it work ?

*Here we can see that the function handled the fact we put a character using the macro %c, and converted it well in the sentence*


3. - Input: "Complete the sentence: You %s nothing, Jon Snow.\n", "know"

   - Output: Complete the sentence: You know nothing, Jon Snow.

*Here we can see once again that the function handled also the fact that we put a string macro %s inside the sentence and converted it into the given string*


4. - Input: "Should print a single percent sign: %%\n"

     Output: Should print a single percent sign: %

*Here we can see that the function handled well teh fact that we put two percent signs,  and only printed one as we wanted*


5. - Input: "%K\n"

   - Output: %K

*Here we can see that the function hndled the fact that the macro used after the percent is unkonw by printf, and printed all the %K as it was given in input*


6. - Input: "%d, 1024"

   - Output: 10241024

*Here we can see thet the function handled the number conversion as in printf using the macro %d*

**I won't put an exemple for the macro %i because it's the exact same output as %d**



# FLOWCHART
![code2flow_Usp8gX](https://user-images.githubusercontent.com/113636658/201380796-fadf8b8f-daa3-4998-a33b-c5e3b4ded79e.png)



### Testings

*We worked together a lot on the whiteboard to clarify step by step the code in our head.
We wrote sudocode on it,  so it's easier to have an idea where to go. 
Then, we used Python Tutor to see where our code was broken when we didn't know at first sight.
We also compiled locally our code to see if we got the same output as the exemples in the project.*


## Authors

***Ethan Benyayer and Simon Richard***




