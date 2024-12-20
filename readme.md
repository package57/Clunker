					
## **Clunker...C++ is funny.**

The idea behind Clunker is to de mystify C++, far beyond a Reference or Tutorial. The C++ language although powerful, is a tough nut to crunch. The references seem clear enough, but look beyond that at any project and things go to outer space fast. I intend to wrangle	C++, and write an Editor as a learning exercise, because we can. The Editor will be special.
		
We’ll call it CLEdit! 

## **Introduction**
Do you edit code? CLEdit is a Command Line Editor based on IBM TSO edit and BIM,	an extension with additional features. Why write this editor? Imagine if you would, the olden days prior to 1980. No PC. No keyboards. No screens. No libraries. No mouse. No Graphic User Interface (GUI). No Integrated Development Environment (IDE). No nothing!

But Pierre, How did you code? 

We used 'punch cards'. 

What?

Punch cards are sheets of heavy paper, brown, about 3 inch by 7. With one corner
Trimmed off, in various colors, very handy. On the punch cards,there was a layout printed, 8 rows and 80 columns. Hint, 8 rows.

			
![alt text](https://ids.si.edu/ids/deliveryService?max_w=550&id=NMAH-AHB2017q015292 "punchcard")


You the programmer would write your code in block letters on coding sheets, green sheets of paper a little bigger than a legal pad, pre printed with rows and columns of little boxes. You wrote a character in each little box. In pencil of course. 
   
![alt text](https://mdhughes.tech/wp-content/uploads/2023/03/IBM-970px-FortranCodingForm.png "codingsheet")  
      
Then you would, if you were lucky enough, walk your sheets over to the 'key punch' pool - or find your own IBM 026 Card Punch, and punch out your cards yourself.
   	
![alt text](https://www.glennsmuseum.com/pics/ibm_029.jpg "026")
   	
A stack of punch cards would be loaded into the IBM 026 card puncher and each line of code read from the coding sheet produced a 'punched card' by you typing the code off the sheet.The card would have small rectangular holes punched through it, in columns, that represented bytes - where ever there was a hole - that was a 1 , no hole meant 0, zeros and ones, analog binary.

Now imagine, you have a stack of cards, one for each line of code! Don't drop them! Well, if you were smart, you added sequence numbers, in the last 6 columns on the coding sheets. You wrote the numbers down and tracked them yourself. If you were really cleaver, you'd number each line in a multiple of 5 or 10  - so that you could "insert" code using the sequence number as an index.
A physical index.

If you dropped your stack on the floor, you could place it into a card sorter and it would fix it for you - if you had sequence numbers. Otherwise you would have to manually restack your deck comparing it to the code sheets, or re punch your cards. In school or at work these machines and services were valuable.

So now you have your stack, or multiple stacks, imagine one line of code is one card! I've seen programs that used multiple boxes of cards, 2000 each, on cart trays on wheels. Some of these programs represented several months of work. They were nearly priceless. see Sir George Williams affair 1969 Montreal Canada.
"As the police and the students fought in the halls, other students threw computer punch cards out of the windows, littering the streets above with thousands of punch cards ". Believe me, it was a pile too thick to drive through. Millions of hours of programming were lost.

When you were ready to run your program, you added some special cards in front and back of your stack (brown) - to compile, link and run (red), followed by your data cards(green)! It is 'data' processing after all, we're not dialing controls here or shooting at things. You loaded your stack into a card reader,  pressed F1 , R, Send on the keyboard of the Card Reader.
Then waited for someone to gather your 'listing' off the printer. Houston Automated Spool Protocol aka 'HASP'. Then you would head back to your desk to 'desk check' your output. No debug. No watching. No nothing.

Everything with your eyes and your head and multiple eyes were essential. You could ask for a 'core dump' and get a stack of paper or hex output. Good Luck. 

This is how programmers lived and data processing occurred until about 1980. I started in 1982 and this is how it was done. Actually, I remember in college in the late 70's there was only one CRT, the "main" console. There was always a collection of future Phd's surrounding it, cigarettes hanging from their lips, deep in thought, staring at the blinking cursor. Mesmerized. 

Next up was the DEC writer! A dot matrix printer with a keyboard. It would spit out a line and you would type in a response.
 
![alt text](https://archive.computerhistory.org/resources/still-image/DEC/DEC_Accessories/dec_accessories.front_view_decwriter3.102627795.lg.jpg "dec")

Back and forth over and over, like DOS or a Unix terminal without a 'screen' - no CRT's yet. You would keep the box of fan fold paper and run it through on the reverse side too, to save paper. It was your log of day to day exchanges between you and the computer. The only proof you had of any kind of a result. 

The next huge break through - storage! On disk and tapes. Punch cards could be loaded into permanent storage on 'disk' and files could be on disk, or tapes!
 
![alt text](https://handwiki.org/wiki/images/thumb/b/bb/IBM_3277_Model_2_terminal.jpg/1200px-IBM_3277_Model_2_terminal.jpg "3270")

Eventually, if you were good, you got a screen, a crt. tiny, monochrome brown, not green yet! Forget about color or high resolution. Your files were stored in partitioned data sets. A PDS is a mainframe file system format. Very much like folders today but easier to use in my not so humble opinion.

Now that you had a screen you could log on to Time Sharing Option (TS0) a CUI 'desktop' created at IBM in Toronto. From there you could manipulate settings and files. There were plenty of functions, always evolving amd improving yet at the end of the day it was a cui, no mouse, no copy / paste.  

So what could you do?

Well, a lot actually. even more dare I say than you can today with the most advance IDE editors out there. Don't freak out, I love intelli-sense etc, but sometimes they get in the way. Hundreds of millions of lines of code form the backbone of modern business even today. All created without a GUI. I'm responsible for several million lines myself. Sure I like Visual Studio etc as much as the next person, but, sometimes I find it annoying and clumsy.

Hence I wrote CLEdit. It will run anywhere, it uses C++, MySQL and wxWidgets for the GUI part. And when I say GUI I mean that in the very simplest of terms. Remember I never needed one. Also CLEdit combined with all the other files in my GITHUB repository package57, is like a 'book' or a reference of code that is actually useful, instructive, powerful and educational. But most important of all  it works and it's understandable. At least I try to make it so. The repository is full of very useful code samples and examples with explanations with real world applications. Like processing data. Imagine.

The Fundamental Principals for programming is to master these three concepts:
Sequence - what needs to happen first, and so on  
Condition - under what conditions  
Iteration - looping, doing things again and again, over and over consistently and accurately

The next most important thing to remember is this. The very basic requirement is that your program 'works'. How did it work? How long did it take to run? What resources were needed? What difficulties were encountered? What was accomplished? What went wrong? How do you fix that? You will quickly forget why you wrote what you wrote, so be as clear as possible with your code 'style', don't get fancy. The computer can handle millions of instructions. Modern compilers and pre compilers will 'fancy' up your logic for you - even if that wasn't your plan.
see C++ case statement.

Remember Syntax is Syntax but people are people and you brain can only handle so much pain. C++ will have you asking "what the hell does that mean" all day into tomorrow. C++ is dumb. The only thing about it that I like is it's 'typed' and supports structured programming techniques. Oh and if you want to, you can create 'objects' but in 40 professional years I never did once!  

In over 40 years experience programming, building and deploying mission critical applications, I've never created an 'Object'. I've heard that there is nothing you can do in "C++" that you can't do in "C". The “C” programming language is from 1970 and was used to write Unix. C++ is C with Objects. So, why would you use C++ and leverage it's Object Oriented features? We'll get into that a little.

Another thing that's glaring is the lack of file processing knowledge. The References perhaps have a single page dedicated to files. I find this appalling. Information Technology and Data Processing have two things in common: files. The Tutorials are focused on little bits of data being passed around. My last project I was dealing with multiple petabytes of data. Spread across dozens of files and databases. I'll unshroud that and cover Databases too. 

Let's pull the vail off presentation. In my life I never used a Graphical User Interface aka "GUI". All I ever did was manipulate characters so a Character User Interface or "CUI" was more than adequate. So what's a GUI for? Well it's for graphics, presenting pictures, images. Adjusting 'dials'. Ya, ok. We wont need any of that. 

The biggest 'miss' in References and Tutorials is the 'Why' of everything. I believe that time will be better spent learning why to use a feature. After that "syntax is syntax" right? Well, with C++ you'll spend lot's of time figuring out syntax. It's it's own little monster. There are no doubt volumes written about C++ syntax, and why it's structured as such. I often times don’t get it myself. 

If you are coming to this as a complete novice, that's perfect. If you’re already an expert, I promise you will learn something. Let's begin, shall we. 
 
What are we doing again?

If you do something once, you certainly don't need a computer. You might not even use a tool (IDE). If you do anything more than once, that gets interesting. You will probably want to remember how you did it, write down the steps. Make a note of what actions belong to what result. Want to make a cake? Once you decide what kind, condition, it will be made with specified ingredients, data, combined and acted upon, logic, in a specific order,sequence. You'll probably want to share that with someone else in the future, class. Now, go out and make a million cakes a day, iteration.

We need a tool, a machine, to do the work for us. We need to have a way to tell the computer what we want done. There are thousands of computer languages, new ones come along almost daily. Many exist to facilitate a specific type of work. I could go on and on here, but I wont. Let's use C++ as our language of choice. 

So what we are doing is converting a logical unit of work, into instructions that comply with C++, so that we can go on with our busy lives. In my opinion the best way to learn is to code with a goal in mind. In this case, we're going to build an Editor. I learned to use two editors just for this book.
	
I do everything on the Unix operating system, Linux Mint in fact. In Unix 'everything is a file'. Unix is a specialized program called an operating system and it is written in, drum roll please, C. Written you say? Yes.
	
A program is nothing more than plain text in a file.
	
Let me repeat that.A ‘program’ is a simple text file with instructions. There are thousands of specialized programs working together on any computer. We'll focus on ours. What separates a C++ file from a hole in the ground is the file name extension, in this case '.cpp'. All programs have their own syntax and their own ways to implement features of the language. 

I created a folder called CodeBlocks, and a sub folder called Thing. I used a simple text editor and created a file called Thing.cpp.  

The most basic C++ program starts with something called a 'main' function. This is where the program starts. Each instruction is executed in order, the next one after the completion of the prior one. Do this, then do that and so on, top down. I like to call that 'do stuff'.  

Think of a function as a particular piece of work. The entire program is a collection of these functions. A function does something, to something and ideally returns something to tell you that all went well. The most importent part of any program is feedback. Don't fly blind. Your program should do what you want it to do, but, how do you know that? How long did it take too run? How any resources did it take? What issues were encountered? Did it fail? Why?  

C++ is case sensitive meaning "This" and "this" are not the same! Useful but can be troublesome. It’s a fantastic idea to document your code with comments. This will remind you of what you were trying to accomplish and express that idea to other people who will read your code. C++ is all about code reuse. Why reinvent the wheel?   C++ ‘comments’ begin with ‘//’ and continue to the end of the line.  Like so:
```
// this is a comment
```

C++ is funny, it will allow you to create a ‘block’ of comments contained between “/* */”.  Like so:
```
/* this is 
a block of
comments */
```
One last word on comments. As a matter of practice I start every program with comments. I describe what it is I want to do, and perhaps how. Then I insert code I think will accomplish the task between. This is my ‘style’. There are as many styles as there are programmers. That’s unfortunate and certainly not best practice. When I started, I thought using the least code possible was the way to go. Recall than a line of code was a card in a deck of cards. In my first paid gig, I was part of a team of perhaps 2 dozen programmers. Everybody did their own thing. What a nightmare. On guy, from England believed that ‘white’ space, blank lines, indentation was a waste. Comments? What comments. He coded like he was writing a story. His code read like a cheap romance novel. It just droned on and on. It was impossible to follow. The sad part is it worked! Nobody wanted to support his work. He had a certain amount of job security. Don’t do that. 

At my first gig, they realized that we were off course and set us straight. We were taken, one by one and placed into a room, for let’s say, for reeducation! We were trained to do things the same way. In the end, if you looked at a piece of code, you could tell what it was for and how it worked. No fear of making changes. You could not tell who wrote it. Perfect. Unfortunately, of all the places I’ve worked, that was the only job that did that. The good news is that everywhere I worked, if there was an issue in the code, the managers could look at the code and say to me 'it wasn’t you'. True, I do things in a very particular way, but not my way.                   
 
Thing. The smallest program in C++. I called it Thing, you can call your program anything you’d like. C++ is funny, you can call the file “abc.cpp” and the program “xyz”. It’s all up to you. Most of the time, the file that contains the ‘main’ function will be called ‘main.cpp’ . With more comments than code. This will change. 

```
// a function "()" called main, 
// takes  no parameters 
// returns an integer	
int main ()   
// the beginning of a block of code "{"  
{    
// do nothing and quit           
    return 0;  
// the end of a block of code "}"  
}            
```
The ‘main’ function always returns an integer, a number. If something is wrong, you could return let’s say ‘1’ to let you know that. I called this file Thing.cpp, and "compiled it" with the Unix command in a Terminal: (don't type the'$')  
```
$g++ -o Thing Thing.cpp
```

All this command says is run program 'g++', the compiler, create an executable “-o”, called “Thing” from the code in file Thing.cpp. A compiler is a program. It converts your ‘Thing.cpp’ file into an executable ‘Thing’ file. There are many compiler options. Look them up and play around. An executable is a file in binary. It contains all the zeros and ones that the CPU understands to do this and that.   
 
You run the ‘Thing’ program by the Unix command “./” followed by what you want to run:

```
$./Thing
```

In the Terminal, it looks like this:
	
![](../Pictures/Terminal1.png)
 
And, as expected, nothing happens! Perfect. Unix is terse. ./Thing means run the main().      

So far we’ve learned that numbers are called ‘int’ in C++.  An ‘int’ is a type, a type of thing. Whole numbers, greater than 0. Everything must have a type, numbers, letters, fractions etc. C++ eats types for breakfast. There are several type of numbers! 

```
// signed +/-
short int, int, long int, long long int
// unsigned  
unsigned short int, unsigned int, unsigned long int, unsigned long long int
//fractions
float, double, long double 
```
	
So let's make something happen. Let's make the word "Clunker" appear on the console. 

Wait.

What’s a ‘console’?

A console is the computer screen. When I started programming, there was no ‘screen’. The only input was ‘punch cards’ with holes in them that were fed into a ‘reader’ and the only output was to a printer. No files, No libraries. No nothing. Then came a ‘screen’, aka the Console. What you typed on the keyboard, appeared on the screen. Then, after you pressed ENTER, there would be output to the screen. A loop. A send / receive loop.  

You’re probably looking at a screen right now, but it not just characters, it’s pictures, it’s graphical. Hint. Each and every rectangle or square you can see is a program. And each and everyone of these programs has the potential to respond to all your inputs. Keyboard, mouse and so on. These inputs are called ‘events’. For example, mouse over, left click, key down, key press and on and on. But we’ll just stick to the basics for now. Let's make the word "Clunker" appear on the console.          

For that to happen, we're going to borrow some code. We could just code it all ourselves, but, why would you. The standard C++ library, is packed full of programs that can already handle tons of things you will want to do. Let's face it, it's 2024, all this stuff has already been done! So how do we borrow code? We tell the compiler to borrow it. We code that with "<>" and put what we want to borrow from in between like this ‘include’ directive, in our Thing.cpp file. 

```
#include <iostream> 
```

The ‘#include’ is a compiler directive to, uh, include a library. Library <iostream> contains functions that perform basic input and output.  It’s important to keep in mind that C++ needs to know what’s coming, in advance. So now our program looks like  this:

```
#include <iostream>
int main()
{
    return 0;
}
```

Cplusplus.com shows that <iostream> has 8 objects in it;  cin, cout, cerr, clog, wcin, wcout, wcerr, wclog. Let’s put in the code to output the word "Clunker", using the ‘cout’ function like this; 


```
#include <iostream>
int main()
{

    std::cout << "Clunker";

    return 0;
}
```


		Remember I said C++ is funny? Way back in the olden days in DOS this "<<" meant
input and that ">>" output. So you would, for example having a program that did ‘data processing’ have an input file and an output file and would tell DOS to run it like this: 

```
myprogram << input.txt >> output.txt
```


Not surprisingly C++ kept that idea because it was all over the place already and people were used to it. Note that different compilers produce different output specific to the operating system, dos, os2, windows, mac, unix, ipad, iphone, andriod etc. It’s called portability. Some programs are not portable, and may never be. That’s another book.

Let’s take a closer look at the first instruction we added.

```
	std::cout << "Clunker";
```
	
C++ instructions are best understood if you read them backwards. For example, some instructions can cover multiple lines, but they all end with a semicolon. Take this code for example:


wxButton * CFbutton = new wxButton(panel
                                  ,wxID_ANY
                                  ,"copy file"
                                  ,wxPoint(0, 20)
                                  ,wxSize(50, 30));

OK, don’t freak out. Just making a point. An instruction ends with a semi colon and if you read it backwards it will make more sense, most of the time. Sometimes it will make no sense and you’ll just have to hammer it into your head how it works be reading and rereading, researching manuals. Yuck.           

	std::cout << "Clunker";

If you read this backwards it says, new instruction, take the ‘string’ “Clunker”  and use it as input to the function ‘cout’  that is in ‘::’  the library ‘std’. Simple right?  A ‘string’ is what C++ calls anything it see’s enclosed by pairs of double quotes. “this is a string”.  A string is a type, of course.

The function cout writes to the console. Like this: compile g++, run ./

```
$ g++ -o Thing Thing.cpp
$ ./Thing
Clunker$ 
```

You see that? Pretty ugly. We got the word Clunker to come out and the terminal response $ was right after. It would be nicer to skip to a new line wouldn’t it? Let’s do that in C++. C++ is funny so there are a couple of ways to do that. One is to use an ‘escape’ character, of which there are many. In this instance a ‘\n’ like this :

```
#include <iostream>
int main()
{

    std::cout << "Clunker\n";

    return 0;
}
```

Compile and run it.

```
$ g++ -o Thing Thing.cpp
$ ./Thing
Clunker
$ 
```
 
Isn’t that nice. The word Clunker on a separate line. Woo Hoo! I do not like 'escape sequences'. English is not my mother tounge, so when I see something\n my brain goes tilt.A better way is to use a function that does that for you, like this:

```
#include <iostream>
int main()
{

    std::cout << "Clunker" << std::endl;

    return 0;
}
```

And compile and run it. 

```
```
$ g++ -o Thing Thing.cpp
$ ./Thing
Clunker
$

When I see 'endl' I don't have to hurt my brain trying to figure out what it might mean. I'm not that smart. By now you get the point that if you make a change to the program and expect a different result, you need to compile it, after changing the code first. I encountered a programmer that just kept recompiling over and over expecting a different result. Sad.   

The observant will notice that 'cout' is a string ‘streamer’ to the terminal/console.     

C++ is funny. It will let you write your code, very poorly. 

No doubt you’re wondering, how do I input? There is a function for that too of course. You can use it (implement) as follows. Create file called Input.cpp. Create a file called Hello.txt and put 'Hello. Pick a number between one and ten.' in it.

```
#include <iostream>
using namespace std;
int x;
int main()
{

    system("espeak-ng -ven-us -g 8 -f Hello.txt ");

    std::cin >> x;

    return 0;

}
```


Compile Input and run it! Have some fun!

How about this one. I called it End.cpp. It will sit there forever until you press enter. There’s a lesson there.

```
#include <iostream>
using namespace std;
int x;
int main()
{

    std::cout << "press enter to get out" << std::endl;
    std::cin.get();

    return 0;

}

You are starting to get ideas I’ll bet. This is really good. You’ll probably run off and start writing programs. I’ve done my job. std::cin.get() is a function invoked by calling it’s name, properly. In this case the 'get()' function within 'cin'. So now we know how to invoke, execute,call a function. I usually go with the shade tree mechanic expression, 'run it'.    

Variables,Data,Types:

Variables are names given to data, separate from 'words' reserved for the C++ language, so that you can apply your logic. Suppose you want to add two numbers and return a result. There are many ways to do that.     

Variables are declared and defined, either at once or in parts. C++ can be obfuscated beyond measure. Programs always change and they rarely get less complicated. Starting as clean as possible and maintaining that clarity will save time, which is money and your sanity. 

Example: add two numbers, return a total like this:


```
#include <iostream>
int main()
{

    std::cout << "Thing " << std::endl;

    int x=1,y=1;
    return (x+y);

}
```


Compile and run it```


```
$ ./Thing
Thing 
$ echo $? 
2
$
```


I think that the Unix Command “echo $?” would make the ultimate geek t-shirt.
That command tells the system display the return code of the last command on the terminal. 

The prior 3 or 4 line listings of code exhibits the worst of C++. The first line with the cryptic “::” and “<<”. The second, or third line depending on how you look at it, is a declaration “int x” and implementation “x=1” stacked on the same line! Awful. Never do that, unless you have to. 

What if you decide later that ‘y’ is a float(a fraction, a decimal number).  C++ let’s you be very sloppy. The worst is “return (x+y)”. Executing a function () produces side effects. The result of ‘x+y’ has to be calculated and put somewhere. Where? You have no idea. Don’t do that. Execute the function, produce a result and return the defined value. Clear. Make it easy to understand for people. The system could care less. 	

The many ways to write the same thing in C++!


```
int x;
x = 1;
int y=1;
int z= 1;
int a =1;
```


By the way, the equal sign “=” in C++ is an assignment 'operator'. It means take the value, or resulting value on the right of the “=” and assign it to, give it to, store it in the variable on the left. Right to left remember? To ask if two things are equal, C++ uses the '==' operator. C++ is dumb because with “if (a == b)”  and  “if (a = b )”, the former is ‘correct’ but the latter will still do something, but not what you were hoping. And C++ won’t tell you. Why not? Because when you tell C++ “(something)” in brackets, C++ will do it and end up with a result. When you ask “if (a=b)”  you are asking C++, can you assign b to a. If C++ can, it returns ok, or True. If it cannot, it returns False. C++ likes to 'help' in this manner. Before you test, search all of your “if” statements for this error. C++ can mess with your head.              
        	
So what are we supposed to do, what is the bests way to do this? The best way is always the path that is clear. The clearest path is to first declare a variable and then define it, 'implement' it. This gives us;


```
int x;    /* is a declaration – where that declaration is, in the code (scope) is
             very important */
```


C++ needs to know everything first, for example imagine knowing the score but not the sport? Typically declarations, plain text, are in ‘header’ files with a “.h” extension.

At this point variable 'x' exists but has no value, its 'null'. Null is the absence of a value. Null can be both troublesome or useful. Does a variable have a value, did it ever? Those are two different states of data that I have had many 'adult conversations' about.

x = 0;   /* is an implementation,  in this case assigning a
            value, 0 to the variable int x  */
            
We’re safe, we have a variable, a piece of mem
ory that has an appropriate value. Typically implementations are in files, plain text, with a “.cpp” extension.

```
x = “one”;    // this won’t work, x is an int and “one” is a string 
```
  

The point to be made here is that ‘white’ space, blanks, blank lines etc, do not bother C++ and do not, like in python and other similar awful languages effect execution.      

Let’s get started for real now. The real world. The real world runs on 'apps'. What’s an 'app? App is short hand for application. What do you mean by application? I mean what is it that you want to do, what will it apply to? 

There is no better way to learn something than by doing. So, rather than waste time thinking of an application, lets just write an Editor. I know, I know there are so many already, but I have a favorite from decades ago. It predates GUI’s, the mouse, the terminal for that matter. And no cut and paste. It ran on a mainframe. This one will use a rudimentary GUI. Very rude indeed. It is a nice example of capturing User input and reacting to it. Real life. And more than one piece of information. This is what Data Processing is.

Our Editor is going to edit text files. Any kind of text. Plain sentences or code even, it won’t matter. We’ll also throw in some features that will be both handy and educational. Our little Editor will be able to create files, copy files, open files, but, not delete them. It will also be able to store files in a database too. Yes, I said database.		 

There are three big blocks to CLEdit all in C++. I know. C++ is, what it is! 

CLEdit is the GUI 
CLEditCF provides file functions
CLEditDB provides database functions using MySQL 
CLEditSM a sort feature, for fun

We are going to be ‘big boys and girls’ and use an Integrated Development Environment or IDE. There are so many, but my favorite is Code::Blocks. I use Code::Blocks because it’s very simple to use and it’s open source. I'm not that smart. You can use which ever one you’d like. NotePad++ or even Visual Studio for example. You’re choice. We’re going to be coding in C++. Why, because even though there are things about C++ that drive me bananas, used within reason, it can be very powerful and it will do the job the way we want it done. 

File processing is ‘built’ in, but we’re going to be a little fussy in this area. Pushing or pulling a stream of characters around will not teach you anything constructive. 99.99% of all data is structured.
	
For example: take a file of names and addresses. Sounds so simple right. Typically that would be; first name, last name, middle initial, street number, street name, city, state and zip. The total number of combinations of both the order of these ‘fields’ and their ‘type’ and size is innumerable almost.
We’ll learn how that might all work. Typical file commands are Open, Read , Write, Close. 

A database is a highly structured object. This is the first time I mentioned the word ‘object’. You may have read that C++ is C with objects. What does this mean? Well, a few hours of data processing and you realize that certain types of data, text, music, video, spread sheets etc. are handled with certain types of programs. That makes perfect sense. What makes even more sense is to combine those things. You may have noticed that, an Excel spread sheet is rows and columns of data that you can do stuff with, but if you try to open a spread sheet in NotePad, it won’t work. That is because the .xls file is an object. It’s the data and the logic, **combined**. The Excel manual is about 600 pages and I know maybe 2 of them, maybe.

MySQL is an application that supports database objects. Databases contain Tables. Tables contain columns of data. Like a spread sheets on steroids. Potentially rows upon rows of data. MySQL is simple to work with and easy to code. The language of all databases is Structured Query Language. Syntactically, it looks like this:

```
SELECT * from dbname.tbname;
``
 
	
Typical SQL commands are Create, Insert, Select, Update, Delete.  
Select * means get me everything from a database called dbname than contains a table called tbname. Everything means all the data from the columns. A column is named variable of a given type. duh
```
CREATE TABLE tablename (id INT, name VARCHAR(25))"
```
You can give whatever names you’d like to your databases, tables and columns.  Don’t worry about the SQL part, unless you try to use a database in your code. There are as many different words for database, table and columns as you can imagine. Another pet peeve of mine, giving your version of the same idea a different name than the other guy. Why obfuscate.  

For the GUI part we’re going to use the wxWidgets library. WxWidgets is a collection of code, objects, that support creating ‘things’ on a screen that you can interact with. Like buttons, and text boxes, dials etc. GUI stuff. The Screen.
	
The code required, for example, to create a button was figured out 50 years ago. We are most certainly not going to reinvent that wheel. We can, if we want to, explore all that code, if you get bored. There are many such libraries, I picked wxWidgets because it appeared to me to be easy to understand.
At a 1000 foot level, a wxWidget project is two ideas, Main and App. 
                                   
Don’t get too hung up one the size of the user manuals for these applications. I’ve perhaps read 1% if that, in over 40 years. I never wrote a GUI app in more than 40 years as a professional. I never had the need. Today I’m doing it as a learning exercise. How hard could it be, someone else has already.  
 
Let’s outline the functions that our little Editor will capable of and how that might work. This is the start of any project. What are the requirements? The specifications. 

We’ll need to accept commands from the user. We need a place for the user to enter the command. This is known as a ‘text’ control. We’ll need a ‘go’ button control. And we’ll need a place for the user to enter code. More text controls. Simple. In wxWidgets everything is a control. I guess because you controll it?

In  wxWidgets a ‘window’ is called a frame. Our frame will have one ‘panel’. It will have one ‘button’. It will have a ‘text control’ for the command line, and a bunch of them for the code the user enters. Feedback will be provided at the bottom of the screen. 

Wait a minute.      
  
A user interacts with a window and it’s objects in many ways. Physically with the keyboard and with the mouse. The mouse moves. The mouse has buttons that can be pressed aka ‘clicked’. The keyboard has keys, almost 300, that can be pressed.  They go up and they go down. Not to mention that the window can be resized in some cases. Each and everyone of these actions are called ‘events’. We can ‘handle’ those events in our code if we chose to. Did you ever notice that sometimes when you move the mouse pointer over something you get a message? Someone coded an ‘event handler’ for that 'mouse over' action on that space.   

Properties / Objects / Events / Methods, ‘poem’. 

A window should be though of as a rectangular space, that has ‘properties’ like dimension, background etc. In fact each and every rectangle you can see or imagine you see, on the screen you are looking at right now, is capable potentially of responding to these events, provided, that object has focus. It all depends on how many events you code for in each object. You could lose your mind. All you need to get a grip of is objects, properties, events and methods (functions).  

We’re going to respond to key presses and the ‘go’ button we’ll call ‘Apply’. Simple. But first we need to declare some objects. Types.

In C++ it looks like this: I want a panel object named Panel, to be a pointer “*” to a wxPanel type object. The reason we use a pointer is because wxPanel is a big thing and we don’t want to move it around, we just want to use it. When you use a pointer, you’re telling the computer, go over there and do whatever it says to do, or use whatever you find there, if you point to a value type, a variable.         


```
        wxPanel      * Panel;
        wxTextCtrl   * Command;
        wxButton     * Apply;

        struct Screen
        {
            wxTextCtrl * Line;  // line command action
            wxTextCtrl * Code;  // text
        };
        Screen CL[50];                  
```


All of these variables are pointers to wxWidget types of things, but not the Screen or CL things. Pointers. Ah pointers. Never used them in 40 years. A pointer is a number. Period. That number is used to ‘address’ a piece of information or even a function. Why use a pointer? Well because somethings that we create, specifically Objects, can be huge. It’s easier and more efficient to point to something and do it, than to copy it and do it. I’ll try to learn more and elaborate. Look at refptr.cpp example down below.          

The best thing here is the 'struct'. Very few things in life are elemental. Almost everything is made of different things. Especially data. On our little editor we’ll provide 50 lines where the User can enter a command called 'line', and whatever text they want called 'code'. These don’t make sense apart, so we put them together. Placing things that make sense together is ideal, and a science. Particularly functions, both for readability and processing. We called that ‘locality of reference’. Nobody wants to go hunting around looking for data and logic. Neither does the CPU.

We declared a structure with two parts, and we declared that we want 50 of them. How do refer to them in code? Which part? Which one, the first, the second, that last? 
                  
Let’s unpack all this a tad more. 

What we are saying is that, reading backwards, as always is:
we want our panel to be called ‘Panel’ and it is a pointer ‘*’ to an object of wxPanel type. This might be described as a ‘this is like a’ relationship. So Panel is just like a wxPanel and when we refer to Panel, in our code, it can do anything that wxPanel can do. This is an OOP feature called inheritance. 

We’re also asking for our version of a wxTextCtrl we’ll call 'Command'.  Whatever a wxTextCtrl can do, our Command will be able to do too. 

And throw in a button too, called ‘Apply’. Whatever a wxButton can do, our Apply will be able to do too. 

To finish off, we’re going to need a bunch of short lines the user can type line commands into and a longer line for the text, code whatever. We’re going to call that bunch ‘CL‘ and there will be 50 of them. Our 50 CL’s will look like the structure we called ‘Screen’. Aka a user defined type! 

C++ is funny because you can’t say Screen Code because Screen is a type. In many other languages you can. We’ve declared 50 CL's of type Screen. That’s a single dimension array. Array parts are referenced by a numeric 'index' beginning at zero. To get to a part, we use a period/dot “.” operator and to get the which one we want we put a value in square brackets “[]” operator. Like this:
example 'CL[5].code'. That means give me the sixth value of code. The first one is zero. Remember that. 

This idea of ‘being able to do’ stuff that something else can is called ‘inheritance’. If we really get excited we can make Apply do stuff that wxButton can’t do! We can even change the way the wxButton does it's own stuff! But I never had that much imagination, so we wont. You on the other hand are free to do as you wish. 

The foundation. A ‘window’. 

Ok. So. What are we doing again? We’re creating a User interface. The User will do something and we will respond. It will contain multiple potential ‘units of work’. A unit of work is like a forest. Overwhelming at first, but as you venture deeper into the forest, you realize that “at the end of the day” it’s just a collection of trees occupying a space, a framework. We’ll tackle it one tree at a time.

Remember, we’re going to do something, over and over. This is what we call 'iteration'. You’ll see that word a lot in C++. It’s also called a 'loop. You are surely familiar with loops. When you open a Terminal window in Unix or Windows, you see a blinking cursor. It’s a program that is waiting for you to type something, press enter and then it will do it’s best to respond. If you enter the name of a program,  like let’s say 'dir', it will execute the 'dir' program and list the files within the current directory. Then wait for another command. See. A loop. A send/receive loop. The system sends you a cursor '$' and then it receives something. The first cursor use to blink on and off.  

The prior version of “Thing”, was not a loop. It was simple, normal, “top down” execution. We want a loop. We want to receive User input, do stuff, and send a response. Preferably a positive response that makes the User happy. Naturally, you have to send something to get something. How do we do that in C++ using wxWidgets, it’s not that bad. It’s perhaps not the best place to start. but, everything that follows is easy. I promise. I'm not that smart. I did it.   

There are two parts: “app” and “main”. When you create a wx project in Code::Blocks it will create two source code files and two header files. 

So called header files are declarations, with an “.h” extension. File name, dot, extension right? The code file will have, because the code is C++ a “.cpp” extension. C would have a “.c” extension. The code files are called implementation files and they will refer to the header file, at the very least.

I called the project CLEdit. CL stands for Command Line. I go into each of those ‘default’ files created by Code::Blocks and empty them! I do that because they are too confusing. Through experimentation, and many hours of videos, I figured out, what do you really need to code to make a frame? You need four files. You could do it in two files but that’s a really bad practice to start, so we wont. We’ll forever more and always keep declarations and implementations separate. In fact, we’ll get a little crazy and have many header files. Why? They provide clarity and sanity.     

**CLEditMain.h: the main header
file CLEditMain.h**

In CLEditMain.h, wx.h is a file that contains the declarations of wxWidget bits and pieces. We use the C++ compiler directive #include to 'include' that file into our program. We’ll do that a lot in the future. We’ll include all sorts of things. The next directive is 'using' is how we tell the compiler we need to use bits and pieces that are in a namespace called, in this case 'std'. A namespace is collection of related things. You can create your own. The next statement 'class', is where object oriented programming OOP is born. What we are saying here is we want to create a reference called CLEdit that inherits, or is like a, wxFrame. And make it public. This means we can see it and use it. Everything implemented in the class is encapsulated within the brackets '{}'. Ellipses I believe, terminated by a semi colon of course. Within our class we can implement bits and pieces that are one of three access types. Public, Protected and Private. I’ll just say Main.cpp and Main.h from here out.  

We need a side bar here. I’m not sure what protected means. I’ve never used it. Public is normal. It’s what most programs are. It means we can see it and use it. Private on the other hand is where I have a problem with OOP, unless it’s open source. When a class contains private parts, you cannot see them from the outside. You won’t even know they exist. The class can use it’s own private parts and we’ll see that soon, in the classes we create. Tread carefully when inheriting a class.            This is the reason people have issues with tictok.

Our wxFrame will use a variable called title which is a '&' reference to a wxString type  const 'constant', cannot change. Quite a mouthful. Constants can be useful. Rarely ever used one and never had to define one, but the compiler likes them, because they cannot change during execution and it make it easier for the computer to deal with somehow. 

Notice the full colons ':'. C++ uses them often as separators. Sometimes in pairs too, as we have seen. The comment needs improvement. What would you say?        

```
// the purpose of this file is . . .
#include <wx/wx.h>
using namespace std;
class CLEditFrame : public wxFrame
{

    public:

        CLEditFrame(const wxString & title);

    protected:

    private:

};
```

**CLEditMain.cpp:  Main implementation
file CLEditMain.cpp**

Recall that C++  is not clairvoyant. It needs to know things in advance. We’ll include the headers for wxWidgets, our own headers, and the standard namespace like always. Let’s unwrap.

We’re saying we want a function named CLEdit, within '::' our class CLEdit that uses a single parameter named 'title', that inherits ' : ' from class xwFrame. Class wxFrame takes multiple parameters that we’ll cover, if and when we need to. I’m lazy that way. Suffice it to say that it’s many pages within the wxWidgets user manual. I only read the first chapter. Lazy.

The function implemented within the ellipses, is empty, for now.           


```
// the purpose of this file is . . .
#include <wx/wx.h>
#include "CLEditMain.h"
using namespace std;
CLEditFrame::CLEditFrame(const wxString & title)
: wxFrame(nullptr
          ,wxID_ANY
          ,title
          ,wxDefaultPosition
          ,wxDefaultSize
          ,wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX))
{

// nothing to put here - yet - but don't remove the brackets

}
```



**CLEditApp.h: App header 
file CLEditApp.h** 

Here we declare that we want a class called CLEditApp that inherits from wxApp. It’s impossible for you too see this without looking deep into the implementation of wxApp, but, trust me, we’re 'overriding' a function called OnInit() within wxApp. We saying that, never mind what wxApp OnInit does, we want OnInit() to do something else. Why? Because. The wxWidgets people tell us we need to do this, so we do. Live with it, or R.T.F.M. You probably have a cell phone and never ask anything about how it works. Mercifully, we’ll never touch this file again. It’s a hook into wx land.       


```
// the purpose of this file is . . .
#include <wx/wx.h>
using namespace std;
class CLEditApp : public wxApp
{
    public:

        bool OnInit();

    protected:

    private:

};
```


A word about functions and invoking them. C++ is funny. Functions can have a return type, or none, 'void'. Functions can have parameters, or none (), empty brackets. To C++ 'void This();' and 'void This(int);' are perfectly ok. They are different because the return value and or parameters or list of parameters are different. C++ will make up a name for each so you don’t have to. It’s called ‘mangling’. No kidding. It’s a feature called ‘polymorphism’. It’s an OOP thing. What’s it for? Imagine you want to add two things. Furthermore, you want to be able to add any two things. You would not want to create one function that accepts every type of thing in the known universe, check to see which two you got, then add them. Nor would you want to create a different name for every type of thing in the known universe. So you would create different functions, all with the same name, but with different parameters. Example 'int Add(int x, int y);' and 'string Add(string a, string b);' etc. This is really a cool idea, but, the issue is that as you are coding, C++ has no clue if you plan of adding numbers or adding strings and if you type the wrong one, C++ wont tell you. You'll find out, the hard way. lol   

**CLEditApp.cpp: - App implementation 
file CLEditApp.cpp**

So in our App, we want a frame, a window. IMPLEMENT_APP is a macro. A macro is a sophisticated include. It means 'do this' before you compile. We’re implementing our override of OnInit. We call our version CLEditApp::OnInit. It takes no parameters and returns a boolean value ( true or false) . Yup, ‘boolean’ is a type, true or false. In our version we’ll describe our frame. The first line is another mouthful. We’re implementing a pointer to our frame CLEdit, named frame and we’re assigning it as a ‘new’ CLEdit frame titled 'CLEdit'. This 'new' keywords means dynamic allocation of a program, an instance of a class. See 'cleanup' elsewhere. Recall the frame is a wxFrame thing and can do wxFrame things. One of the many things is a method or function called 'Show'. We tell C++ that we want to use 'Show' by naming our class followed by a dash, a shift right and the name of the method. Yikes!
	
Last we return 'true', because a) nothing went wrong and b) we need to return something because we said so when we implemented our version of bool OnInit(). Got it? We’ll see in other classes how we will potentially returning other values. Notice that the implementation includes both headers. This implies Main and App are tied, related.                                            


```
// the purpose of this file is . . .
#include <wx/wx.h>

#include "CLEditApp.h"
#include "CLEditMain.h"

using namespace std;

IMPLEMENT_APP(CLEditApp);

bool CLEditApp::OnInit()
{

    CLEditFrame * frame = new CLEditFrame("CLEdit @your command");

    frame->Show();

    return true;

}
```



**CLEdit:**

Compile it, the gear icon in Code::Blocks and run it, the play button in Code::Blocks and it will look like this:

![](../Pictures/CLEdit.png)

Wonderful. You’re on your way! I hope you got this far without too many issues. There is very little more we need to do to App or Main. Let’s continue adding trees to the forest.  If you want hurt your head you can read the wxWidget programmers manual. 

Let’s improve our frame, add these lines to App.cpp prior to the Show command. This is how I like my window. Simple. You can, on your own, make your windows dance.  Not me. Not for this. 

```
    frame->SetClientSize(1670,1020);

    frame->Center();

    wxFont myFont(10, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);

    frame->SetFont(myFont);

    frame->Show();
```

	Full transparency. We declared a variable called myFont, of wxFont type and implemented it here. I know. Notice that normally we would see “thing mything;”. This declares an object. When an object is declared, it’s constructor is executed. A constructor creates the object. The constructor for wxFont takes parameters. We used a couple of frame type functions() too! Objects have both a constructor function, executed when you say 'new' and a destructor executed when you say 'delete'. wxWidgets cleans up it's own stuff.  

	I’ve always had the habit of learning a tiny bit and then squeezing the most out of it. Sometimes that’s a bad thing. Kind of like driving at full throttle. People do that in boats all the time. I mean, if your little program can do it 10 times, it should be able to do it 110 right? How about 1000, or 10,000. There are lessons to be learned there. In the future you’ll ask yourself, if my program takes a minute to run one time, how many times could it run in a day? What if there are not enough minutes in the day? At some point you might have to deal with that. It’s an advanced topic.          

	That’s all for APP.cpp and App.h. We’re done with those two files. We’ll add a bunch more files and about 5000 lines of code, eventually. But, let’s continue to take things step by step. 

	Let’s add our 'controls' next. Controls are wx things. While we’re add it, we’ll start to organize our code as we should. We need to create headers for things like wx parts and functions. We’ll add two files to our project. These we’ll call wxparts.h and declare wx things in there and functions.h and declare our functions there, we’ll end up with almost 140 functions. Fear not.     

	In file Main.h add these line in the public section.

**CLEdit
CLEditMain.h**


```
// the purpose of this file is . . .
#include <wx/wx.h>
using namespace std;
class CLEditFrame : public wxFrame
{

    public:

#include "wxparts.h"
#include "functions.h"

    protected:

    private:

};
```

	
Notice that we’re including files within our project, so we code quotes instead of '<>'. Because quotes mean the file is within our project and '<>' are external. You’ll have to to tell Code::Blocks where these can be located. In the settings for the compile search directories I put

```
/home/pierre/CLEdit/include
/home/pierre/wxWidgets/include
/home/pierre/MySQL/mysql-9.1.0-linux-glibc2.28-x86_64/include
/home/pierre/MySQL/mysql-connector-c++-9.1.0-linux-glibc2.28-x86-64bit/include
```


In the linker settings I added the library

```
mysqlcppconn
```


Everything is happy. Did I mention you need to install wxWidgets, MySQL and C++ connection. It’s easy, I did it. Actually, the most helpful site for solving technical issues is chatgpt.com. Just go there and type for example 'solve install 
MySQL Linux' and you'll have the answers. It's 1000 times better than stackoverflow.

Lets start with the wx parts. The Frame we saw, now we need a few more things. A panel to put things into, in the frame. A few places to enter text, and a button. We’re going to gather data from the screen into our program, like taking notes off a blackboard. And we need variables with similar types to do that. C++ loves types and abhors mixing them.   

**CLEdit 
file wxparts.h**

```
// a frame is a window

        CLEditFrame(const wxString & title);

//controls
        wxPanel      * Panel;
        wxTextCtrl   * Command;
        wxButton     * Apply;

// this is the "screen"
// Line
// Code
        struct Screen
        {
            wxTextCtrl * Line;  // line command action
            wxTextCtrl * Code;  // text
        };
        Screen CL[50];

// this is captured from the "screen"
// Line
// Code
        struct Userinput
        {
            int Linel;          // line command string length
            wxString Linestr;   // line command string
            int Codel;          // Code string length
            wxString Codestr;   // Code string
        };
        Userinput Input[50];    // 50 lines on the screen
        Userinput uInput;       // a single line


        wxString    Commandstr;         // the command string
        wxString    PrimaryCommand;     // the Primary command
        wxString    FirstParameter;     // the first parameter
        wxString    SecondParameter;    // the second parameter
        wxString    ThirdParameter;     // the third parameter
        wxString    UserCodestr;        // Code string
        wxString    UserLinestr;        // line command string
```


Notice that a wxTextCtrl has both a length and a value properties, perhaps more, but , we need to capture both those. They are separate types, naturally, this is the reason we need a Userinput structure.

Add to functions.h.

**void CreateControls();**
	 
And use that in CLEditMain.cpp, its a function within our CLEditFrame class, like so: 

// the purpose of this file is . . .
#include <wx/wx.h>
#include "CLEditMain.h"
using namespace std;
CLEditFrame::CLEditFrame(const wxString & title)
: wxFrame(nullptr
          ,wxID_ANY
          ,title
          ,wxDefaultPosition
          ,wxDefaultSize
          ,wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX))
{

    CreateControls();

}


		* * * MORE BELOW 

// we’ll put the code for CreateControls() here . . .

So we’ve seen all the ways to execute a function. Give it’s name and if necessary, tell C++ where to find it, and how to handle it. 
Example  “here.this();”  “here->this();” and “this();”  are not the same.      
C++ will go there and do it, and come back. Yes. Just like a “goto” and come back.  

Notice that this is a ‘method’ within the CLEditFrame class. We’re introducing many concepts here so I need to slow down. The good news it that we’ll rarely send or receive parameters to and or from our functions. That’s way too much work!  

One Step at a time.

**Step One** declare a function


```
void CLEditFrame::CreateControls()
{


} 
```


**Step Two** add a panel. Ignore the “this” for now.   



```
wxPanel * Panel = new wxPanel(this);
```


        
**Step three** add a place where the user can enter a command, called Command. 
	
You can call it anything you’d like.  And set the length of that field to 200 pixels using the SetMaxLength() method of the wxTextCtrl object type.  The note on “point” l-r is left to right or X axis, the second point is top to bottom or Y axis. Size is width and height in pixels.     

    Command = new wxTextCtrl(Panel
                             ,wxID_ANY
                             ,"enter command here"
                             ,wxPoint(1,1)      // l-r,t-b
                             ,wxSize(1670,20)  //w,h
                             ,wxBORDER_NONE
                            );

	Command->SetMaxLength(200);

**Step four** add a button named Apply. It will say “Apply” on the face.

    Apply = new wxButton(Panel
                         ,wxID_ANY
                         ,"Apply"
                         ,wxPoint(1620,1)
                         ,wxSize(50,20)
                         ,wxBORDER_NONE
                        );
 
   
**Step five** add 50 lines where the user can enter line commands and lines of text, each in a different Y position.    
 
    int ypos = 20;
    for (int u = 0; u < 50; u++)
    {
        CL[u].Line = new wxTextCtrl(Panel
						,wxID_ANY,"000000"
						,wxPoint(1,ypos)
						,wxSize(60,20)
						,wxBORDER_NONE);
        CL[u].Line->SetMaxLength(6);
        CL[u].Code = new wxTextCtrl(Panel
						,wxID_ANY
						,""
						,wxPoint(61,ypos)
						,wxSize(1610,20)
						,wxBORDER_NONE);
        CL[u].Code->SetMaxLength(200);
        ypos += 20;
    }

I need to elaborate here on a couple of things. First let’s tackle the syntax. Wx parts accept many complex arguments. I put them on separate lines, so that I can change them, add them or delete them without risking affecting the other line of code, and so I can read it. You don’t have to do that. That’s what I do with 40 years of experience behind that choice.

Clearly I’ve declared and implemented two integer variables ‘ypos’ and ‘u’. I never do that. We’ll fix that in a minute. We’ll declare them in a file called variables.h. They will exist where they belong. Accessible everywhere. Prove me wrong. 

Actually, what I’m avoiding here is a conversation about scope. Scope is a dirty little secret, like private. Prior to the Personal Computer, there wasn’t scope, or Object Oriented Programming or Graphical User Interfaces or a mouse. Every variable was ‘global’ in scope, meaning you could refer to it anywhere anytime. That practice is powerful, dangerous and mildly inefficient. So we’ll continue doing that because then we can avoid conversations about scope and will not need to get into things like pointers. I’ve written millions of lines of code without needing any of those concepts. If I’m bored by the end of this, I’ll add an addendum to elaborate. 

So what is a “for”. A “for” is the primary form of iteration, a loop! In this case we’d like to implement 50 text controls, slightly altering the Y position of each so they are not stacked up on top of each other. What you want done, in a loop, is defined between the ellipse’s, like a function. The driver of the loop is in the brackets, separated by semi colons. The first is saying start a counter at 0. The second is how long to keep doing the loop, aka “while”, in this case while u < 50. “<” means logical “less than”. “>” means logical greater than”. Last is, iterate u. In C++ speak ++ means add one to whatever. So were saying take u, and add one to it.  

C++ is funny. It will let you say ‘u--’, ‘--u’,’u++’,’++u’. And they mean different things. Try it yourself and watch what happens. My advice, stick to the ‘u++’ and “u--” where needed.     

Important for you to notice that we’ll have 50 CL somethings, and we refer to the first one as 0
and not 1. Many compilers handle that for us, but for some strange reason C++ does not. Probably because C++ loves pointers and beginning the address of anything is 0, or displacement zero.
The variable u is being used as an index to an array of 50 CL’s, Screen structures. Numbered 0-49!
Remember that!                                 
            
**Step six** add a status bar at the bottom of the screen, so that we can tell the user what’s happening. 

Create status bar is a wxWidgets thing.   
	    

    CreateStatusBar();

    wxLogStatus("Hello ");

}

All together now in CLEditMain.cpp

**void CreateControls();** // declared in functions.h
void CLEditFrame::CreateControls()  // implemented in main.cpp
{

    wxPanel * Panel = new wxPanel(this);

    Command = new wxTextCtrl(Panel
                             ,wxID_ANY
                             ,"enter command here"
                             ,wxPoint(1,1)      // l-r,t-b
                             ,wxSize(1670,20)  //w,h
                             ,wxBORDER_NONE
                            );

    Command->SetMaxLength(200);

    Apply = new wxButton(Panel
                         ,wxID_ANY
                         ,"Apply"
                         ,wxPoint(1620,1)
                         ,wxSize(50,20)
                         ,wxBORDER_NONE
                        );

    int ypos = 20;
    for (int u = 0; u < 50; u++)
    {
        CL[u].Line = new wxTextCtrl(Panel,wxID_ANY,"000000",wxPoint(1,ypos),wxSize(60,20),wxBORDER_NONE);
        CL[u].Line->SetMaxLength(6);
        CL[u].Code = new wxTextCtrl(Panel,wxID_ANY,"",wxPoint(61,ypos),wxSize(1610,20),wxBORDER_NONE);
        CL[u].Code->SetMaxLength(200);
        ypos += 20;
    }

    CreateStatusBar();

    wxLogStatus("Hello ");

}


Compile and run. You should see all the controls.

Alright. Now we’re ready to start cooking with micro waves. So we don’t forget, let’s create a variables.h file and put ypos and u in there, and include that file in Main.h.

In file variables.h.

// variables
// characters
        char Byte;          // do nothing - like a continue *here
// integers
        int u;              // index into user input
        int ypos;           // Y position

CLEditMain.h

// the purpose of this file is . . .
#include <wx/wx.h>
using namespace std;
class CLEditFrame : public wxFrame
{

    public:

#include "wxparts.h"
#include "functions.h"
#include "variables.h"

    protected:

    private:

};

In CLEditMain.cpp remove the local scope int declares. I’ll be using local scope declaration one time in this project because, otherwise I get an undesirable result.     

    ypos = 20;
    for (u = 0; u < 50; u++)	
    
Let’s make some more moves now. What’s the next thing? Well, now that we have a window, a frame a panel and a few controls, let’s have a fire side chat about connecting our program to the GUI.  At this point you can enter commands, type in line commands and text, press a button even. But nothing will happen. The window opened, the button changed shades when you press it. This means wxWdgets is ‘in the house’. It’s performing a send/receive loop! All you can do is run or stop the application.  So far all we’ve done is create an interface, now we need to connect, or “bind” in wxWidget terms our GUI to our application. I’ll call that a connection. Ok?

	
CLEdit is similar to the editor I used for 40 years, on big iron computers aka TSO/Edit. I've set the file size limit is 25,000 lines. The biggest single program I ever coded was 23,000 lines called HKOP0203. I’ve seen bigger, ZF9100 at 95,000 lines! Imagine that in cards, almost 48 boxes. You'd need a van.  
 
**Requirements**
As Primary Commands via the Apply button, let’s deal with: (make a  connection)
  
"create filename" - create a file from a block of Copy code 
"change fromstring to string all" - change a string to another string everywhere
"change fromstring to string" - one at a time
"copy filename" - into the file After a line location, insert a file   
"find string" - find a string, and next 
"open filename" - open a file
"save" - save the current file
"saveas filename" - save the current file with a different name
"exit" - terminate the application. bye,end,quit,leave should work just as well
"fromstage mydb mytable" - get a file from a database name/table name - MySQL loves many tables                           										more than many rows!
“tostage mydb mytable" - store the file in a database name/table name
"bottom" - scroll to the bottom of the file
"home" - scroll to the top of the file
"up" - page up
"down" - page down
"help" - provides these notes in the Log file

If we need a challenge, we could add let say “up” and a number and scroll up that many pages. You should try that. Once you do that you can try “down”.  
 
For Key Board Commands let’s deal with: (make a connection)

ENTER: Process Screen - process what the User entered
   F5: Find - repeat find
  END: Bottom - scroll to the bottom of the file
 HOME: Home - scroll to the top oof the file
   F7: Up - page up
   F8: Down - page down
   F1: Help - provide these notes :)
   F6: Change - repeat change

For Line Commands let’s deal with: (make a connection)

Line Commands - entered to the left overlaying the line numbers
'A' - place a copied line or copy block after this line - as many places as you want, multiple after 
'B' - place a copied line or copy block after this line - as many places as you want, multiple before
'C' - copy a line
'CC' - copy a block,  CC on one line, CC on another line anywhere in the file  
'D' - delete a line
'DD' - delete a block of lines
'I' - insert a line
'M' - move a line after or before another line
'MM' - move a block of lines after or before another line
'O' - overlay a line with the contents of a moved line - all the space in the overlay line will be replaced with the data from the moved line and the moved line will dissappear   
'OO' - pverlay a block of lie with the data from a corresoponding move block 
'R' - repeat a line
'RR' - repeat a block of lines 
'>' - shift right, tab a line 4 characters
'>>' - shift right, tab a block of lines 4 characters 
'<' - shift left, tab a line 4 characters
'<<' - shift left, tab a block of lines 4 characters

As home work, think about how you could modify the feature to Delete a number of lines, Repeat a number of lines, Insert a number of lines, Shift lines a number of characters.
   
Hopefully you’re still with me. I totally understand that all this might be very strange to you. You might be thinking, I’ll just NotePad++ and be done. But you’d learn nothing. 

Before we forget, we’ve got some housekeeping to do. Remember when I talked about the basics of a program? We should add those now and get into the practice of doing it, good and proper regardless, of the size of the task. 

I’m not talking about style. I wrote a couple of programs called Squish and Squash. Squish would change the text of code to one ‘word’  per line. So “total = sales + taxes;” would become 6 ‘lines of code’. At the same time total, sales and taxes, while perfectly reasonable variable names, I converted to three character junk names like AAA, AAB, AAC and so on. Comments were long gone too! Squash took the output of Squish and compressed it into as few lines as physically possible, but still compile and run correctly. The result was “AAA=AAB+AAC;”.Why did I do that? Well it was because someone, a manager, said that it did not matter how a program was written. That was in response to an ‘observation’ I had made about another ones masterpiece. I made my point and continued to work there for 22 years, but never got promoted.  The point I’m trying to make is that it does matter how you write your programs. The CPU could care less how many statements there are in your program. And with technologies like CUDA, there is nothing you can do to slow it down. Take your program from 10 years ago and recompile it. It will likely run faster and better. Modern compilers do that. Now try to add a feature to a program you wrote 10 years ago. Do you still understand the code? Do you remember the requirements? Good luck. 
   
Write your program as clearly as possible. Take as many lines as you want. Code as many lines as you want. Replicate functions. No matter. The compiler and modern cpu’s will make your worst logic efficient. The computer will always understand what you want.           

Tasks rarely remain simple. Keep them simple. If you want, code CLEdit without any functions. Also known as ‘top down’ programming. One big massive chunk of code. That’s the way it was in 1980.  Yuck. Your welcome to try. 

	
Make  CLEditFrame::CLEditFrame  in file CLEditMain.cpp look like this:

    LogFile.open("CLEditLog.txt", std::ios::out);  //add this
    ErrFile.open("CLEditErr.txt", std::ios::out);  //add this

    CreateControls();

    Initialize();  //add this

    if (Return == false)    //add all this
    {
        ReturnFunction = "CreateControls ";
        ReturnCode = "3500 ";
        ReturnMessage = " Create Controls failure";
        OnTerminal();
    } 

Any program worth running will create both a log file and an error file. We are not using “cerr” or “clog” because we want our stuff separate and easy to find.  I recall back in the university days, my first week in computer science 101, learning Fortran. Fortran put a man on the moon. Anyway, I was quite certain my code should work, but, as much as I tried to impose my will on the code, it didn’t work.  I walked up to my professor, Mr Cooper, and tried to convince him that my creation was a work of art and should work as I intended but didn’t. He looked straight into my eyes and said “right as you are, you’re flying blind”. Then he walked away, we never spoke again. I went back to my room, dejected. I had no idea what he was talking about. I had to think for a long time to realize, we’re exactly the same. When we speak, we assume that the people know what we’re talking about and sometimes we leave out important parts! What Mr Cooper was trying to tell me was, yes, I know, your creation is amazing, but, do you know what it did? What did it try to do? What could it not do? When your TV has power, a little red light shows up. That little red light tells you that the TV has power. It is feedback to you. It has nothing to do with what the TV does. All programs need little red lights, we can call them log files. We also need error files, for when things go badly, we need to know when, where,why and hopefully how to fix the issue. Maybe even send the file to someone as a text message so they can get to work on the issue asap. I worked like that for 40 years. Remember, “to err is human, to really foul things up requires a computer!”. Your car is loaded with computers and ‘red lights’, it runs a program called CANBUS and has a port for collecting the error log. Heck, my 22’ Dodge Charge eMails me my tire pressure every month. How does it do that? Computers and ‘the internet of things’ aka IoT. I’m pretty sure there are no elves in my driveway taking pressure readings. All proper operating systems create log files, otherwise, you’d have no idea what is going on.    

Foundation. When a program starts it should implement all it’s variables with an initial value. Preferably not “null”. This is programming 101 and forgetting to do this will bite you in the rear end, in short time, without fail. Depending on where you work, simple basic programming errors can get you fired, or lose millions of dollars or even get people killed.
	
Make Initialize() in file CLEditMain.cpp look like this:

**void Initialize();** // declared in functions.h
void CLEditFrame::Initialize()  // implemented in Main.cpp
{

    LogFile << "Initialize " << std::endl;

// variables
    Byte = ' ';      // do nothing - like a continue
    ypos = 0;        // Y position
    u    = 0;        // index into the user input

// error / logging
    Return = true;          // return
    ReturnFunction = "";    // the name of the function running
    ReturnCode = "";        // a return code
    ReturnMessage = "";     // a meaningful return message

}

Make  OnTerminal in file CLEditMain.cpp look like this:

**void OnTerminal();**	// declared in functions.h 
void CLEditFrame::OnTerminal()	// implemented in Main.cpp 
{

    LogFile << "On Terminal " << std::endl;

    ErrFile << ReturnFunction << ReturnCode << ReturnMessage << std::endl;

}

Add the return variables to variables.h 

// variables
// characters
        char Byte;          // do nothing - like a continue *here
// integers
        int u;              // index into user input
        int ypos;           // Y position
// strings
        std::string ReturnFunction; // the name of the function 										running
        std::string ReturnCode;     // a return code
        std::string ReturnMessage;  // a meaningful return message
// boolian
        bool Return;         // return code

And add the functions to functions.h

// functions are repeatable reusable pieces of useful code
// Logic
        void OnTerminal();
        void CreateControls();
// basics
        void Initialize();

Create a file called objects.h with 

// logging and error messages
        std::fstream LogFile;
        std::fstream ErrFile;

And include the fstream library it in CLEditMain.h. Yes I know I said we won’t use file streams but just this once. 

// the purpose of this file is . . .
#include <wx/wx.h>
#include <fstream>
using namespace std;
class CLEditFrame : public wxFrame
{

    public:

#include "wxparts.h"
#include "functions.h"
#include "variables.h"
#include "objects.h"

    protected:

    private:

}; 

You’ll develop a rhythm! Repetition is king.  Our little editor is becoming a work of art! A thing of beauty as I like to say. Lets run it and look into the log and error files shall we. We’ll type some stuff, press the button and then exit.

The log file says:

Create Controls 
Initialize 

We love that!

The error file says, nothing. We prefer that.

Did you remember to add the LogFile statement at the beginning of CreateControls()? I didn’t. I went back to CLEditMain.cpp and added it. 

This is actually very exciting. What did we learn so far? We learned that within Main.cpp in the wxframe instance, we can execute functions! Yes. You’re a genius.
	
Let’s get back to the connections. Now we can get rolling building on what progress we’ve made and practices we’ve, dare I say, mastered.  Let’s start with Apply. What does Apply mean to us? It means apply, or act on, the command the User entered. So, we’ll need a function/method/event handler, we’ll call it OnApplyClicked.  Why not. If you’re reading another C++ book, or the wxWidgets programming manual, you might even consider handling ‘mouse over’. Imagine, “but I didn’t press the button, I didn’t! “. 

We’ll add that function to the functions header. Remember that this is the connection of an “event” and your program. The wxWdiget GUI framework will do the job of taking the event and passing it (by reference) to our function(). If you’re wise, you realize that ‘event’ is a reference to a wxCommandEvent type declared locally. WxWidgets will populate it with an appropriate value. Don’t worry about it. It’s C++ talk.  

Add to functions.h      

// event handlers
        void OnApplyClicked(wxCommandEvent & event);

We’ll “bind” it to the Apply button in file CLEditMain.cpp in function
CLEditFrame::CreateControls().    

Add in CreateControls()

	Apply = new wxButton(Panel
                         ,wxID_ANY
                         ,"Apply"
                         ,wxPoint(1620,1)
                         ,wxSize(50,20)
                         ,wxBORDER_NONE
                        );

    	Apply->Bind(wxEVT_BUTTON, & CLEditFrame::OnApplyClicked, this);

We’ll build our OnApplyClicked().

**Void OnApplyClicked(wxCommandEvent & event);** 	// declared in functions.h
void CLEditFrame::OnApplyClicked(wxCommandEvent & event) // implemented in Main.cpp 
{

    LogFile << "On Apply Clicked " << std::endl;

}

Compile and run it, and press the Apply button, once or twice, and look at the Log file – naturally. 

Create Controls 
Initialize 
On Apply Clicked 
On Apply Clicked 
On Apply Clicked 
On Apply Clicked 

Nice! 

So, let’s talk. We want to be able to respond to commands. We need to capture the User input from the Command line, figure out what it says and do the appropriate thing. From everything we planned, we’ll need at least a Primary Command, and a couple of Parameters. 

The next level is everything else on the screen that might have changed because the User typed something. This is the Main Process. Our side of the send / receive loop. 

User text input has two parts: The length or number of characters they entered and the value entered. The way we get those properties is by using wxWidget methods that are built for us. 

OnApplyClicked()  will start out like this:
```
**void OnApplyClicked(wxCommandEvent & event);** 	// declared in functions.h
void CLEditFrame::OnApplyClicked(wxCommandEvent & event) // implemented in Main.cpp
{

    LogFile << "On Apply Clicked " << std::endl;

    Commandl = Command->GetLineLength(0);

    LogFile << "Length " << Commandl << std::end;  
    
}        
```

Use ‘->’ the GetLineLength method/function/program that is part of our Command wxTextControl object. It returns a property, length, as a number. This is the number of keystrokes entered by the User. Assign that number value to our variable Commandl. In short, get the length of the command from position 0, and store it in variable Commandl. 

Add to variables.h. 

```
        int Commandl;       // the length of the command line string
```


Compile and Run the program, enter a word, I entered “thisisabigword”, pressed Apply and then looked at the log file. Rinse and repeat. I’m not suggesting you log everything happening, I’m warning you strongly against not doing so.  Logging is an excellent source of ‘proof’ that you’re exercising all your functions, regardless of if they actually work. That’s what we call debugging. Bugs are undesirable features, we like to say. Proof of accurate, meaningful, relevent testing will preserve your behind, lack of proof, well, not so much. It’s a science. They are even called Testing Engineers.    

Create Controls 
Initialize 
On Apply Clicked 
Length 14

Time for another chat. We already know that wxWidgets will loop between the window and our application back and forth for each event. We also need to create a send / receive loop between our application and the GUI. We need to think of reasonable paths of logic. For example, if the user wants to open a file, they are basically saying, never mind what I typed on the screen, just get me a file and put it’s contents on the screen. For us, and our application, there is only one screen. Alternately, if the user entered “down”, or pressed “Page Down” we need to handle everything that they entered and then perform the ‘page down’ scroll. We need to handle the lack of a command too. This is where we put our “sequence” hats on. What happens first, then next and so on. Many people get this part all wrong. They know what they want to do but not how to order it. Sequence is everything.  

So OnApplyClicked will look like this:         


```
**void OnApplyClicked(wxCommandEvent & event);** 	// declared in functions.h
void CLEditFrame::OnApplyClicked(wxCommandEvent & event) // implemented in Main.cpp
{

    LogFile << "On Apply Clicked ";

    Commandl = Command->GetLineLength(0);    // get the length

    if  (Commandl == 0)
    {
        goto MainProcess;
    }

 
//         * * * MORE BELOW
       
MainProcess:

    ProcessScreen();     // this is the receive – process all the 							user data and act on it
    LoadScreen();        // this is the send – then send back the 							data

ExitOnApplyClicked: 
	
    Command->Clear();    // wipe out the command on the screen 

    Command->SetFocus();    // place the cursor within the command 							 line on the screen

}
```

I don’t want any grief about the “goto”.  A “goto” within the function() is perfectly acceptable. A “goto” is no different than a “return” or a “break”. Back when there were dinosaurs, we used goto to go to a different function or even the dreadful “goto depending on”. Equally bad ideas. We’ll never goto anywhere outside our function(). Labels, like MainProcess are perfectly acceptable forms of both documentation and flow control. When you invoke a function, C++ will “goto” that function and come back. Period. The End.     

What I’ve tried to convey here in code is that some commands require more or less actions. You can see and understand that, I hope. Also, we need to support our send / receive loop. But let’s not get too crazy. Let’s work on the most likely things first. The send / receive loop. That has to happen no matter what. So we’ll do that first. Once that is out of the way, then the fireworks can begin.

But first, I always say that. What I mean to say is let’s get the wxWidgets stuff out of the way first so we can move on with our busy lives. Let’s complete another connection! A keyboard connection. Our GUI friend wxWidgets has a feature called an event table. It’s a macro. 

Add to Main.h 

```
    private:

           wxDECLARE_EVENT_TABLE();

```


Add to Main.cpp 


```
using namespace std;

wxBEGIN_EVENT_TABLE(CLEditFrame, wxFrame)
    EVT_KEY_DOWN(CLEditFrame::OnKeyDown)
wxEND_EVENT_TABLE()

CLEditFrame::CLEditFrame(const wxString & title)      
```


Add to CreateControls()

```
	 wxPanel * Panel = new wxPanel(this);

      Panel->Bind(wxEVT_CHAR_HOOK, & CLEditFrame::OnKeyDown, this); 

```


Add to functions.h 

// event handlers
        void OnApplyClicked(wxCommandEvent & event);
        void OnKeyDown(wxKeyEvent & event);
// process screen
        void ProcessScreen();
  	  void LoadScreen();

In Main.cpp add the three functions, we’ll put meat on the bones soon, I promise.

```
**void OnKeyDown(wxKeyEvent & event);** // declared in functions.h 
void CLEditFrame::OnKeyDown(wxKeyEvent & event) // implemented in Main.cpp
{

    LogFile << "On Key Down " << std::endl;

    switch ( event.GetKeyCode() )
    {
        case WXK_NUMPAD_ENTER:
        case WXK_RETURN:
            ProcessScreen();
            LoadScreen();
            break; 

//         * * * MORE BELOW 

    }

    event.Skip();

}
```


**void ProcessScreen();** // declared in functions.h 
```
void CLEditFrame::ProcessScreen() // implemented in Main.cpp
{

    LogFile << "Process Screen " << std::endl;
    
}
```

**void LoadScreen();** // declared in functions.h 
```
void CLEditFrame::LoadScreen() // implemented in Main.cpp
{

    LogFile << "Load Screen " << std::endl;

}
```

Compile and Run the program, hit Enter and then look at the log file. Notice we’re adding pieces, then testing. We’re not coding 5000 lines at once and not testing until we think we’re done. That’s crazy. Testing in stages, builds confidence.   

Create Controls 
Initialize 
On Key Down 
Process Screen 
Load Screen 

Notice that wxWidget has more than one way to ‘bind’ controls. I’m only doing the necessary!  

Nice. We’ll comment out the logfile statement within OnKeyDown otherwise we’ll have a line in the log for each and every single keystroke! Correct. Having an event handler for ‘key down’ means our program will be run each and every time the User presses a key on the keyboard! The IDE takes advantage of that to provide ‘intellisense’ and other functions.  
	
Let’s discuss OnKeyDown a little more. Here we’re using a switch/case construct. It’s a C++ version of IF/ELSE/IF/ELSE but ‘cleaner’. I’m not a fan, because it’s not very clear if case with no code below it, means do nothing or it means a conditional “or”. A couple of tests and you’ll see it means conditional “or”. The other thing I’m not crazy about is that the case can only be used when looking for different numeric values. In some languages ‘nothing between, means exactly that. Compilers are strange creatures that do something you like and others you might not like. The C++ compiler is very very quirky. I’ll talk more about that when I have to. The “break” statement is a “goto”, in this instance it means get out of the switch. Particularly, execute the next instruction after the switch block {}, Skip().  Skip means we’re done, tell the GUI to stop looking for more event handlers for this event. 

Let’s explore the function ProcessScreen(). ProcessScreen() means capture all the User input outside of the Command Line. In this instance we’re talking about the 50 lines of text the user can enter. There are seven, logical units of work,  parts to ProcessScreen(). They all make sense . Let’s begin.

**Part One:** ProcessScreen() - Get the data from the screen.

In some languages this is all done for you with a simple command like ‘receive’ or ‘get’.  
In C++ we get the privilege of using code to accomplish what we want. Byte by Byte. So lucky we are.
 

```
void CLEditFrame::ProcessScreen()
{

    LogFile << "Process Screen " << std::endl;

// capture everything from the screen
// capture all code where ever the block command causes the file size 
// 				to change: c/CC d/DD m/MM o/OO r/RR
    ReadScreen();

//         * * * MORE BELOW

}           

	Add to functions.h 

		void ProcessScreen();
		void ReadScreen();
		void InitUser();
		void WhatCommand();
		void WhatCommandA();    

	Add to variables.h

        int UserLinel;  // line command string length
        int UserCodel;  // Code string length
        int wfilecnt;   // the number of records in the current file
        int frstl;      // the first line to the screen
        int i;          // index into current file or string
        bool haveaFile; // are we starting with blank screen or
// 	                     did we open or stage a file

	Add a file called trackers.h 

	Add to trackers.h

// line command trackers
        int  afters;   // single or multiple Afters
```


ReadScreen() means capture everything from the 50 line of user input. Note we are initializing that 50 element array.  Before we capture any data, be sure to make proper space to get clean data. So we’ll “initialize” our array. Notice that ‘input’ from the User, from a text control is in two parts, a length and a value. That length is not only handy, it’s essential.```
```
**void ReadScreen();**	// declared in functions.h
```

```
void CLEditFrame::ReadScreen()	// implemented in Main.cpp
{

    LogFile << "Read Screen " << std::endl;
    
// user input
    InitUser();

// capture everything from the text controls Line Commands and Code
   
    for (u = 0; u < 50; u++)
    {
        UserLinel   = CL[u].Line->GetLineLength(0);
        UserLinestr = CL[u].Line->GetLineText(0);
        UserCodel   = CL[u].Code->GetLineLength(0);
        UserCodestr = CL[u].Code->GetLineText(0);
        Input[u].Linel = UserLinel;
        WhatCommand();
        Input[u].Codel = UserCodel;
        Input[u].Codestr = UserCodestr;
        if (!haveaFile)   /* means we're starting from a blank screen 
           			     not an open, from stage or copy after */
        {
            wfilecnt = u;
            wfilecnt++;    // off by one eh
        }
    }

    if (!haveaFile)   /* means we're starting from a blank screen not 					             an open, from stage or copy after *
    {
        haveaFile = true;
        frstl = 1;
    }    
}
```

Reviewing the code for new things, GetLineText returns a string, the text entered by the User. The 'if', a condition, asking if we 'haveafile', in the negative '!'  is meaningful to the process. If we opend a file we’d load it and have a wfilecnt. We need that counter. I coded a negative because otherwise I’d have to do this:


```
	if (haveaFile)
	{
		do nothing
	}
	else	
	{
		wfilecnt = u;
		wfilecnt++;    // off by one eh
	}  
```

   
There is no “do nothing” command in C++, and adding something like byte = ‘ ‘;  instead is naughty. Just some pointless instruction that does nothing but cause confusion.

Look at this logic closely. It has a secret. Most mere mortals would code this.


```
	for (i = 0; i < 50; i++)
	{  
    		Input[i].Linel   = 0;  
    		Input[i].Linestr = ""; 
    		Input[i].Codel   = 0;  
    		Input[i].Codestr = ""; 
	}	  
```

That is 50 x 4 assignments or 200. The code below is 50 + 4 or 54. Remember that. It makes huge difference in performance. See my example InitializeArrays to learn and appreciate even more.

You can do this ‘trick’ in Fortran, C, COBOL etc, do not try that in C# it won’t work. What it does is beyond weird. C# “does not use pointers”. Ya right. If you do this ” Input[i] = Input[0]; “ in C#, what it does is make Input[i] point to Input[0]. What does that look like, well when you change Input[0], it changes everywhere in the array! I’ve proved it. I wrote a paper on it and sent it to Microsoft, 15 years ago. I know a thing or two.    

**void InitUser();** 	// declared in functions.h
```
void CLEditFrame::InitUser()	// implemented in Main.cpp 
{

    LogFile << "Init User " << std::endl;

// this is the input from the user screen
// 50 lines on the screen
    u = 0;
    Input[0].Linel   = 0;       // line command string length
    Input[0].Linestr = "";      // line command string
    Input[0].Codel   = 0;       // Code string length
    Input[0].Codestr = "";      // Code string
    for (i = 1; i < 50; i++)
    {
        Input[i] = Input[0];
    };

// a single line
    uInput.Linel   = 0;     // line command string length
    uInput.Linestr = "";    // line command string
    uInput.Codel   = 0;     // Code string length
    uInput.Codestr = "";    // Code string

// a line of user input from the screen
    UserLinel = 0;          // line command string length
    UserLinestr = "";       // line command string
    UserCodel = 0;          // Code string length
    UserCodestr = "";       // Code string

}
```


Reading through the logic we see, a simple way to prevent logging WhatCommand 50 times! It’s a cheat way of saying ‘on one’ or ‘first time’.   Make the line command uppercase and only look at the first two characters, because this is all we want. The User will learn quick enough. For now.

**void WhatCommand();** // declared in functions.h
```
void CLEditFrame::WhatCommand()	// implemented in Main.cpp
{

    if (u == 0)
    {
        LogFile << "WhatCommand " << std::endl;
    }

// uppercase
    UserLinestr[0] = toupper(UserLinestr[0]);
    UserLinestr[1] = toupper(UserLinestr[1]);

// look for line commands in the first position only
    if (UserLinestr[0] == 'A')
    {
        WhatCommandA(); return;
    }

//      * * * MORE TO BELOW

    Input[u].Linestr = UserLinestr;

}
```


Having identified the User entered an “A”, capture it and count it. Could you combine WhatCommandA() into the condition statement that identified the “a”, yes, but this is only because an “a” is not big deal. You need to capture it and count them. You’ll see that this is not the case for all the line commands. One day, we might want to make WhatCommandA() more complicated. Remember the thought process. When I created WhatCommand(), I just repeated the pattern, identify the letter, create a function that will be implemented to do the needful on each. The needful depends on the letter.  The needful can and will change to be more complex, never the other way.

**void WhatCommandA();** // declared in functions.h
```
void CLEditFrame::WhatCommandA() 	// implemented in Main.cpp
{

    LogFile << "WhatCommand A " << std::endl;

    Input[u].Linestr = "A";

    afters++;

}
```
	
Functions like toupper() are very handy. I mean, you can imagine if you had to code that? It would be 26 conditions and assignments. Just use the function. It’s open source.
 
Ok, lots to see, and think about. You should be getting the idea that we’re going to add a “WhatCommand()” the elaborates every command we care about. For now, lets do the compile, run and look at the log. I ran it and entered an A and pressed enter. This is what I got. Good.

Create Controls 
Initialize 
Process Screen 
Read Screen 
Init User 
What Command 
WhatCommand 
WhatCommand A 
Load Screen 




**Part two:** ProcessScreen(), did anything change? 
	
Changes in data, affect logic applied to that data. We add a new function LookForChanges(). I hope that is a clear enough name.   

```
void CLEditFrame::ProcessScreen()
{

    LogFile << "Process Screen " << std::endl;
// capture everything from the screen
// capture all code where ever the block command causes the file size to change: c/CC d/DD m/MM o/OO r/RR
    ReadScreen();

// did anything change on the screen - if not, skip the Find() on a find next F5
    LookForChanges();  

//         * * * MORE BELOW
```


We compare what we received with what we already have. Think about the relationship between the 50 lines on the screen and the potential 25,000 line of code as a stack of 50 punch cards versus a stack of 25,000 punch cards. Or sheets of paper, or playing cards. The index “u” points to the user line/code and index “i” points to the whole stack of them. We use the ‘master’ index “frstl” to tell us which card in the stack is the same card as in the beginning of the user stack. And of course, we cannot forget that the card number versus the array index is off by “1”, so we set “i” to (frstl - 1). Note, we’re concerned with the text changing, not the line command, we treat that elsewhere. If we see one change, that’s enough, stop looking. Don’t forget to add LookForChanges() in the functions header, functions.h.        

**void LookForChanges();** // declared in functions.h
```
void CLEditFrame::LookForChanges() 	// implemented in Main.cpp
{

    LogFile << "Look For Changes " << std::endl;

    changes = false;

// the index from the screen "u" to Work Input is "frstl"

    i = frstl - 1;
    for (u = 0; u < 50; u++)
    {
        if (winputfile[i].wIFCode == Input[u].Codestr)
        {
            changes = false;
        }
        else
        {
            changes = true;
            return;
        }
        i++;
    }

}
```


Here is a thought experiment for you. That code is bad. We need to know if anything changes, and stop looking if it has. But this logic is turning the flag ‘changes’ on and off. We need to check for something, 


```
if (winputfile[i].wIFCode == Input[u].Codestr)
```


then iterate the array 


```
 i++;
```


it would appear that we could create a dothis() function 

```
void dothis()
{
	if (winputfile[i].wIFCode == Input[u].Codestr)
      {
      	changes = false;
      }
      else
      {
            changes = true;
            return;
      }
}
```

and then change the loop to 
 

```
    for (u = 0; u < 50; u++)
    {
        dothis();
        i++;
    }
```


and it would...break! What?!

It would break because the return exits dothis() and not LookForChanges(). It would loop 50 times. And as a bonus, you might not ever notice there is a change, unless it is on the last line! Who said programming was easy? The best hidden bug I’ve ever seen occurred when the program ran past midnight, on the last day of the month! As the program was running the date changed. Try to reproduce that!

Here is a safer clearer better way to code this, even though it uses a 'not equal'. The condition now says exactly what we want to know. Just be careful with the return, it exits the function. It is not a ‘continue’. Meaning, if you put code after the 'for' loop, it wont ever execute. And C++ will not tell you. C++ is funny.

 
```
   for (u = 0; u < 50; u++)
    {
        if (winputfile[i].wIFCode != Input[u].Codestr)
        {
            changes = true;
            return;
        }
        i++;
    }    
```


**Part three:** ProcessScreen(), - capture the data entered


```
void CLEditFrame::ProcessScreen()
{

    LogFile << "Process Screen " << std::endl;
// capture everything from the screen
// capture all code where ever the block command causes the file size to change: // c/CC d/DD m/MM o/OO r/RR
    ReadScreen();

// did anything change on the screen - if not, skip the Find() on a find next F5
    LookForChanges();

// move all the user Input into Work Input
// the index from the screen "u" to Work Input is "frstl"
    i = frstl - 1;
    for (u = 0; u < 50; u++)
    {
        winputfile[i].wIFlc   = Input[u].Linestr;
        winputfile[i].wIFCode = Input[u].Codestr;
        i++;
    }
//         * * * MORE BELOW
```


But Pierre, I could have coded LookForChanges inside this loop! Yes. You could have, and it would look ugly, and more importantly, do the highest evil of combining two units of work into one. Never in my life have I ever seen an instance where modifying a unit of work, that didn’t adversely effect the other unit of work. I have seen many, many people lose their jobs due to this. Keep you stuff separate. Be Kosher! 

This part means take everything entered, all the User “cards” and replace them in the file stack. This has no bearing on LookForChanges(), and visa versa, and neither will ever have to change. Each does it’s thing. The compiler does not give a hoot how many 'lines of code' you have, but when you look at a tangled mess, we used to call that 'spaghetti code' in the good old days, and it’s 2am and you just got back from a party, and there’s a missing penny on a report, your head will explode. Yes, you’ll spend 100’s of hours looking for a missing penny, if you choose programming as a career. It’s not the penny, it’s the fact that it’s missing. Extra pennies are even worse. Or imagine the SpaceX rocket is off course by 1/1000 of a degree! Keep it clean, simple. It will try to get messy and we will resist! 

Pierre, why didn’t you put this loop in a separate function? We’ll because what it needs to do is neat and tidy and fits in a few lines of code. Had the process of merging the card decks been more complex, I certainly would have done that. If, I find multiple places where I need to merge the deck, I’ll implement that in a function, like I do in many places for many things. Actually, I do the exact thing you’re asking about in the next part.            

**Part four:** ProcessScreen(), - initialize the input file

Visualize this. What we are actually doing is merging the User card deck, with the file deck. Then, we’ll make a whole new file deck, plus or minus the actions the user asked for. If the user asks to say, repeat a line, the new file deck will get bigger. If the user asks to delete a line, the file deck will get smaller. Right? So this step means, clear out space for the new deck. We do that in a few places, so we have a function for that called InitIF(). We add that to the header functions.h.  p.s. ProcessScreen() is in 16 places!

```
void CLEditFrame::ProcessScreen()
{

    LogFile << "Process Screen " << std::endl;
// capture everything from the screen
// capture all code where ever the block command causes the file size to change: c/CC d/DD m/MM o/OO r/RR
    ReadScreen();

// did anything change on the screen - if not, skip the Find() on a find next F5
    LookForChanges();

// move all the user Input into Work Input
// the index from the screen "u" to Work Input is "frstl"
    i = frstl - 1;
    for (u = 0; u < 50; u++)
    {
        winputfile[i].wIFlc   = Input[u].Linestr;
        winputfile[i].wIFCode = Input[u].Codestr;
        i++;
    }

// init Input File
    InitIF();     
```

InitIF() is implemented as follows, using our array “trick”. InitIF is used in 6 places.

**void InitIF();** // declared in functions.h
```
void CLEditFrame::InitIF()	// implemented in Main.cpp
{

    LogFile << "Init IF " << std::endl;

// the file being processed
    FileSizeError = false;      // file size error - exceeds 25000 lines

    inputfile[0].IFlc = "000000";   // line command string
    inputfile[0].IFCode = "";       // Code string

    for (i = 1; i < 25000; i++)
    {
        inputfile[i] = inputfile[0];
    }

} 

//         * * * MORE BELOW
```

**Part five:** ProcessScreen(), 

Apply the changes commanded by the User. This is the bulk of the work. And, believe it or not, the User can ask for things that just don’t make any sense, or can’t be done. We need to account for that. ApplyChanges() is a beast, but thoughtful. Don’t forget the functions header. The compiler will nudge you.        


```
void CLEditFrame::ProcessScreen()
{
//         * * * MORE ABOVE 
  
  	InitIF();

// copy Work Input to Input File
// applying any changes - if possible - adjust wfilecnt
// once all changes are applied - init all the command trackers and structures 
// CC DD MM RR OO
    badchanges = false;

    ApplyChanges();

//         * * * MORE BELOW
```


**Part six:** ProcessScreen()

If the User changes requested didn’t make sense, we wipe out the change trackers and it’s a do over. There are about 70 things we’re tracking. See, I told you it would get complex.

```
void CLEditFrame::ProcessScreen()
{

	* * * MORE ABOVE

    ApplyChanges();

    if (badchanges)
    {
        InitCTrackers();
        return;
    }
```

**Part seven:** ProcessScreen() 

If the Users changes made sense and were applied we do a complete do over of everything we captured and the trackers. Those changes are Copy lines, Move lines, Delete lines etc. We keep separate stacks of cards Copied, Moved, Overlayed(merged) or Repeated. We don’t need to do that for lines Deleted, Inserted or Shifted. 

```
void CLEditFrame::ProcessScreen()
{
	* * * MORE ABOVE

    if (badchanges)
    {
        InitCTrackers();
        return;
    }

    if  (changesapplied)
    {
        InitCC();
        InitMM();
        InitOO();
        InitRR();
        InitCTrackers();
    }
    else
    {
        wxLogStatus("applied");
    }

}
```

Before we get to Apply Changes, let’s fill out Process Screen to that point. And all the other pieces. Which are;	

Add to functions.h 
		
```
void LookForChanges();
		void InitIF();
		void ApplyChanges();
		void InitCTrackers();
		void InitCC();
		void InitMM();
		void InitOO();
		void InitRR();
```


Add the variables, trackers and structures. 

Add to variables.h
```
        bool FileSizeError;  // file size error - exceeds 25000 lines
        bool haveaCC;
        bool haveaMM;
        bool haveaOO;
        bool haveaRR;
        int haveaC;
        int haveaM;
        int haveaO;
        int haveaR;
```

Add to Main.h
```
		#include "structures.h"
```

Add to structures.h


```
// the file being processed
        struct InputFile
        {
            std::string IFlc;       // line command
            std::string IFCode;     // the line of code
        };
        InputFile inputfile[25000];  // 23,000 line is the biggest single block of 
//	            				code I've ever seen
// the work file being processed
        struct wInputFile
        {
            std::string wIFlc;      // line command string
            std::string wIFCode; // the line of code
        };
        wInputFile winputfile[25000];  // 23,000 line is the biggest single block
//    						of code I've ever seen

        struct cInputFile
        {
            std::string cIFCode;    // Code string
        };
// a line to be Copied
        cInputFile cinputfile;
// a block of lines to be Copied
        cInputFile ccinputfile[2000];  // a reasonable block copy would be what you
//							 can see on the current screen -


        struct mInputFile
        {
            std::string mIFCode;    // Code string
        };
// a line to be Moved
        mInputFile minputfile;
// a block of lines to be Moved
        mInputFile mminputfile[2000]; // a reasonable block move would be what you
//						 can see on the current screen


        struct oInputFile
        {
            std::string oIFCode;    // Code string
        };
// a line to be Overlaid
        oInputFile oinputfile;
// a block of lines to be Overlaid

        oInputFile ooinputfile[2000]; // a reasonable block overlay would be what
//						 you can see on the current screen


        struct rInputFile
        {
            std::string rIFCode; // the line of code
        };
// a line to be Repeated
// a block of lines to be Repeated
        rInputFile rrinputfile[2000]; // a reasonable block overlay would be what
//							 you can see on the current screen
```
 
Add to CLEditMain.cpp

**void LookForChanges();** 	// declared in functions.h
```
void CLEditFrame::LookForChanges()	// implemented in Main.cpp
{

    LogFile << "Look For Changes " << std::endl;

    changes = false;

// the index from the screen "u" to Work Input is "frstl"

    i = frstl - 1;
    for (u = 0; u < 50; u++)
    {
        if (winputfile[i].wIFCode != Input[u].Codestr)
        {
            changes = true;
            return;
        }
        i++;
    }

}
```

Standard array initialization of the input file, or current stack of cards.

**void InitIF();**	// declared in functions.h
```
void CLEditFrame::InitIF()	// implemented in Main.cpp
{

    LogFile << "Init IF " << std::endl;

// the file being processed
    FileSizeError = false;      // file size error - exceeds 25000 lines

    inputfile[0].IFlc = "000000";   // line command string
    inputfile[0].IFCode = "";       // Code string

    for (i = 1; i < 25000; i++)
    {
        inputfile[i] = inputfile[0];
    }

}
```

This is where most of the work is done. 

**void ApplyChanges();**	// declared in functions.h
```
void CLEditFrame::ApplyChanges()	// implemented in Main.cpp
{

    LogFile << "Apply Changes " << std::endl;

//      * * * MORE TO COME

}
```

Standard initialization of the change trackers, counters etc. 

**void InitCTrackers();**	// declared in functions.h
```
void CLEditFrame::InitCTrackers()    // implemented in Main.cpp
{

    LogFile << "Init CT Trackers " << std::endl;

    changes = false;       /* did anything on the screen change - effects
                              scrolling */
    changesapplied = true; /* did the changes get applied - might be incomplete
					         request */
    badchanges = false;    // requested changes didn't make sense
    afters = 0;            // number of After requests
    befores = 0;           // number of Before requests
    LCcnt = 0;             // number of line commands requested

    CCcnt   = 0;        // number of block Copy lines requests
    CCstart = 0;        // index to the first CC line in the block
    CCend   = 0;        // index to the last CC line in the block
    CCrows  = 0;        // how many rows in the Copy block
    singleC = 0;        // Copy a line - need Before(s) or After(s)
    blockCC = false;    /* Copy a block - need Before(s) or After(s) - can be used 
  				          in a Create  */

    DDcnt   = 0;        // number of block Delete line requests
    DDstart = 0;        // index to the first DD line in the block
    DDend   = 0;        // index to the last DD line in the block
/*  DDrows  = 0;           how many rows in the Delete Block - no need to
				   capture them, we just need to know where they are,
 				   they are being discarded */
    singleD = 0;        // Delete a line
    blockDD = false;    // Delete a block of lines

    singleI = 0;        // insert a single line

    MMcnt   = 0;        // number of Move line requests
    MMstart = 0;        // index to the first MM line in the block
    MMend   = 0;        // index to the last MM line in the block
    MMrows  = 0;        // how many rows in the Move block
    singleM = 0;        // Move a line - need Before(s) or After(s)
    blockMM = false;    // Move a block of lines - need Before(s) or After(s)

    OOcnt   = 0;        // number of Move Overlay line requests
    OOstart = 0;        // index to the last OO line in the block
    OOend   = 0;        // index to the last OO line in the block
    OOrows  = 0;        // how many rows in the Overlay block
    singleO = 0;        // Overlay a line - needs single Move
    blockOO = false;    // Overlay a block of lines - needs a block Move

    RRcnt   = 0;        // number of Repeat line requests
    RRstart = 0;        // index to the last RR line in the block
    RRend   = 0;        // index to the last RR line in the block
    RRrows  = 0;
    singleR = 0;        // Repeat a line
    blockRR = false;    // Repeat a block of lines

    SRcnt    = 0;       // number of Shift Right line requests
    SRstart  = 0;       // index to the last SR line in the block
    SRend    = 0;       // index to the last SR line in the block
/*  SRrows   = 0;          how many rows in the Shift Right block - no need to
 				   capture them, we just need to know where they are, 
				   they are being Shifted Right */
    singleSR = 0;       /* Right Shift a line ">" - needs a number of characters 					   (default is one space) *
    SRi      = 4;       // number of characters to Shift Right
    blockSR  = false;   /* Right Shift a block of lines ">>" - needs a number of 					   characters (default is one space) */
    SRl      = 0;       // length of the string to be Shifted Right

    SLcnt    = 0;       // number of Shift Left line requests
    SLstart  = 0;       // index to the last SL line in the block
    SLend    = 0;       // index to the last SL line in the block
/*  SLrows   = 0;          how many rows in the Shift Left block - no need to
				   capture them, we just need to know where they are,
 				   they are being Shifted Left  */
    singleSL = 0;       /* left shift a line "<" - needs a number of characters
				   (default is 1 space) */
    SLi      = 4;       // number of characters to shift left
    blockSL  = false;   /* left shift a block of lines - needs a number of 
				    characters (default is one space) */
    SLl      = 0;       // length of the string to be Shifted Left

}
```


Standard array initialization of the place we capture a block of lines to be Copied, it’s trackers and counters. 

**void InitCC();**	// declared in functions.h
```
void CLEditFrame::InitCC()	// implemented in Main.cpp
{

    LogFile << "Init CC " << std::endl;

// a line to be Copied
    haveaCC = false;
    ccinputfile[0].cIFCode = "";    // Code string
    for (i = 1; i < 2000; i++)
    {
        ccinputfile[i] = ccinputfile[0];
    }
    cinputfile.cIFCode = "";

    singleC = 0;        // Copy a line - need Before(s) or After(s)
    blockCC = false;    // Copy a block - need Before(s) or After(s) 
//					 can be used in a Create
    haveaC = 0;

}
```

Standard array initialization of the place we capture a block of lines to be Moved, it’s trackers and counters. 

**void InitMM();**	// declared in functions.h
```
void CLEditFrame::InitMM()	// implemented in Main.cpp
{

    LogFile << "Init MM " << std::endl;

    singleM = 0;  // Move a line - need Before(s) or After(s)
    blockMM = false;  // Move a block of lines - need Before(s) or After(s)
// a line to be moved
    haveaM = 0;
    minputfile.mIFCode = "";    // Code string
// a block of lines to be moved
    haveaMM = false;
    mminputfile[0].mIFCode = "";
    for (i = 1; i < 2000; i++)
    {
        mminputfile[i] = mminputfile[0];
    }

}
```

Standard array initialization of the place we capture a block of lines to be Overlayed, it’s trackers and counters. 

**void InitOO();**	// declared in functions.h
```
void CLEditFrame::InitOO()	// implemented in Main.cpp
{

    LogFile << "Init OO " << std::endl;

    singleO = 0;  // Overlay a line - needs single Move
    blockOO = false;  // Overlay a block of lines - needs a block Move
// a line to be overlaid
    haveaO = 0;
    oinputfile.oIFCode = "";        // Code string
// a block of lines to be overlaid
    haveaOO = false;
    ooinputfile[0].oIFCode = "";
    for (i = 1; i < 2000; i++)
    {
        ooinputfile[i] = ooinputfile[0];
    }

}
```

Standard array initialization of the place we capture a block of lines to be Repeated, it’s trackers and counters. 

**void InitRR();**	// declared in functions.h
```
void CLEditFrame::InitRR()	// implemented in Main.cpp
{

    LogFile << "Init RR " << std::endl;

    singleR = 0;  // Repeat a line
    blockRR = false;  // Repeat a block of lines
// a line to be Repeated
    haveaR = 0;
// a block of lines to be Repeated
    haveaRR = false;
    rrinputfile[0].rIFCode = "";    // Code string
    for (i = 1; i < 2000; i++)
    {
        rrinputfile[i] = rrinputfile[0];
    }

}
```

Roll it all together, compile run it. Enter an A on the first line, press enter, exit the app, and look into the log file.

Create Controls 
Initialize 
Process Screen 
Read Screen 
Init User 
What Command 
WhatCommand 
WhatCommand A 
Look For Changes 
Init IF 
Apply Changes 
Load Screen  

You didn’t see InitCC, InitMM,  InitOO,  InitRR, InitCTrackers because we never triggered ChangesApplied(). Not to fret.

Perhaps this is a good place to talk about de bugging. The log file is agreat place to start. It will tell you if your in the ball park. Back when the dinosaurs roamed the earth, you would put a 'ready trace' and reset trace' all over your program to give you ahint of what was happening. If you needed to know the current value of a variable, you could 'display' it. The ancient version of cout. Modern IDE's are amazing today. You 'set break points', place where you wan to stop your code mid execution. Just go into your code file and click just to the right of the line number in the code. Click on. Click off. You can 'watch' the value of a variable change, or not, as your program runs in debug mode by setting focus on the variable and right click, select the 'watch' option. Debug mode is top menu item, clicks on it then click start, or stop. The red debug/continue button will execute all the code between break points. To the right of that the 'next line' button will execute the next line. Lastly, when you get to a function, you can 'step into' it. You can change the value of a variable you are watching. You can even add code if you forgot something. That's all I've ever needed to know. I fly with that alone. 

Before we we get to Apply Changes, let’s go back and complete Process Screen, there was more to add there. We need to flesh out What Command, this is the ‘receive’. We haven’t forgot about OnApplyClicked and OnKeyDown. These are the major GUI connections that cause all the ‘do stuff’.

For WhatCommand() 

Add to functions.h

```
        void WhatCommandB();    // before(s)
        void WhatCommandCC();   // Copy a line or Block
        void WhatCommandDD();   // Delete a line or Block
        void WhatCommandMM();   // Move a line or Block
        void WhatCommandOO();   // Overlay a line or Block
        void WhatCommandRR();   // Repeat a line or Block
        void WhatCommandSR();   // Right Shift a line of Block (like a TAB right)
        void WhatCommandSL();   // Left Shift a line or Block (like TAB left)
        void WhatCommandI();    // Insert a line
```

Here’s the complete WhatCommand(). Very clunky, but you’ll see very easy to code with CLEdit! We identify an action and capture it, count it and other things if needed.

**void WhatCommand();**	// declared in functions.h
```
void CLEditFrame::WhatCommand() 	// implemented in Main.cpp
{

//    LogFile << "What Command " << std::endl;

    if (u == 0)
    {
        LogFile << "WhatCommand " << std::endl;
    }

// uppercase
    UserLinestr[0] = toupper(UserLinestr[0]);
    UserLinestr[1] = toupper(UserLinestr[1]);

// look for line commands in the first position, first
    if (UserLinestr[0] == 'A')
    {
        WhatCommandA(); return;
    }

    if (UserLinestr[0] == 'B')
    {
        WhatCommandB(); return;
    }

    if (UserLinestr[0] == 'C')
    {
        WhatCommandCC(); return;
    }

    if (UserLinestr[0] == 'D')
    {
        WhatCommandDD(); return;
    }

    if (UserLinestr[0] == 'M')
    {
        WhatCommandMM(); return;
    }

    if (UserLinestr[0] == 'O')
    {
        WhatCommandOO(); return;
    }

    if (UserLinestr[0] == 'R')
    {
        WhatCommandRR(); return;
    }

    if (UserLinestr[0] == '>')
    {
        WhatCommandSR(); return;
    }

    if (UserLinestr[0] == '<')
    {
        WhatCommandSL(); return;
    }

    if (UserLinestr[0] == 'I')
    {
        WhatCommandI(); return;
    }

    Input[u].Linestr = UserLinestr;

}
```
If you notice I wrote the return on the same line. Silly I know. What you should think about is ordering the conditions in their most likely occurrence, if you can. For something like user input, it hardly matters but romping though millions of records in a file, you’ll feel it. Ok, more code.   

A “before” is a location command, like, put this before this line. A single character. Have you ever used a mouse to put a folder before or after another?  Right.

**void WhatCommandB();**	// declared in functions.h
```
void CLEditFrame::WhatCommandB()    // implemented in Main.cpp
{

    LogFile << "What Command B " << std::endl;

    Input[u].Linestr = "B";

    befores++;

}
```

A “C” is a copy command, copy a single line. Or “CC”, in pairs, copy a block of lines. This requires one or more ‘after’ or one or more ‘before’ locators. The exception is a block copy ‘create’.   A block Copy will require us to capture the data, the cards, so we can insert them into the finished stack where requested.  This action will increase the size of the file. Imagine a dialog where you pick one line and copy it before or after a 100 different places with a few key strokes. Try that with a mouse.  Imagine what the condition in WhatCommand() included all of this code too. Messy.  
We cannot look for data where it isn’t. If the length, number of characters, entered by the User is only 1, we can’t look for the second character. The program will crash. So we check the length. 

**void WhatCommandCC();**	// declared in functions.h
```
void CLEditFrame::WhatCommandCC()	// implemented in Main.cpp
{

    LogFile << "What Command CC " << std::endl;

    if  (UserLinel > 1)
    {
        if (UserLinestr[1] == 'C')
        {
            Input[u].Linestr = "CC";
            blockCC = true;
        }
    }
    else
    {
        singleC++;
        haveaC = u;
        Input[u].Linestr = "C";
    }

}
```

A “D” is a delete command, delete a single line. Or “DD”, in pairs, delete a block of lines. This does not need locations. There are no exceptions.  A block delete does not require us to capture the data.  This action will decrease the size of the file.

**void WhatCommandDD();**	// declared in functions.h
```
void CLEditFrame::WhatCommandDD()	// implemented in Main.cpp
{

    LogFile << "What Command DD " << std::endl;

    if  (UserLinel > 1)
    {
        if (UserLinestr[1] == 'D')
        {
            Input[u].Linestr = "DD";
            blockDD = true;
        }
    }
    else
    {
        singleD++;
        Input[u].Linestr = "D";
    }
}
```

A “M” is a move command, move a single line. Or “MM”, in pairs, move a block of lines. This will need locations. There are no exceptions.  A block Move will require us to capture the data.  This action will not change the size of the file. 

**void WhatCommandMM();**	// declared in functions.h
```
void CLEditFrame::WhatCommandMM()	// implemented in Main.cpp
{

    LogFile << "What Command MM " << std::endl;

    if  (UserLinel > 1)
    {
        if (UserLinestr[1] == 'M')
        {
            Input[u].Linestr = "MM";
            blockMM = true;
        }
    }
    else
    {
        singleM++;
        haveaM = u;
        Input[u].Linestr = "M";
    }

}
```

A “O” is a Overlay command, overlay a single line. Or “OO”, in pairs, overlay a block of lines. This does not need locations, it needs an equal number of block Move lines.  There are no exceptions.  A block Overlay requires us to capture both the data Moved and the data Overlaid.  This action will decrease the size of the file. You’re probably wonder what Overlay does and why you’d need that. Often, in programming you’ll perform an assignment. An assignment is usually something on the left and something on the right. Also, lots of times the value assigned is the same. So what a block Move Overlay does is merge a block of lines one Moved over the other, where there is space in the line being
Overlaid. I’ll show you.

**void WhatCommandOO();**	// declared in functions.h
```
void CLEditFrame::WhatCommandOO()	// implemented in Main.cpp
{

    LogFile << "What Command OO " << std::endl;

    if  (UserLinel > 1)
    {
        if (UserLinestr[1] == 'O')
        {
            Input[u].Linestr = "OO";
            blockOO = true;
        }
    }
    else
    {
        singleO++;
        haveaO = u;
        Input[u].Linestr = "O";
    }
}
```

A “R” is a Repeat command, repeat a single line. Or “RR”, in pairs, overlay a block of lines. This does not need locations.  There are no exceptions.  A block Repeat requires us to capture the data to be repeated.  This action will increase the size of the file.

**void WhatCommandRR();**	// declared in functions.h
```
void CLEditFrame::WhatCommandRR()	// implemented in Main.cpp
{

    LogFile << "What Command RR " << std::endl;

    if  (UserLinel > 1)
    {
        if (UserLinestr[1] == 'R')
        {
            Input[u].Linestr = "RR";
            blockRR = true;
        }
    }
    else
    {
        singleR++;
        haveaR = u;
        Input[u].Linestr = "R";
    }

}
```

A “>” is a Shift Right, shift a single line right. Or “>>”, in pairs, shift a block of lines right. This does not need locations.  No exceptions.  A block shift does not require us to capture the data to be shifted.  This action will have no impact to the size of the file.

**void WhatCommandSR();**	// declared in functions.h
```
void CLEditFrame::WhatCommandSR()	// implemented in Main.cpp
{

    LogFile << "What Command >> " << std::endl;

//        int  SRi;      // number of characters to shift right

    if  (UserLinel > 1)
    {
        if (UserLinestr[1] == '>')
        {
            Input[u].Linestr = ">>";
            blockSR = true;
        }
    }
    else
    {
        singleSR++;
        Input[u].Linestr = ">";
    }

}
```

A “<” is a Shift Left, shift a single line left. Or “<<”, in pairs, shift a block of lines left. This does not need locations.  No exceptions.  A block shift does not require us to capture the data to be shifted.  This action will have no impact to the size of the file.

**void WhatCommandSL();**	// declared in functions.h
```
void CLEditFrame::WhatCommandSL()	// implemented in Main.cpp
{

    LogFile << "What Command << " << std::endl;

//   int  SLi;      // number of characters to shift left

    if  (UserLinel > 1)
    {
        if (UserLinestr[1] == '<')
        {
            Input[u].Linestr = "<<";
            blockSL = true;
        }
    }
    else
    {
        singleSL++;
        Input[u].Linestr = "<";
    }

}
```

A “I” is Insert, inserte a single line. No pairs. This does not need locations.  No exceptions. No data to capture.This action will increase the size of the file.

**void whatCommandI();**	// declared in functions.h
```
void CLEditFrame::WhatCommandI()	// implemented in Main.cpp
{

    LogFile << "What Command I " << std::endl;

    singleI++;
    Input[u].Linestr = "I";

}
```

Lets compile and run, enter some commands, press enter, exit eh app and look at the log.

Create Controls 
Initialize 
Process Screen 
Read Screen 
Init User 
What Command 
WhatCommand 
WhatCommand A 
What Command B 
What Command CC 
What Command CC 
What Command DD 
What Command DD 
What Command I 
What Command MM 
What Command MM 
What Command OO 
What Command OO 
What Command RR 
What Command RR 
What Command >> 
What Command >> 
What Command << 
What Command << 
Look For Changes 
Init IF 
Apply Changes 
Load Screen 

Before we we get to Apply Changes, let’s close out Load Screen, this is the 'send' the end of the loop. Essentially Load Screen means put the cards from the result file onto the screen, using “frstl” as the starting point. We’ll be doing that in every case.

Add to Main.h
```
		#include <iomanip>
```

Add to functions.h – notice our first time implementation of a function that accepts a parameter and returns a value!

```
	void FocusLine();
      std::string ToString(int);  /* annoying that you can assign a char array
                                     to a string but not a string to a char array 
                                     something about pointers and lvalues and
                                     rvalues - C++ is dumb */
```

Add to variables.h
           
```
std::string prettystr;   // result string from STD::OSTRINGSTREAM::SETW
              int prettyint;  // STD::OSTRINGSTREAM::SETW number to output
```

The complicated part of LoadScreen() is, what is the first line?  We’re not interested in seeing “focus line” in the log 50 times. We could have used the ‘on one’ trick. How would we do that?

**void LoadScreen();**	// declared in functions.h
```
void CLEditFrame::LoadScreen()	// implemented in Main.cpp
{

    LogFile << "Load Screen " << std::endl;

    i = 0;
    LogFile << "Focus Line " << std::endl;
    for (u = (frstl - 1); i < 50; u++)
    {
        FocusLine();
        CL[i].Code->ChangeValue(winputfile[u].wIFCode);
        i++;
    }

}
```

We’d like a pretty, legacy looking line command area. Nostalgia. 

**void FocusLine();**	// declared in functions.h
```
void CLEditFrame::FocusLine()	// implemented in Main.cpp
{

//  LogFile << "Focus Line " << std::endl;

    if (winputfile[u].wIFlc == "000000")
    {
        prettystr = ToString(u);
        CL[i].Line->ChangeValue(prettystr);
        return;
    }

    CL[i].Line->ChangeValue(winputfile[u].wIFlc);

}   
```
This function is the only place where I code a local declaration. The type ‘ostringstream’ once declared, acts like a big rain barrel, accumulating everything you put in it for life. We don’t want that. We only want to see one action “<<setfill('0')<<setw(6)<<prettyint” at a time. So we need to, essentially, declare “os” every time we need it. You’re probably thinking, wait, we’re performing ToString() 50 times, why doesn’t that create 50 of “os” variables? The answer is, scope. You declared ToString(). You implemented ToString(). To C++ every time you say ToString() it thinks, oh ok do the ToString stuff. As if it never did it before. And each time it will create a new “os”. And it will live until the ToString() ends, at the “}”. Scope? Correct, the ‘u’ in the declare of ToString and the ‘u’ passed to ToString when we code ToString(u), are not the same ‘u’. They are different, you can prove that by looking at the address of each. If we wanted to use the same ‘u’, we have to use a reference. C++ is funny. I like it as is.

**std::string ToString(int u);**	// declared in functions.h
```
std::string CLEditFrame::ToString(int u)	// implemented in Main.cpp
{

//  LogFile << "To String " << std::endl;
// make 10 look like 000010 etc

    ostringstream os;

    prettyint = u * 5;

    os<<setfill('0')<<setw(6)<<prettyint;

    return os.str();

}
```

Now is the time that I need make a couple of points about how C++ will let you do things that you don’t intend. C++ will also prevent you from doing simple things that you do intend, It’s quite comical, sort of. I was thinking, wouldn’t it be cool to display the page number and total number of pages somewhere. I didn’t want to change the GUI yet. Just a simple change to the wxLogStatus line. I created a function “PageofPage”. I added a couple of variables to do some math.

Add to functions.h

```
			void PageofPage();
```

Add to variables.h
```
        		int page;           // page number
        		int ofpage;         // number of pages
        		int pgs;            // whole number of pages
        		float pgsf;        // fractional pages
        		float wfilecntf;
```

Float? Ever wonder how to create a variable that can support fractions? The type is “float”.cNow, the first thing is that is you mix float and int, you only get int. In other words, if you divide an int by an int and assign that ‘fraction’ to a float, you get an int. example  float = int / int; will return the non fractional part, the whole number. Nice and frustrating. The ‘/’ operator is a divide. A ‘*’ is a multiply operator, we have yet to use one. Note if you divide by zero you will not get 'infinity', you program will crash! Some compilers will ding you if you try to divide without checking for a zero first. 
Example
```
		if (y != 0)
		{
			z = x / y;
		}  
		else	
```
	
Here is what the Page of Page logic might look like. Conceptually, we have 50 lines per screen, 50 cards from our stack. So let’s dig in. This exemplifies my favorite style. Write a comment of intent, write the line(s) of code to accomplish the task.

**void PageofPage();** 	// declared in function.h
```
void CLEditFrame::PageofPage() 	// implemented in Main.cpp
{

    LogFile << "Page of Page " << std::endl;

// each page is 50 lines
// get the whole number of pages from where we are starting
    pgs = frstl / 50;
// set the page value
    page = pgs + 1;
// get the number of whole pages
    pgs = wfilecnt / 50;
// get the exact number of pages as a fraction
// C++ can only do fractions with fractions. C++ is dumb
    wfilecntf = wfilecnt;
    pgsf = wfilecntf / 50.0;
// subtract the whole number from the fraction
// to see if there is a fraction
    if ((pgsf - pgs) > 0)
    {
        ofpage = pgs + 1;
    }
    else
    {
        ofpage = pgs;
    }

}
```
    

Ya, you caught me, I’m doing a subtraction ‘-’ inside a conditional statement. Let’s fix that. I can do it ‘ugly’ too.  example 'a = a – b;' or in C++ talk 'a -= b;'.

**void PageofPage();** 	// declared in function.h
```
void CLEditFrame::PageofPage()		// implemented in Main.cpp
{

    LogFile << "Page of Page " << std::endl;

// each page is 50 lines
// get the whole number of pages from where we are starting
    pgs = frstl / 50;
// set the page value
    page = pgs + 1;
// get the number of whole pages
    pgs = wfilecnt / 50;
// get the exact number of pages as a fraction
// C++ can only do fractions with fractions. C++ is dumb
    wfilecntf = wfilecnt;
    pgsf = wfilecntf / 50.0;
// subtract the whole number from the fraction
// to see if there is a fraction
    pgsf -= pgs;
    if (pgsf > 0)
    {
        ofpage = pgs + 1;
    }
    else
    {
        ofpage = pgs;
    }

}
```


Ok, so starting at OpenFile, lets change the log status line in include the page and of page values. We invoke (call)  PageofPage() first.  Currently it looks like this.

```
wxLogStatus(PrimaryCommand + " " + FirstParameter + " applied ");
```

Now we’d like to add “page x of y” to that likee this. 

```
wxLogStatus(PrimaryCommand + " " + FirstParameter + " applied Page " + page + " of " + ofpage);
```

But that would be way too simple. C++ won’t let you do that because the parameter to the wxLogStatus function is a string type and page and ofpage are int. What to do? We need to perform a ‘cast’. We need to tell C++ to change/convert/transform 'cast' an int to a string. We can use a built in C++ function for that called ToString(). As follows. 

```
wxLogStatus(PrimaryCommand + " " + FirstParameter + " applied Page " + ToString(page) + " of " + ToString(ofpage)); 
```

Now comes the hilarious lesson. We compile and run and we open CLEditMain.cpp and we see 'applied Page 00005 of 000450' on the log status line! What happened?
Head scratcher right? We were expecting 'page 1 of 90'. How the heck? 
Oh brother! We thought we told C++ to use the ToString(), but we have our own, so C++ used it, instead. What we needed to do is;

```
wxLogStatus(PrimaryCommand + " " + FirstParameter + " applied Page " + std::to_string(page) + " of " + std::to_string(ofpage));
```

Lesson learned. Note we can call our ToString() to_string, C++ will not care. I modified the lower part of OpenFile() to look like this, cleaner.

```
    wfilecnt = CF.fileireccnt;

    if (wfilecnt > 23000)
    {
        FileSizeError = true;
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " file too big ");
        goto ExitOpenFile;
    }

    haveaFile = true;

    for (i = 0; i < CF.fileireccnt; i++)
    {
        inputfile[i].IFlc     = "000000";
        inputfile[i].IFCode   = CF.inputfile[i].IFCode;
        winputfile[i].wIFlc   = "000000";
        winputfile[i].wIFCode = CF.inputfile[i].IFCode;
        GetEndl();
    }

    frstl = 1;

    LoadScreen();   //always from work input

    PageofPage();

    wxLogStatus(PrimaryCommand + " " + FirstParameter + " applied Page " + std::to_string(page) + " of " + std::to_string(ofpage));

ExitOpenFile:
```

Let’s apply our Page of Page to the places where it makes sense. I think all the scrolling functions, Up, Down, Home, Bottom and FromStage(). Sounds hard but it’s not. I don’t feel like changing the interface. You can do that if you’d like.
I improved FromStage().

```
    LogFile << "rows " << rowcnt << std::endl;

    if (rowcnt > 23000)
    {
        FileSizeError = true;
        wxLogStatus(PrimaryCommand + " " + FirstParameter + SecondParameter + " file too big ");
        haveaFile = false;
        goto ExitFromStage;
    }

    if  (rowcnt == 0)
    {
        haveaFile = false;
        wfilecnt = 0;
        wxLogStatus(PrimaryCommand + " " + FirstParameter + SecondParameter  + " not found");
        goto ExitFromStage;
    }

    haveaFile = true;
    wfilecnt = rowcnt;

    InitIF();

    InitWIF();

    DB.FromStage();

    for (i = 0; i < rowcnt; i++)
    {
        inputfile[i].IFCode = DB.inputfile[i].IFCode;
        winputfile[i].wIFlc   = "000000";
        winputfile[i].wIFCode = DB.inputfile[i].IFCode;
        GetEndl();
    }

    frstl = 1;

    LoadScreen();

    PageofPage();

    wxLogStatus(PrimaryCommand + " " + FirstParameter + SecondParameter + " applied Page " + std::to_string(page) + " of " + std::to_string(ofpage));

    WipeCommand();

ExitFromStage:

// "close" the database
    DB.Free();

}
```
I improved UP. Note, the compiler would not let me code; 

```
 wxLogStatus("Up applied Page " + std::to_string(page) + " of " + std::to_string(ofpage));
```

I think that is a bug in wx parts. So I set and included the Primary Command first. C++ is funny. 

```
    if (changes)
    {
        return;
    }

    if (frstl > 50)
    {
        frstl -= 50;
    }
    else
    {
        frstl = 1;
    }    

    PageofPage();

    PrimaryCommand = "Up";

    wxLogStatus(PrimaryCommand + " applied Page " + std::to_string(page) + " of " + std::to_string(ofpage));
```

I improved Down

```
    if (wfilecnt >= (frstl + 50))
    {
        frstl += 50;
    }
        
    PageofPage();

    PrimaryCommand = "Down";

    wxLogStatus(PrimaryCommand + " applied Page " + std::to_string(page) + " of " + std::to_string(ofpage));
```

I improved Home/Top

```
    frstl = 1;
  
    PageofPage();

    PrimaryCommand = "Home";

    wxLogStatus(PrimaryCommand + " applied Page " + std::to_string(page) + " of " + std::to_string(ofpage));
```

I improved End/Bottom

```
    if (wfilecnt > 50)
    {
        lastl = wfilecnt / 50;
        lastl *= 50;
        lastl++;
        frstl = lastl;
    }

    PageofPage();

    PrimaryCommand = "Bottom";

    wxLogStatus(PrimaryCommand + " applied Page " + std::to_string(page) + " of " + std::to_string(ofpage));
```

Have you noticed that I am applying continuous improvement to the code. Do that whenever you can. Get used to “code reviews” and “gentle improvement suggestions”. They thicken your hide.   
	  
Back to work. Lets compile and run, enter some commands, in lower case, press enter, you’ll see that your commands are in upper case, preserved, and the other lines have pretty numbers. By 5, more nostalgia. 

Let’s do the Apply Changes. This is pretty big. Some new concepts. Lot’s of code, clunk clunk clunk. The good news is there’s a fun part. We can play around and test out all the line commands.  

Apply Changes requires multiple thoughts. We already loaded the commands, if any, from the past view. Now we need to look through the entire stack of cards fo all the line commands. We need to perform reasonability checks. We’re not really doing what are classically “edits”, those happen automatically, by default, because we don’t care if you enter a “Z” on the command line. We just ignore it. We do that, rather than capturing the “Z” and hammering you with an error message. Nobody likes that. There are more than enough error messages in the status line at the bottom of the screen. I’d argue that it takes two minutes to remember all the commands, why make it painful. You are free to add whatever user punishments you’d like. I find it’s better to try to help, not hinder the user. As a matter of flow, function clarity, I actually added two functions to Apply Changes while I was writing this document, Capture and Ranges. This cleans up Apply Changes nicely.              
Add to functions.h

```
	void LookForLC();
	void LCReasonability();
	void Capture();
	void Ranges();
	void ApplyCommands();
```

**void ApplyChanges();**	// declared in functions.h
```
void CLEditFrame::ApplyChanges()	// implemented in Main.cpp
{

    LogFile << "Apply Changes " << std::endl;

    LookForLC();

    if (badchanges)
    {
        return;
    }

    LCReasonability();

    if (badchanges)
    {
        return;
    }


//  are there any block commands
//  are there any line commands
    Capture();

// ranges
    Ranges();

    if (badchanges)
    {
        return;
    }    

// at the very least - copy work to input - as is 
// without command line changes applied - yet
    for (i = 0; i < wfilecnt; i++)
    {
        inputfile[i].IFlc   = winputfile[i].wIFlc;
        inputfile[i].IFCode = winputfile[i].wIFCode;
    }

// are there any line commands to apply?
    LCcnt = CCcnt + DDcnt + MMcnt + OOcnt + RRcnt + SRcnt + SLcnt;
    LCcnt = LCcnt + singleC + singleD + singleM + singleO + singleR + singleSR + singleSL + singleI;

    if (LCcnt == 0)
    {
        changesapplied = false;
        return;
    }
    else
    {
        changes = true;
    }

    ApplyCommands();

}
```

Look For Changes and do some preliminary logic checks. Save time and energy. This is pure grunt work folks. Wee need to look for and identify instance of line command and block commands, but not capture anything yet. Don’t get ahead of ourselves.

Add to functions.h 

```
        void LookForLCCC();
        void LookForLCDD();
        void LookForLCMM();
        void LookForLCOO();
        void LookForLCRR();
        void LookForLCSR();
        void LookForLCSL();
```
**void LookForLC();**	//  declared in functions.h
```
void CLEditFrame::LookForLC()	// implemented in Main.cpp
{

    LogFile << "Look for LC " << std::endl;

    if (wfilecnt == 0)
    {
        return;
    }

    LookForLCCC();

    if (badchanges)
    {
        return;
    }

    LookForLCDD();

    if (badchanges)
    {
        return;
    }

    LookForLCMM();

    if (badchanges)
    {
        return;
    }

    LookForLCOO();

    if (badchanges)
    {
        return;
    }

    LookForLCRR();

    if (badchanges)
    {
        return;
    }

    LookForLCSR();

    if (badchanges)
    {
        return;
    }

    LookForLCSL();

    if (badchanges)
    {
        return;
    }

}
```

Look for block Copy line commands and check if the request makes sense. We don’t allow multiple blocks, or incomplete pairs.  

Add to functions.h
```
	void LookForCC();
```
**void LookForLCCC();**	// declared in functions.h
```  
void CLEditFrame::LookForLCCC()	// implemented in Main.cpp
{

    LogFile << "Look for LC CC " << std::endl;

    CCcnt = 0;
    CCstart = 9999;
    LogFile << "Look For CC " << std::endl;
    for (i = 0; i < wfilecnt; i++)
    {
        LookForCC();
    }

    if  (CCcnt > 2)
    {
        wxLogStatus("multiple Block Copy");
        badchanges = true;
        return;
    }

    if  (CCcnt == 1)
    {
        wxLogStatus("missing Block Copy pair");
        badchanges = true;
        return;
    }

}
```
**void LookForCC();**	// declared in functions.h
```
void CLEditFrame::LookForCC()	// implemented in Main.cpp
{
    if (winputfile[i].wIFlc == "CC")
    {
        CCcnt++;
        CCend = i;
        if (CCstart == 9999)
        {
            CCstart = i;
        }
    }
}
```

Look for block Delete commands and check if the request makes sense. We don’t allow multiple blocks, or incomplete pairs.  

Add to functions.h
```
	void LookForDD();
```
**void LoookForLCDD();**	// declared in functions.h
```
void CLEditFrame::LookForLCDD()	// implemented in Main.cpp
{

    LogFile << "Look for LC DD " << std::endl;

    DDcnt = 0;
    DDstart = 9999;
    LogFile << "Look for DD " << std::endl;
    for (i = 0; i < wfilecnt; i++)
    {
        LookForDD();
    }

    if  (DDcnt > 2)
    {
        wxLogStatus("multiple Block Delete");
        badchanges = true;
        return;
    }

    if  (DDcnt == 1)
    {
        wxLogStatus("missing Block Delete pair");
        badchanges = true;
        return;
    }

}
```	
**void LookForDD();**    // declared in functions.h
```
void CLEditFrame::LookForDD()	// implemented in Main.cpp
{
    if (winputfile[i].wIFlc == "DD")
    {
        DDcnt++;
        DDend = i;
        if (DDstart == 9999)
        {
            DDstart = i;
        }
    }
}
```

Look for block Move  commands and check if the request makes sense. We don’t allow multiple blocks, or incomplete pairs.  

Add to functions.h
```
	void LookForLCMM();
```
**void LookForLCMM();**	// declared in functions.h
```
void CLEditFrame::LookForLCMM()	// implemented in Main.cpp
{

    LogFile << "Look for LC MM " << std::endl;

    MMcnt = 0;
    MMstart = 9999;
    LogFile << "Look for MM " << std::endl;
    for (i = 0; i < wfilecnt; i++)
    {
        LookForMM();
    }

    if  (MMcnt > 2)
    {
        wxLogStatus("multiple Block Move");
        badchanges = true;
        return;
    }

    if  (MMcnt == 1)
    {
        wxLogStatus("missing Block Move pair");
        badchanges = true;
        return;
    }

}
```
**void LookForMM();**	// declared in functions.h
```
void CLEditFrame::LookForMM()  // implemented in main.cpp
{
    if (winputfile[i].wIFlc == "MM")
    {
        MMcnt++;
        MMend = i;
        if (MMstart == 9999)
        {
            MMstart = i;
        }
    }
}
```

Look for block Overlay commands and check if the request makes sense. We don’t allow multiple blocks, or incomplete pairs.  

Add to functions.h
```
	void LookForOO();
```
**void LookForLCOO();**	// declared in functions.h
```
void CLEditFrame::LookForLCOO()	// implemented in Main.cpp
{

    LogFile << "Look for LC OO " << std::endl;

    OOcnt = 0;
    OOstart = 9999;
    LogFile << "Look for OO " << std::endl;
    for (i = 0; i < wfilecnt; i++)
    {
        LookForOO();
    }

    if  (OOcnt > 2)
    {
        wxLogStatus("multiple Block Overlay");
        badchanges = true;
        return;
    }

    if  (OOcnt == 1)
    {
        wxLogStatus("missing Block Overlay pair");
        return;
    }

}
```
**void LookForOO();**		// declared in functions.h
```
void CLEditFrame::LookForOO()		// implemented in Main.cpp
{
    if (winputfile[i].wIFlc == "OO")
    {
        OOcnt++;
        OOend = i;
        if (OOstart == 9999)
        {
            OOstart = i;
        }
    }
}
```

Look for block Repeat  commands and check if the request makes sense. We don’t allow multiple blocks, or incomplete pairs.  

Add to functions.h
```
		void LookForRR(); 
```
**void LookForLCRR();** 	// declared in functions.h
```
void CLEditFrame::LookForLCRR() 	// implemented in Main.cpp
{

    LogFile << "Look for LC RR " << std::endl;
	
    RRcnt = 0;
    RRstart = 9999;
    LogFile << "Look for RR " << std::endl;
    for (i = 0; i < wfilecnt; i++)
    {
        LookForRR();
    }

    if  (RRcnt > 2)
    {
        wxLogStatus("multiple Block Repeat");
        badchanges = true;
        return;
    }

    if  (RRcnt == 1)
    {
        wxLogStatus("missing Block Repeat pair");
        badchanges = true;
        return;
    }

}
```
**void LookForRR();**		// declared in functions.h
```
void CLEditFrame::LookForRR()		// implemented in Main.cpp
{
    if (winputfile[i].wIFlc == "RR")
    {
        RRcnt++;
        RRend = i;
        if (RRstart == 9999)
        {
            RRstart = i;
        }
    }

}
```

Look for block Shift Right  commands and check if the request makes sense. We don’t allow multiple blocks, or incomplete pairs.
  
Add to functions.h
```
		void LookForSR(); 
```
**void LookForLCSR();**	// declared in functions.h
```
void CLEditFrame::LookForLCSR()	// implemented in Main.cpp
{
    LogFile << "Look for LC >> " << std::endl;

    SRcnt = 0;
    SRstart = 9999;
    LogFile << "Look for >> " << std::endl;
    for (i = 0; i < wfilecnt; i++)
    {
        LookForSR();
    }

    if  (SRcnt > 2)
    {
        wxLogStatus("multiple Block Shift Right");
        badchanges = true;
        return;
    }

    if  (SRcnt == 1)
    {
        wxLogStatus("missing Block Shift Right pair");
        badchanges = true;
        return;
    }

}
```	
**void LookForSR();**    // declared in functions.h
```
void CLEditFrame::LookForSR()		// implemented in Main.cpp
{
    if (winputfile[i].wIFlc == ">>")
    {
        SRcnt++;
        SRend = i;
        if (SRstart == 9999)
        {
            SRstart = i;
        }
    }

}
```

Look for block Shift Left commands and check if the request makes sense. We don’t allow multiple blocks, or incomplete pairs.  

Add to functions.h
```
		void LookForSL(); 
```
**void LookForLCSL();** 	// declared in functions.h
```
void CLEditFrame::LookForLCSL() 	// implemented in Main.cpp
{

    LogFile << "Look for SL << " << std::endl;

    SLcnt = 0;
    SLstart = 9999;
    LogFile << "Look for << " << std::endl;
    for (i = 0; i < wfilecnt; i++)
    {
        LookForSL();
    }

    if  (SLcnt > 2)
    {
        wxLogStatus("multiple Block Shift Left");
        badchanges = true;
        return;
    }

    if  (SLcnt == 1)
    {
        wxLogStatus("missing Block Shift Left pair");
        badchanges = true;
        return;
    }
}
```
**void LookForSL():**    // declared in functions.h
```
void CLEditFrame::LookForSL()		// implemented in Main.cpp
{
    if (winputfile[i].wIFlc == "<<")
    {
        SLcnt++;
        SLend = i;
        if (SLstart == 9999)
        {
            SLstart = i;
        }
    }
}
```
I’ll bet you want to use the Repeat block line and change commands right? Even though there was no mouse, you can still do all sorts of things. We have more grunt work in Apply Changes to do. We need to perform reasonability tests. This is some serious grunt work. Lots of conditions. Lots of thought.    

Add to functions.h

```
        void LCReasonabilityBlock();
        void LCReasonabilityBlockMM();
        void LCReasonabilityLine();
        void LCReasonabilityOverall();
	    void Continue();	
```
The boolean (flag) ‘badchanges’ is set to false just before ApplyChanges(). If we encounter a ‘bad change’ request, if something does not make sense, we want to set that flag to true and get out, stop processing. Often times it’s clearer to put a condition in positive terms, like if (a  ==  b). It flows and reads better, and if this is the condition we’re looking for, that’s the way to code it. However, if (a == b ) is ok and everything else is not, we are tempted to write if (a != b) which will send you off to your favorite search engine. We’d love to be able to say if (a == b) continue otherwise stop. There is no continue in C++, unless it’s within a loop. Annoying. So I created a function called Continue. Case matters! '!' the exclamation point means 'not' in C++. C++ is funny.

**void Continue();**	// declared in functions.h           
```
void CLEditFrame::Continue()    // implemented in Main.cpp
{
// do nothing C++ continue is only for loops!
}
```
**void LCReasonability();**	// declared in functions.h
```
void CLEditFrame::LCReasonability()    // implemented in Main.cpp
{

    LogFile << "LC Reasonability " << std::endl;
// multiple blocks and or multiple types os blocks are ambiguous
// especially ones that cause file size changes

    LCReasonabilityBlock();

    if  (badchanges)
    {
        return;
    }

    LCReasonabilityLine();

    if  (badchanges)
    {
        return;
    }

    LCReasonabilityOverall();

    if  (badchanges)
    {
        return;
    }

}
```
'&&' means logical 'and', '||' means logical 'or', remember your boolean algebra? 

**void LCReasonabilityBlock();**	// declared in functions.h
```
void CLEditFrame::LCReasonabilityBlock()    // implemented in Main.cpp
{

    LogFile << "LC Reasonability Block" << std::endl;

    LCcnt = CCcnt + DDcnt + MMcnt + RRcnt;

    if (LCcnt > 2)
    {
        wxLogStatus("Block command ambiguous ");
        badchanges = true;
        return;
    }

    LCcnt = MMcnt + OOcnt;

    if (LCcnt > 4)
    {
        wxLogStatus("Block command ambiguous ");
        badchanges = true;
        return;
    }

    if  (OOcnt == 2)
    {
        if  (MMcnt == 2)
        {
            Continue();
        }
        else
        {
            wxLogStatus("Block Move missing for overlay ");
            badchanges = true;
            return;
        }
    }

    if (blockCC)
    {
        if (afters == 0
        &&  befores == 0)
        {
            wxLogStatus("Block Copy command missing Before or After location(s) ");
            badchanges = true;
            return;
        }
    }

    if (blockMM
    &&  !blockOO)  // not an overlay
    {
        LCReasonabilityBlockMM();
        if (badchanges)
        {
            return;
        }
    }

    if (blockOO)
    {
        if (afters == 0
        &&  befores == 0)
        {
            Continue();
        }
        else
        {
            wxLogStatus("Block Overlay command can't use Before or After location(s)");
            badchanges = true;
            return;
        }
    }

    if (blockMM
    &&  blockOO)  // is an overlay
    {
        if (MMrows == OOrows)
        {
            Continue();
        }
        else
        {
            wxLogStatus("Block Move/Overlay block sizes not the same");
            badchanges = true;
            return;
        }
    }

    if (blockRR)
    {
        if (afters > 0
        ||  befores > 0)
        {
            wxLogStatus("Block Repeat command can't use Before or After location(s) ");
            badchanges = true;
            return;
        }
    }

   

    if (blockSR)
    {
        if (afters == 0
        &&  befores == 0)
        {
            Continue();
        }
        else
        {
            wxLogStatus("Block Shift Right command can't use Before or After location(s) ");
            badchanges = true;
            return;
        }
    }

    if (blockSL)
    {
        if (afters == 0
        &&  befores == 0)
        {
            Continue();
        }
        else
        {
            wxLogStatus("Block Shift Left can't use Before or After location(s) ");
            badchanges = true;
            return;
        }
    }

}
```
**void LCReasonabilityBlockMM();**	// declared in functions.h
```
void CLEditFrame::LCReasonabilityBlockMM()   	 // implemented in Main.cpp
{

    LogFile << "LC Reasonability Block MM " << std::endl;

    if (afters == 0
    &&  befores == 0)
    {
        wxLogStatus("Block Move command missing a Before or After location ");
        badchanges = true;
        return;
    }

    if (afters == 1)
    {
        if  (befores == 0)
        {
            Continue();
        }
        else
        {
            wxLogStatus("Block Move command with Before and After location ");
            badchanges = true;
            return;
        }
    }

    if (befores == 1)
    {
        if  (afters == 0)
        {
            Continue();
        }
        else
        {
            wxLogStatus("Block Move command with Before and After location ");
            badchanges = true;
            return;
        }
    }

}
```	
**void LCReasonabilityLine();**    // declared in functions.h
```
void CLEditFrame::LCReasonabilityLine()    // implemented in Main.cpp
{

    LogFile << "LC Reasonability Line " << std::endl;

    LCcnt = singleC + singleD + singleM + singleR;

    if (LCcnt > 1)
    {
        wxLogStatus("line commands ambiguous ");
        badchanges = true;
        return;
    }

    if (LCcnt > 0
    &&  singleI > 0)
    {
        wxLogStatus("line commands ambiguous ");
        badchanges = true;
        return;
    }

    LCcnt = singleM + singleO;

    if (LCcnt > 2)
    {
        wxLogStatus("line commands ambiguous ");
        badchanges = true;
        return;
    }

    if  (singleO == 1)
    {
        if  (singleM == 1)
        {
            Continue();
        }
        else
        {
            wxLogStatus("line Move missing for line Overlay ");
            badchanges = true;
            return;
        }
    }

    if (singleC > 1)
    {
        wxLogStatus("Copy line command ambiguous ");
        badchanges = true;
        return;
    }

    if (singleC == 1)
    {
        if (afters == 0
        &&  befores == 0)
        {
            wxLogStatus("Copy line command missing Before or After loaction(s) ");
            badchanges = true;
            return;
        }
    }

    if (singleM > 1)
    {
        wxLogStatus("Move line command ambiguous ");
        badchanges = true;
        return;
    }

    if (singleO > 1)
    {
        wxLogStatus("Overlay line command ambiguous ");
        badchanges = true;
        return;
    }

    if (singleR > 0)
    {
        if (afters > 0
        ||  befores > 0)
        {
            wxLogStatus("Line Repeat command can't use Before or After location(s) ");
            badchanges = true;
            return;
        }
    }

}
```
**void LCReasonabilityOverall();**	// declared in functions.h
```
void CLEditFrame::LCReasonabilityOverall()    // implemented in Main.cpp
{

    LogFile << "LC Reasonability Overall " << std::endl;

    if (blockCC
    &&  singleC > 0)
    {
        wxLogStatus("line commands ambiguous ");
        badchanges = true;
        return;
    }

    if (blockMM
    &&  singleM > 0)
    {
        wxLogStatus("line commands ambiguous ");
        badchanges = true;
        return;
    }

    if (blockOO
    &&  singleO > 0)
    {
        wxLogStatus("line commands ambiguous ");
        badchanges = true;
        return;
    }

    if (blockRR
    &&  singleR > 0)
    {
        wxLogStatus("line commands ambiguous ");
        badchanges = true;
        return;
    }

    if (blockOO
    &&  singleM > 1)
    {
        wxLogStatus("line commands ambiguous ");
        badchanges = true;
        return;
    }

}
```


For certain commands, principally , the ones that change the size of the file, we need to capture data, and or if there is an instance of a single line command. More grunt work. Clunk Clunk Clunk.

Add to functions.h  
```
	void Capture();
```
**void Capture();**	// declared in functions.h
```
void CLEditFrame::Capture()    // implemented in Main.cpp
{

    LogFile << "Capture " << std::endl;

//  are there any block commands
    LCcnt = CCcnt + MMcnt + OOcnt + RRcnt;

    if (LCcnt != 0)
    {
        CaptureLC();  // blocks
    }
    else
    {
//  are there any line commands
        LCcnt = singleC + singleM + singleO + singleR;  // these change the size of the file
        if (LCcnt != 0)
        {
            CaptureLC();  // blocks
        }
    }
}
```
Check to be sure that ranges of the Move Overlay make sense.

**void Ranges();**	// declared in functions.h
```
void CLEditFrame::Ranges()   // implemented in Main.cpp
{
 
    LogFile << "Ranges " << std::endl;

    if (blockMM
    &&  blockOO)
    {
        if (OOstart < MMstart
        &&  OOend < MMstart)
        {
            badchanges = false;
        }
        else
        {
            if (OOstart > MMend
            &&  OOend > MMend)
            {
                badchanges = false;
            }
            else
            {
                wxLogStatus("block move / overlay overlapping ranges ");
                badchanges = true;
                return;
            }
        }
    }
    
}
```

Real life, clunk clunk clunk. Capture the block of data required to satisfy the request. These requests modify the file length. Plus a block Copy can be used in a “create”, now or later.   Clearly I didn’t add all this code in one day. It was added in parts. Add a part, test a part. Rinse and repeat. Build the forest one tree at a time. 

Add to functions.h
```
		void CaptureCC();
		void CaptureMM();
		void CaptureOO();
		void CaptureRR();
```
**void CaptureLC();**	// declared in functions.h
```
void CLEditFrame::CaptureLC()   // implemented in Main.cpp
{

    LogFile << "Capture LC " << std::endl;

    if (CCcnt == 2 || singleC == 1)
    {
        CaptureCC();
    }

    if (MMcnt == 2 || singleM == 1)
    {
        CaptureMM();
    }

    if (OOcnt == 2 || singleO == 1)
    {
        CaptureOO();
    }

    if (RRcnt == 2)
    {
        CaptureRR();
    }

}
```
**void CaptureCC();**	// declared in functions.h
```
void CLEditFrame::CaptureCC()   // implemented in Main.cpp
{

    LogFile << "Capture CC " << std::endl;

    if (singleC == 1)
    {
        cinputfile.cIFCode = winputfile[haveaC].wIFCode;
    }
    else
    {
        l = 0;
        for (i = CCstart; i <= CCend; i++)
        {
            ccinputfile[l].cIFCode = winputfile[i].wIFCode;
            CCrows++;
            l++;
        }
    }

}
```
**void CaptureMM();**	// declared in functions.h
```
void CLEditFrame::CaptureMM()   // implemented in Main.cpp
{

    LogFile << "Capture MM " << std::endl;

    if (singleM == 1)
    {
        minputfile.mIFCode = winputfile[haveaM].wIFCode;
    }
    else
    {
        l = 0;
        for (i = MMstart; i <= MMend; i++)
        {
            mminputfile[l].mIFCode = winputfile[i].wIFCode;
            MMrows++;
            l++;
        }
    }

}
```
**void CaptureOO();**	// declared in functions.h
```
void CLEditFrame::CaptureOO()   // implemented in Main.cpp
{

    LogFile << "Capture OO " << std::endl;

    if (singleO == 1)
    {
        oinputfile.oIFCode = winputfile[haveaO].wIFCode;
    }
    else
    {
        l = 0;
        for (i = OOstart; i <= OOend; i++)
        {
            ooinputfile[l].oIFCode = winputfile[i].wIFCode;
            OOrows++;
            l++;
        }
    }

}
```
**void CaptureRR();**	// declared in functions.h
```
void CLEditFrame::CaptureRR()   // implemented in Main.cpp
{

    LogFile << "Capture RR " << std::endl;

//  if (singleR > 0)  no need to capture Repeated lines because they repeat in place not before or after any line

    l = 0;
    for (i = RRstart; i <= RRend; i++)
    {
        rrinputfile[l].rIFCode = winputfile[i].wIFCode;
        RRrows++;
        l++;
    }

}
```


Everything is looking good so far. Make those changes. This is real work, real thinking, real life. Lot’s of code, lots of functions. But the method is step by step. Keep things simple. Avoid functions that span a page. Most people only read the first few lines right? 
 
Add to functions.h
```
		void ApplyCC();
      	void ApplyDD();
        	void ApplyMM();
        	void ApplyOO();
        	void ApplySR();
        	void ApplySL();
        	void ApplyRR();
        	void ApplyI(); 
```
**void ApplyCommands();**	// declared in functions.h
```
void CLEditFrame::ApplyCommands()   // implemented in Main.cpp
{

    LogFile << "Apply Commands " << std::endl;

// insert the lines to be copied where ever there is an After or a Before
// makes input file bigger
    if (CCcnt == 2
    ||  singleC > 0)
    {
        ApplyCC();
        return;
    }

// makes input file smaller
    if (DDcnt == 2
    ||  singleD > 0)
    {
        ApplyDD();
        return;
    }

// input file stays the same size - Move after or before
    if  (MMcnt == 2
    ||  singleM > 0)
    {
        if (OOcnt == 0
        &&  singleO == 0)
        {
            ApplyMM();  // this is a simple Move
            return;
        }
    }
// input file becomes smaller by the size of the Overlay
    if (OOcnt == 2
    ||  singleO > 0)
    {
        if  (MMcnt == 2
        ||   singleM > 0)
        {
            ApplyOO();      // this is the Move/Overlay
            return;
        }
    }

// makes input file bigger
    if (RRcnt == 2
    ||  singleR > 0)
    {
        ApplyRR();
        return;
    }

// no change to input file size
    if (SRcnt == 2
    ||  singleSR > 0)
    {
        ApplySR();
        return;
    }

// no change to input file size
    if (SLcnt == 2
    ||  singleSL > 0)
    {
        ApplySL();
        return;
    }

// make the file bigger
    if (singleI > 0)
    {
        ApplyI();
        return;
    }

}
```


Apply the Copy if requested.

Add to variables.h
```
    		int oldwfilecnt;
        	int wi;             // index into work string
        	int l;              // index other
        	int pos;            // search position
        	int Mstrl;          // length of Move string
        	int Ostrl;          // length of Overlay string
        	int posp1;          // search position plus 1 - next byte
        std::string str;            // common string
```
Add to functions.h
```
		void LineCopy();
		void BlockCopy();
		void InitWIF();
```
**void ApplyCC();**	// declared in functions.h
```
void CLEditFrame::ApplyCC()   // implemented in Main.cpp
{

    LogFile << "Apply CC " << std::endl;

// increases the file size
// apply the copied line - or the block of copied lines
// from input to work input
// where ever there is an After or Before line command

    InitWIF();

    oldwfilecnt = wfilecnt;
    wi = 0; // this is the index to the soon to be larger work file
    for (i = 0; i < oldwfilecnt; i++)
    {
        if (singleC > 0) // this is the one and only one line to Copy to After(s)
//					 and Before(s) locations
        {
            LineCopy();  // this is a Line Copy
        }
        else
        {
            BlockCopy();  // this is a Block Copy
        }
        if (wfilecnt > 23000)
        {
            FileSizeError = true;
            break;
        }
    }

// refresh input with larger work input
    RefreshInput();

    changesapplied = true;

    if (singleC > 0) // this is the one and only one line to copy After(s) 
//				and Before(s) locations
    {
        wxLogStatus("line Copy applied ");
    }
    else // this is a block delete
    {
        wxLogStatus("Block Copy applied ");
    }
}
```


This is a line Copy. Copy The Line is reused often.

Add to functions.h
```
		void CopyTheLine();
```
**void LineCopy();**	// declared in functions.h
```
void CLEditFrame::LineCopy()   // implemented in Main.cpp
{

    LogFile << "Line Copy " << std::endl;

    if (inputfile[i].IFlc == "A")
    {
        // copy the current line as is
        CopyTheLine();
        // add the Copy Line - after
        winputfile[wi].wIFlc   = "000000";
        winputfile[wi].wIFCode = cinputfile.cIFCode;
        wfilecnt++;   // increase the file size
        wi++;
    }
    else
    {
        if (inputfile[i].IFlc == "B")
        {
            // add the Copy Line - before
            winputfile[wi].wIFlc   = "000000";
            winputfile[wi].wIFCode = cinputfile.cIFCode;
            wfilecnt++; // increase the file size
            wi++;
            // copy the current line as is from input to work
            CopyTheLine();
        }
        else
        {
            // copy the current line as is from input to work
            CopyTheLine();
        }
    }

}
```
Copy The Line is reused often.

**void CopyTheLine();**	// declared in functions.h
```
void CLEditFrame::CopyTheLine()   // implemented in Main.cpp
{

    LogFile << "Copy The Line " << std::endl;

    winputfile[wi].wIFlc   = "000000";
    winputfile[wi].wIFCode = inputfile[i].IFCode;
    wi++;

}
```
This is a block Copy.

**void BlockCopy();**	// declared in functions.h
```
void CLEditFrame::BlockCopy()   // implemented in Main.cpp
{   // implemented in Main.cpp

    LogFile << "Block Copy " << std::endl;

    if (inputfile[i].IFlc == "A")
    {
        // copy the current line as is from input to work
        CopyTheLine();
        // add the Block of Copy lines - after - in a loop
        for (l = 0; l < CCrows; l++)
        {
            winputfile[wi].wIFlc   = "000000";
            winputfile[wi].wIFCode = ccinputfile[l].cIFCode;
            wfilecnt++; // increase the file size
            wi++;
        }
    }
    else
    {
        if (inputfile[i].IFlc == "B")
        {
            // add the Block Copy - before - in a loop
            for (l = 0; l < CCrows; l++)
            {
                winputfile[wi].wIFlc   = "000000";
                winputfile[wi].wIFCode = ccinputfile[l].cIFCode;
                wfilecnt++; // increase the file size
                wi++;
            }
            // copy the current line as is from input to work
            CopyTheLine();
        }
        else
        {
            // copy the current line as is from input to work
            CopyTheLine();
        }
    }

}
```
This is the working file. This code is reused a bunch.

**void InitWIF();**	// declared in functions.h
```
void CLEditFrame::InitWIF()   // implemented in Main.cpp
{

    LogFile << "Init WIF " << std::endl;

// the work file being processed
//  wfilecnt = 0;       // NO! do not set to zero!
//  oldwfilecnt = 0;    // NO! do not set to zero!

    winputfile[0].wIFlc = "000000";     // line command string
    winputfile[0].wIFCode = "";         // Code string
    for (i = 1; i < 25000; i++)
    {
        winputfile[i] = winputfile[0];
    }

}
```
Apply the Delete if requested. 

Add to functions.h
```
		void LineDelete();
		void BlockDelete();
```
**void ApplyDD();**	// declared in functions.h
```
void CLEditFrame::ApplyDD()   // implemented in Main.cpp
{

    LogFile << "Apply DD " << std::endl;

// reduces the file size
    InitWIF();

    oldwfilecnt = wfilecnt;
    wi = 0; // this is the index to the soon to be smaller work file
    for (i = 0; i < oldwfilecnt; i++)
    {
        if (singleD > 0) // this is the number of line deletes
        {
            LineDelete();
        }
        else // this is a block delete
        {
            BlockDelete();
        }
    }

// refresh input with smaller work input
    RefreshInput();

    changesapplied = true;

    if (singleD > 0) // this is the number of line deletes
    {
        wxLogStatus("Line Delete(s) applied ");
    }
    else // this is a block delete
    {
        wxLogStatus("Block Delete applied ");
    }

}
```
**void LineDelete();**	// declared in functions.h
```
void CLEditFrame::LineDelete()   // implemented in Main.cpp
{

    LogFile << "Line Delete " << std::endl;

    if (inputfile[i].IFlc == "D")
    {
        wfilecnt--;  // skip the record - decrease the file size
    }
    else
    {
        // copy the current line as is from input to work
        CopyTheLine();
    }

}
```
**void BlockDelete();**    // declared in functions.h
```
void CLEditFrame::BlockDelete()   // implemented in Main.cpp
{

    LogFile << "Block Delete " << std::endl;

    if (i >= DDstart
    &&  i <= DDend)
    {
        wfilecnt--;  // skip the record - decrease the file size
    }
    else
    {
        // copy the current line as is from input to work
        CopyTheLine();
    }

}
```
Apply the Move if requested. 

Add to functions.h
```
		void LineMove();
		void BlockMove);
```
**void ApplyMM();**	// declared in functions.h
```
void CLEditFrame::ApplyMM()   // implemented in Main.cpp
{

    LogFile << "Apply MM " << std::endl;

// the file will be the same size
    InitWIF();

    oldwfilecnt = wfilecnt;
    wi = 0; // this is the index to the work file
    for (i = 0; i < oldwfilecnt; i++)
    {
        if (singleM > 0) // this is the one and only one line to Move to the After
 //                         or Before location
        {
            LineMove();  // like a line copy
        }
        else // this is a Block Move
        {
            BlockMove();  // like a block copy
        }
    }
// refresh input with work input
    RefreshInput();

    changesapplied = true;

    if (singleM > 0) // this is the Line Move
    {
        wxLogStatus("Line Move applied ");
    }
    else // this is a Block Move
    {
        wxLogStatus("Block Move applied ");
    }

}
```
**void LineMove();**	// declared in functions.h
```
void CLEditFrame::LineMove()   // implemented in Main.cpp
{

    LogFile << "Line Move " << std::endl;

    if (inputfile[i].IFlc == "A")
    {
        // copy the current line as is from input to work
        CopyTheLine();
        // add the Move Line - after
        winputfile[wi].wIFlc   = "000000";
        winputfile[wi].wIFCode = minputfile.mIFCode;
        wi++;
    }
    else
    {
        if (inputfile[i].IFlc == "B")
        {
            // add the Move Line - before
            winputfile[wi].wIFlc   = "000000";
            winputfile[wi].wIFCode = minputfile.mIFCode;
            wi++;
            // copy the current line as is from input to work
            CopyTheLine();
        }
        else
        {
            if (inputfile[i].IFlc == "M")
            {
                return; // skip it
            }
            else
            {
                // copy the current line as is from input to work
                CopyTheLine();
            }
        }
    }

}
```
**void BlockMove();**	// declared in functions.h
```
void CLEditFrame::BlockMove()   // implemented in Main.cpp
{

    LogFile << "Block Move " << std::endl;

    if (inputfile[i].IFlc == "A")
    {
        // copy the current line as is from input to work
        CopyTheLine();
        // add the Move Block - after - in a loop
        for (l = 0; l < MMrows; l++)
        {
            winputfile[wi].wIFlc   = "000000";
            winputfile[wi].wIFCode = mminputfile[l].mIFCode;
            wi++;
        }
    }
    else
    {
        if (inputfile[i].IFlc == "B")
        {
            // add the Move Block - before - in a loop
            for (l = 0; l < MMrows; l++)
            {
                winputfile[wi].wIFlc   = "000000";
                winputfile[wi].wIFCode = mminputfile[l].mIFCode;
                wi++;
            }
            // copy the current line as is from input to work
            CopyTheLine();
        }
        else
        {
            if (i >= MMstart
            &&  i <= MMend)
            {
                return;  //skip it
            }
            else
            {
                // copy the current line as is from input to work
                CopyTheLine();
            }
        }
    }

}

```

Apply the Overlay if requested. We can Move one line Over another. We can Move a block of lines Over another block the same size. We can Move one line Over a block of lines.
	
Add to functions.h
```
		void LineOver();
		void BlockOver();
		void BlockMoveOver();
		void MoveOverOver();
		void MoveBlockOver();
		void LinePushOver();
		void BlockPushOver();
```
**void ApplyOO();**	// declared in functions.h
```
void CLEditFrame::ApplyOO()   // implemented in Main.cpp
{

    LogFile << "Apply OO " << std::endl;

// this will make the file smaller
    if (singleO == 1)
    {
// move everything from the Move Line into the Overlay Line where ever there is a space
        LineOver();
    }
    else
    {
// move everything from the Move block into the Overlay block where ever there is a space
        BlockOver();
    }

    InitWIF();

    oldwfilecnt = wfilecnt;
    wi = 0; // this is the index to the new smaller work file
    pos = 0; // this is the index to the Overlay Block
    for (i = 0; i < oldwfilecnt; i++)
    {        
        if (singleM == 1
        &&  singleO == 1) // one line to Move Over another
        {
//      push the Overlay Line into work input and pull the Move Line
            LinePushOver();  // like a line copy
        }
        else 
//      this is a Block Overlay
        {
            if (haveaMM
            &&  haveaOO)
//          push the Overlay block into work input and pull the Move Block
            {
                BlockPushOver();  // like a block copy
            }
            else
            {
//          push the Overlay block into work input and pull the Move line
                MMstart = haveaM;
                MMend   = haveaM;
                BlockPushOver();  // like a block copy
            }
        }
    }

// refresh input with smaller work input
    RefreshInput();

    changesapplied = true;

    if (singleM > 0) // this is the Line Move
    {
        wxLogStatus("Line Move applied ");
    }
    else // this is a Block Move
    {
        wxLogStatus("Block Move applied ");
    }

}
```
**void LineOver();**	// declared in functions.h
```
void CLEditFrame::LineOver()   // implemented in Main.cpp
{

    LogFile << "Line Over " << std::endl;

// byte by byte where there is a blank

    Mstrl = minputfile.mIFCode.length();

    if (Mstrl == 0) // this means the Move Line is blank, do nothing to the Overlay
//				 line
    {
        return;
    }

    Ostrl = oinputfile.oIFCode.length();

    if (Ostrl == 0) // this means the Overlay line is blank - clobber it
    {
        oinputfile.oIFCode = minputfile.mIFCode;
        return;
    }

    if (Mstrl <= Ostrl)
    {
        for (pos = 0; pos < Mstrl; pos++)
        {
            if (oinputfile.oIFCode[pos] == ' ')     // overlay the blanks
            {
                oinputfile.oIFCode[pos] = minputfile.mIFCode[pos];
            }
        }
        return;
    }

//Mstrl is bigger than Ostrl - get what you have
    for (pos = 0; pos < Ostrl; pos++)
    {
        posp1 = pos + 1;
        if (oinputfile.oIFCode[pos] == ' ')     // blank
        {
            oinputfile.oIFCode[pos] = minputfile.mIFCode[pos];
        }
    }

//Mstrl is bigger than Ostrl - pad the rest
    for (pos = posp1; pos < Mstrl; pos++)
    {
        oinputfile.oIFCode += minputfile.mIFCode[pos];
    }

}
```
**void BlockOver();**	// declared in functions.h
```
void CLEditFrame::BlockOver()   // implemented in Main.cpp
{

    LogFile << "Block Over " << std::endl;

    for (l = 0; l < MMrows; l++)
    {
        BlockMoveOver();
    }

}
```
**void BlockMoveOver();**	// declared in functions.h
```
void CLEditFrame::BlockMoveOver()   // implemented in Main.cpp
{

    LogFile << "Block Move Over " << std::endl;

// byte by byte where there is a blank

    Mstrl = mminputfile[l].mIFCode.length();

    if (Mstrl == 0) // this means the Move Line is blank, do nothing to the Overlay
// line
    {
        return;
    }

    Ostrl = ooinputfile[l].oIFCode.length();

    if (Ostrl == 0) // this means the Overlay line is blank - clobber it
    {
        ooinputfile[l].oIFCode = mminputfile[l].mIFCode;
        return;
    }

    if (Mstrl <= Ostrl)
    {
        for (pos = 0; pos < Mstrl; pos++)
        {
            if (ooinputfile[l].oIFCode[pos] == ' ')     // overlay the blanks
            {
                ooinputfile[l].oIFCode[pos] = mminputfile[l].mIFCode[pos];
            }
        }
        return;
    }

//Mstrl is bigger than Ostrl - get what you have
    for (pos = 0; pos < Ostrl; pos++)
    {
        posp1 = pos + 1;
        if (ooinputfile[l].oIFCode[pos] == ' ')     // blank
        {
            ooinputfile[l].oIFCode[pos] = mminputfile[l].mIFCode[pos];
        }
    }

//Mstrl is bigger than Ostrl - pad the rest
   for (pos = posp1; pos < Mstrl; pos++)
    {
        ooinputfile[l].oIFCode += mminputfile[l].mIFCode[pos];
    }

}
```
**void LinePushOver();**	// declared in functions.h
```
void CLEditFrame::LinePushOver()   // implemented in Main.cpp
{

    LogFile << "Line Push Over " << std::endl;

    if (inputfile[i].IFlc == "M")
    {
        // skip the record - decrease the file size
        wfilecnt--;
    }
    else
    {
        if (inputfile[i].IFlc == "O")
        {
            winputfile[wi].wIFlc   = "000000";
            winputfile[wi].wIFCode = oinputfile.oIFCode;
            wi++;
        }
        else
        {
            // copy the current line as is from input to work
            CopyTheLine();
        }
    }

}
```
**void BlockPushOver();**	// declared in functions.h
```
void CLEditFrame::BlockPushOver()   // implemented in Main.cpp
{

    LogFile << "Block Push Over " << std::endl;

    if (i >= MMstart
    &&  i <= MMend)
    {
        // skip the record - decrease the file size
        wfilecnt--;
    }
    else
    {
        if (i >= OOstart
        &&  i <= OOend)
        {
            winputfile[wi].wIFlc   = "000000";
            winputfile[wi].wIFCode = ooinputfile[pos].oIFCode;
            pos++;
            wi++;
        }
        else
        {
            // copy the current line as is from input to work
            CopyTheLine();
        }
    }

}
```
**void MoveOverOver();** // declared in functions.h
```
void CLEditFrame::MoveOverOver()   // implemented in Main.cpp
{

    LogFile << "Move Over Over " << std::endl;

// move one line over a block of lines
    for (l = 0; l < OOrows; l++)
    {
        MoveBlockOver();
    }

}
```
**void MoveBlockOver();** // declared in functions.h
```
void CLEditFrame::MoveBlockOver()   // implemented in Main.cpp
{

    LogFile << "Move Block Over " << std::endl;

// byte by byte where there is a blank

    Mstrl = minputfile.mIFCode.length();    // only one move line

    if (Mstrl == 0) /* this means the Move Line is blank, do nothing to the Overlay 				line */
    {
        return;
    }

    Ostrl = ooinputfile[l].oIFCode.length();

    if (Ostrl == 0) // this means the Overlay line is blank - clobber it
    {
        ooinputfile[l].oIFCode = minputfile.mIFCode;  // only one move line
        return;
    }

    if (Mstrl <= Ostrl)
    {
        for (pos = 0; pos < Mstrl; pos++)
        {
            if (ooinputfile[l].oIFCode[pos] == ' ')     // overlay the blanks
            {
                ooinputfile[l].oIFCode[pos] = minputfile.mIFCode[pos];  /* only 												one move line */
            }
        }
        return;
    }

//Mstrl is bigger than Ostrl - get what you have
    for (pos = 0; pos < Ostrl; pos++)
    {
        posp1 = pos + 1;
        if (ooinputfile[l].oIFCode[pos] == ' ')     // blank
        {
            ooinputfile[l].oIFCode[pos] = minputfile.mIFCode[pos];   /* only one  												move line */
        }
    }

//Mstrl is bigger than Ostrl - pad the rest
   for (pos = posp1; pos < Mstrl; pos++)
    {
        ooinputfile[l].oIFCode += minputfile.mIFCode[pos];   // only one move line
    }

}
```
Apply the Shift Right if requested. 

Add to functions.h

		void LineSR();
		void BlockSR();
		void ShiftRight();

**void ApplySR();**	// declared in functions.h

```
void CLEditFrame::ApplySR()   // implemented in Main.cpp
{

    LogFile << "Apply >> " << std::endl;

// the file size stays the same
    InitWIF();

    oldwfilecnt = wfilecnt;
    wi = 0; // this is the index to the work file
    for (i = 0; i < oldwfilecnt; i++)
    {
        if (singleSR > 0) // this is the number of lines to be shifted
        {
            LineSR();
        }
        else // this is a block to shift
        {
            BlockSR();
        }
    }

// refresh input with work input
    RefreshInput();

    changesapplied = true;

    if (singleSR > 0) // this is the number of lines to be shifted
    {
        wxLogStatus("Line Shift Right(s) applied ");
    }
    else // this is a block delete
    {
        wxLogStatus("Block Shift Right applied ");
    }

}
```
**void LineSR();**	// declared in functions.h
```
void CLEditFrame::LineSR()   // implemented in Main.cpp
{

    LogFile << "Line SR " << std::endl;

    if (inputfile[i].IFlc == ">")
    {
        SRl = inputfile[i].IFCode.length();
        if (SRl < 196)
        {
            ShiftRight();
        }
        else
        {
            CopyTheLine();
        }
    }
    else
    {
        // copy the current line as is from input to work
        CopyTheLine();
    }
    
}
```
**void BlockSR();**	// declared in functions.h
```
void CLEditFrame::BlockSR()   // implemented in Main.cpp
{

    LogFile << "Block SR " << std::endl;

    if (i >= SRstart
    &&  i <= SRend)
    {
        SRl = inputfile[i].IFCode.length();
        if (SRl < 196)
        {
            ShiftRight();
        }
        else
        {
            // copy the current line as is from input to work
            CopyTheLine();
        }
    }
    else
    {
        // copy the current line as is from input to work
        CopyTheLine();
    }
}
```
**void ShiftRight();**	// declared in functions.h
```
void CLEditFrame::ShiftRight()   // implemented in Main.cpp
{

    LogFile << "Shift Right " << std::endl;

    winputfile[wi].wIFlc = "000000";

    winputfile[wi].wIFCode = "    ";
    winputfile[wi].wIFCode += inputfile[i].IFCode;

    wi++;

}
```
Apply the Shift Left if requested. 

Add to functions.h
```
		void LineSL();
		void BlockSL();
		void ShiftLeft();
```
	
**void ApplySL();**	// declared in functions.h
~~
```
```
void CLEditFrame::ApplySL()  // implemented in main.cpp	
{

    LogFile << "Apply SL " << std::endl;

// the file size stays the same
    InitWIF();

//    std::string::iterator it = inputfile[0].IFCode.begin();

    oldwfilecnt = wfilecnt;
    wi = 0; // this is the index to the work file
    for (i = 0; i < oldwfilecnt; i++)
    {
        if (singleSL > 0) // this is the number of lines to be shifted
        {
            LineSL();
        }
        else // this is a block to shift
        {
            BlockSL();
        }
```
    }

// refresh input with work input
    RefreshInput();

    changesapplied = true;

    if (singleSL > 0) // this is the number of lines to be shifted
    {
        wxLogStatus("Line Shift Left(s) applied ");
    }
    else // this is a block delete
    {
        wxLogStatus("Block Shift Left applied ");
    }

}
```
**void LineSL();**	// declared in functions.h
```
void CLEditFrame::LineSL()   // implemented in Main.cpp
{

    LogFile << "Line SL " << std::endl;

    if (inputfile[i].IFlc == "<")
    {
        str = inputfile[i].IFCode.substr(0, 4);
        if (str == "    ")
        {
            ShiftLeft();
        }
        else
        {
            // copy the current line as is from input to work
            CopyTheLine();
        }
    }
    else
    {
        // copy the current line as is from input to work
        CopyTheLine();
    }

}
```
**void BlockSL();**	// declared in functions.h
```
void CLEditFrame::BlockSL()   // implemented in Main.cpp
{

    LogFile << "Block SL " << std::endl;

    if (i >= SLstart
    &&  i <= SLend)
    {
        str = inputfile[i].IFCode.substr(0, 4);
        if (str == "    ")
        {
            ShiftLeft();
        }
        else
        {
            // copy the current line as is from input to work
            CopyTheLine();
        }
    }
    else
    {
        // copy the current line as is from input to work
        CopyTheLine();
    }

}

**void ShiftLeft();**	  // declared in functions.h
```
void CLEditFrame::ShiftLeft()   // implemented in Main.cpp
{

    LogFile << "Shift Left " << std::endl;

    winputfile[wi].wIFlc = "000000";

    SLl = inputfile[i].IFCode.length();
    SLl -= 4;

    winputfile[wi].wIFCode = inputfile[i].IFCode.substr(4, SLl);

    wi++;
    
}

Apply the Repeat if requested. 

Add to functions.h

```
	void LineRepeat();
	void BlockRepeat();
```


**void ApplyRR();** 	// declared in functions.h

```
void CLEditFrame::ApplyRR()   // implemented in Main.cpp
{

    LogFile << "Apply RR " << std::endl;

// increases the file size
// apply the repeated line - or the block of repeated lines
// from input to work input
// after the line command or after the last line of the block

    InitWIF();

    oldwfilecnt = wfilecnt;
    wi = 0; // this is the index to the soon to be larger work file
    for (i = 0; i < oldwfilecnt; i++)
    {
        if (singleR > 0) // these are the lines to repeat
        {
            LineRepeat();
        }
        else // this is a block repeat
        {
            BlockRepeat();
        }
        if (wfilecnt > 23000)
        {
            FileSizeError = true;
            break;   // fatal
        }
    }

// refresh input with larger work input
    RefreshInput();

    changesapplied = true;

    if (singleC > 0) // these are the lines to repeat
    {
        wxLogStatus("line Repeat applied ");
    }
    else // this is a block delete
    {
        wxLogStatus("Block Repeat applied ");
    }

}
```
**void LineRepeat();**	// declared in functions.h

```
void CLEditFrame::LineRepeat()   // implemented in Main.cpp
{

    LogFile << "Line Repeat " << std::endl;

    if (inputfile[i].IFlc == "R")
    {
        // copy the current line as is from input to work
        CopyTheLine();
        // and repeat the line
        CopyTheLine();
        wfilecnt++;   // increase the file size
    }
    else
    {
        // copy the current line as is from input to work
        CopyTheLine();
     }

}
```
**void BlockRepeat();** 	// declared in functions.h

```
void CLEditFrame::BlockRepeat()   // implemented in Main.cpp
{

    LogFile << "Block Repeat " << std::endl;

    if (inputfile[i].IFlc == "RR")
    {
        // copy the current line as is from input to work
        CopyTheLine();
        if (i == RRend)
        // add the Block of Repeat lines - after the last RR - in a loop
        {
            for (l = 0; l < RRrows; l++)
            {
                winputfile[wi].wIFlc   = "000000";
                winputfile[wi].wIFCode = rrinputfile[l].rIFCode;
                wfilecnt++; // increase the file size
                wi++;

            }
        }
    }
    else
    {
        // copy the current line as is from input to work
        CopyTheLine();
    }

}
```
Apply the Insert if requested.

Add to functions.h
```
		void LineInsert();
```

**void ApplyI();**  	// declared in functions.h

```
void CLEditFrame::ApplyI()   // implemented in Main.cpp
{

    LogFile << "Apply I " << std::endl;

// increases the file size
    InitWIF();

    oldwfilecnt = wfilecnt;
    wi = 0; // this is the index to the soon to be larger work file
    for (i = 0; i < oldwfilecnt; i++)
    {
        LineInsert();
        if (wfilecnt > 23000)
        {
            FileSizeError = true;
            break;   // fatal
        }
    }

// refresh input with larger work input
    RefreshInput();

    changesapplied = true;

    wxLogStatus("Insert(s) applied ");

}
```
**void LineInsert();**	// declared in functions.h

```
void CLEditFrame::LineInsert()   // implemented in Main.cpp
{

    LogFile << "Line Insert " << std::endl;

    if (inputfile[i].IFlc == "I")
    {
        // copy the current line as is from input to work
        CopyTheLine();
        // insert a blank line
        winputfile[wi].wIFlc   = "000000";
        winputfile[wi].wIFCode = "";
        wi++;
        wfilecnt++;   // increase the file size
    }
    else
    {
        // copy the current line as is from input to work
        CopyTheLine();
     }

}
```
Wow! If you made it this far I applaud you! What do we do next? Let’s play around on our little screen. Note that we’ve haven’t built any logic for scrolling, so if you make the file bigger than 50 lines, you won’t be able to see them yet. You should be able to test out everything you’ve coded. Please do. 

What should we do next?  We started with our connections and we left them incomplete. Namely OnKeyDown and OnApplyClicked. Well since OnKeyDown are short cuts to OnApplyClicked, lets tackle that. Not to worry, well finish with the fun parts, file and database IO! 

OnApplyClicked processes the commands available and executed by pressing our button. Let’s discuss. The user is going to enter a command, like “open”. And we need to do something. We’ll call the first thing they enter the Primary Command. Naturally, if the User wants to open a file, we’ll need a filename. We’ll call that the First Parameter. Imagine a “change” Command. That would have a First Parameter of some string, the ‘from’ string. That would have a Second Parameter of some other string, the ‘to’ string. And potentially a Third Parameter like “all”. We handle one at a time too, with the next change key traditionally F6. So in OnApplyClicked we’ll scrub the Command line for the goods. If we don’t see anything good, that’s fine. We still need to maintain the send/receive loop. We will not be punishing the User if they enter “mary had a little lamb” and press Apply. No bother. If we find a valid command, and we see that it makes sense, we act.      

I know, it’s kinda long, but, it’s really only three parts. Find the command and parameters. Execute the command. Complete the send/receive loop. It is startling how much code is needed just for that! 

Add to variables.h

```
    		int strpos;         // start position
```

Add to functions.h a function for each action right?

```
		void WipeCommand();
        	void FindPrimary();
        	void FindFirst();
        	void FindSecond();
        	void FindThird();
		void Create();
   		void CopyFile(); 
   		void Find();
   		void OpenFile();
   		void SaveFile();
   		void SaveAsFile();
   		void Exit();
   		void FromStage();
   		void ToStage();
   		void Bottom();
   		void Home();
   		void Up();
   		void Down();
   		void Help();
   		void Change();
   		void Reset();
   		void SortSM();
```

**void OnApplyClicked(wxCommandEvent & event);**  	// declared in functions.h

```
void CLEditFrame::OnApplyClicked(wxCommandEvent & event) /* implemented in Main.cpp */
{

    LogFile << "On Apply Clicked ";

    Commandl = Command->GetLineLength(0);
    LogFile << "Length " << Commandl << std::endl;
    if  (Commandl == 0)
    {
        goto MainProcess;
    }

    Commandstr = Command->GetLineText(0); //GetValue();

    WipeCommand();

    FindPrimary();

    if (strpos < Commandl)
    {
        FindFirst();
        if (strpos < Commandl)
        {
            FindSecond();
            if (strpos < Commandl)
            {
                FindThird();
            }
        }
    }
//create a file - or stage to a table - from a block copy
    if (PrimaryCommand == "create")
    {
        Create();
        goto ExitOnApplyClicked;
    }
//copy file
    if (PrimaryCommand == "copy")
    {
        CopyFile();  // from a to b or into after or before
        goto ExitOnApplyClicked;
    }
//find string f5 all
    if (PrimaryCommand == "find")
    {
        ProcessScreen();
        Find();
        LoadScreen();
        goto ExitOnApplyClicked;
    }
//open file
    if (PrimaryCommand == "open")
    {
        OpenFile();
        goto ExitOnApplyClicked;
    }
//save file
    if (PrimaryCommand == "save")
    {
        SaveFile();
        goto ExitOnApplyClicked;
    }
//save as file
    if (PrimaryCommand == "saveas")
    {
        SaveAsFile();
        goto ExitOnApplyClicked;
    }
//exit - terminate the application!
    if (PrimaryCommand == "exit"
    ||  PrimaryCommand == "quit"
    ||  PrimaryCommand == "bye"
    ||  PrimaryCommand == "end"
    ||  PrimaryCommand == "leave"
    ||  PrimaryCommand == "stop")
    {
        Exit();
    }
//stage code from database
    if (PrimaryCommand == "fromstage")
    {
        FromStage();
        goto ExitOnApplyClicked;
    }
//stage code to database
    if (PrimaryCommand == "tostage")
    {
        ToStage();
        goto ExitOnApplyClicked;
    }
    if (PrimaryCommand == "bottom")
    {
        ProcessScreen();
        Bottom();
        LoadScreen();
        goto ExitOnApplyClicked;
    }

    if (PrimaryCommand == "home")
    {
        ProcessScreen();
        Home();
        LoadScreen();
        goto ExitOnApplyClicked;
    }

    if (PrimaryCommand == "up")
    {
        ProcessScreen();
        Up();
        LoadScreen();
        goto ExitOnApplyClicked;
    }

    if (PrimaryCommand == "down")
    {
        ProcessScreen();
        Down();
        LoadScreen();
        goto ExitOnApplyClicked;
    }

    if (PrimaryCommand == "help")
    {
        ProcessScreen();
        Help();
        LoadScreen();
        goto ExitOnApplyClicked;
    }

    if (PrimaryCommand == "change")
    {
        ProcessScreen();
        Change();
        LoadScreen();
        goto ExitOnApplyClicked;
    }

    if (PrimaryCommand == "reset")
    {
        ProcessScreen();
        Reset();
        LoadScreen();
        goto ExitOnApplyClicked;
    }

    if (PrimaryCommand == "sort")
    {
        ProcessScreen();
        SortSM();
        LoadScreen();
        goto ExitOnApplyClicked;
    }

    if (PrimaryCommand == "cancel")
    {
        Initialize();
        wxLogStatus("cancel applied");
        goto ExitOnApplyClicked;
    }

MainProcess:

    ProcessScreen();

// Load Screen always from index frstl
    LoadScreen();

    Return = true;

ExitOnApplyClicked:

    Command->Clear();
    Command->SetFocus();

}	
```
This is how to clear out the command parts. I could have called it InitCommand(). 
```
**void WipeCommand();**	// declared in functions.h
void CLEditFrame::WipeCommand()   // implemented in Main.cpp
{

    LogFile << "Wipe Command " << std::endl;

    PrimaryCommand = "";
    FirstParameter = "";
    SecondParameter = "";
    ThirdParameter = "";

}
```
This is looking for the Primary Command. 

**void FindPrimary();**	// declared in functions.h

```
void CLEditFrame::FindPrimary()   // implemented in Main.cpp
{

    LogFile << "Find Primary ";

    for (i = 0; i < Commandl; i++)
    {
        if  (Commandstr[i] == ' ')
        {
            strpos = i;
            i = 99;
            break;
        }
        else
        {
            Commandstr[i] = tolower(Commandstr[i]);
            PrimaryCommand += Commandstr[i];
        }
    }

    if (i != 99)  // stop looking
    {
        strpos = 99;
    }

    LogFile << PrimaryCommand << std::endl;

}
```
This is lloking for the First Parameter. 

**void FindFirst();**  	// declared in functions.h

```
void CLEditFrame::FindFirst()   // implemented in Main.cpp
{

    LogFile << "Find First ";

    for (i = strpos; i < Commandl; i++)
    {
        if  (Commandstr[i] == ' ')
        {
            if  (FirstParameter == "")
            {
                Byte = ' '; //keep looking
            }
            else
            {
                strpos = i;
                i = 99;
                break;
            }
        }
        else
        {
            FirstParameter += Commandstr[i];
        }
    }

    if (i != 99)  // stop looking
    {
        strpos = 99;
    }

    LogFile << FirstParameter << std::endl;

}
```
This is lloking for the Second Parameter. 

**void FindSecond();**	// declared in functions.h

```
void CLEditFrame::FindSecond()   // implemented in Main.cpp
{

    LogFile << "Find Second ";

    for (i = strpos; i < Commandl; i++)
    {
        if  (Commandstr[i] == ' ')
        {
            if  (SecondParameter == "")
            {
                Byte = ' '; //keep looking
            }
            else
            {
                strpos = i;
                i = 99;
                break;
            }
        }
        else
        {
            SecondParameter += Commandstr[i];
        }
    }

    if (i != 99)  // stop looking
    {
        strpos = 99;
    }

    LogFile << SecondParameter << std::endl;

}
```
This is looking for the Third Parameter 

**void FindThird();**		// declared in functions.h

```
void CLEditFrame::FindThird()   // implemented in Main.cpp
{

    LogFile << "Find Third ";

    for (i = strpos; i < Commandl; i++)
    {
        if  (Commandstr[i] == ' ')
        {
            if  (ThirdParameter == "")
            {
                Byte = ' '; //keep looking
            }
            else
            {
                strpos = i;
                i = 99;
                break;
            }
        }
        else
        {
            ThirdParameter += Commandstr[i];
        }
    }

    LogFile << ThirdParameter << std::endl;

}
```
This is the ‘create’ action. It means we want to create a new file, using a part of this file. The part is identified by a block Copy. If you want to save the entire file as something else, use the ‘saveas’ action. So you need to provide a name for the file.  Or, you can stage the file, the block copied, part to a table.  If you want to stage the whole file, use the ‘tostage’ command.    
Example “create filename.txt” or “create mydb mytable”   

Add to variables.h
    	
```
std::string CurrentFile;  // the name of the file currently being edited
```

Add to functions.h

```
    		void CreateFile();
    		void CreateTable();
```

**void Create();**  	// declared in functions.h	

```
void CLEditFrame::Create()  // implemented in main.cpp
{

    LogFile << "Create " << std::endl;   // need a block copy and file name

    if  (FirstParameter == "")
    {
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " file name to Create missing");
        goto ExitCreate;
    }

    InitCC();

    LookForLCCC();

    CaptureCC();

    if  (CCrows == 0)
    {
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " file to Create
missing - need a block copy ");
        goto ExitCreate;
    }

    CurrentFile = FirstParameter;

    if (SecondParameter == "")
    {
        CreateFile();
    }
    else
    {
        CreateTable();
    }

ExitCreate:

    WipeCommand();

}
```
This is the ‘create file’ action. It uses a class, CLEditCF to perform file functions. This class is implemented later. It’s only about 300 lines.

Add to CLEditMain.h
```
	#include "CLEditCF.h"
```
Add to functions.h
```
	void InitCF();
    	void SetEndl();
```
Add to objects.h – we’ll implement the class later. What “CLEditCF CF;” means is that we’d like an instance of the object CLEditCF, we’ll call our instance CF.  We will take advantage of the public functions (methods) CLEditCF provides for us. You’ll see in the header, CLEditCF.h, there are many functions, some public that we can use and some private to CLEditCF. We’re using a class, so that we don’t have to put the code in our Editor, and, we could use it elsewhere. We’re using wxWidgets right? Same idea.      
```
	// file processing
	// this is an instance of a class to process a file
		CLEditCF CF;
```
Add to variables.h
	
```
 int CLEditCFrc;	
```

**void CreateFile();**	// declared in functions.h

```
void CLEditFrame::CreateFile()   // implemented in Main.cpp
{

    LogFile << "Create File" << std::endl;   // need a block copy and file name

    InitCF();

    for (i = 0; i < CCrows; i++)
    {
        SetEndl();
        CF.inputfile[i].IFCode = ccinputfile[i].cIFCode;
    }

    CF.fileoname = CurrentFile;
    CF.fileoreccnt = CCrows;
    CLEditCFrc = CF.savefile(CF.fileoname);

    if  (CLEditCFrc != 0)
    {
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " Create file error");
        goto ExitCreateFile;
    }

    LoadScreen();   //always from work input

    wxLogStatus(PrimaryCommand + " " + FirstParameter + " applied");

ExitCreateFile:

    WipeCommand();

}
```
A word please. References. Have you noticed that we’re using classes, some within our project and some outside. And we reference, or use, different functions of each class. Sometimes this is coded, written, as Apply = new wxButton followed by   Apply->Bind() or other time you see it written, as CLEditCF CF; followed by   CF.savefile();. See the difference? Why does C++ do that? No idea. The ‘new’ means dynamic allocation. What? It means, load the program into memory, on the ‘heap’, only if and when I say so with ‘new’. Oh, and if I forget to delete it when I’m done, I generate a memory leak and the computer will crash. Nice. If I don’t use ‘new’ it means static allocation, the program is included with your logic, like junk in your trunk that you never use. Which is better and why you would prefer one or the other would occupy books. I can say that wxWidget things must be allocated as ‘new’. Wxwidgets performs the ‘deletes’. You’ll see we actually allocate some things as ‘new’ in CLEditDB and we do the ‘delete’. You’ll see. My issue is that C++ makes you code the reference in a different way, even tough, it ‘knows’ one is static and the other is dynamic. Country dumb.               
         
Our first, preliminary, temporary, class declaration for file processing. We’ll fill out all the details, after we are done with the Editor.

Add this file, a class, to your project.
file CLEditCF.h – the header, partial

```
#include <string>
using namespace std;
class CLEditCF
{
    public:

        CLEditCF();
        virtual ~CLEditCF();

        std::string fileiname;
        std::string fileoname;

        int fileibytecnt;
        int fileireccnt;
        int fileoreccnt;

        struct InputFile
        {
            std::string IFCode; // the line of code
        };
        InputFile inputfile[25000];  // 23,000 line is the biggest single block of
//                                      code I've ever seen aka "203"

        int copyfile(std::string, std::string);

        int openfile(std::string);  // open file - load into InputFile structure

        int savefile(std::string);  // save / save as file - from InputFile
//                                     structure

    protected:

    private:

};
```
Add this file, a class, to your project.
file CLEDitCF.cpp – the implementation, partial

```
#include "CLEditCF.h"
using namespace std;
CLEditCF::CLEditCF()
{
    //ctor
}

CLEditCF::~CLEditCF()
{
    //dtor
}

int CLEditCF::copyfile(std::string fileiname, std::string fileoname)
{

    return 0;

}

int CLEditCF::openfile(std::string fileiname)
{

    return 0;

}
int CLEditCF::savefile(std::string fileoname)
{

    return 0;

}
```
A word about function location and use. In the ancient past, we desk checked our logic and code with our eyes looking at a printed copy of the program. Two practices we employed were, placing a called function physically after the function where it is called, or the last placed it’s called. This keep you from having to flip through, back and forth through the paper. The computer really won’t care. You will. I’m sure you notice that as we progress, we’re reusing functions already implemented. I’m really not a fan of this practice. 

It’s a judgment call. In ancient times, we created a ‘flow chart’. Using box shapes as symbols for functions and drew lines from box to box to visually describe what the program was supposed to do. It’s funny, but at my first professional job, I was assigned a program to write and I banged it out in no time. I told my boss I was done and the first thing out of his mouth was “let me see the flow chart”. I didn’t have one. He deleted my program. I hadn’t made a copy. I learned a few lessons there. 

The point I’m trying to make is that you’ll see logic flows that overlap. So what do you do? Do you create a virtually duplicate copy with a different name, or, use the same function in both flows? The right answer is not easy to come by. If you duplicate the function with a new name like flowAthis() and flowBthis(), then you can never break one flow by changing this(). On the other hand, if this() needs to change, you have to change all the occurrences this(). The answer is, it depends. How complex is this(). In InitCF() it does one thing and only one thing. If you need that function in more than one flow, then use InitCF() where you need to. However, be sure that InitCF() does not get more complex.
Otherwise flowA and or flowB might break outright, or exhibit an undesirable hidden feature. The best, dare I say, best practice is to keep your functions as pure and basic as possible. 

The compiler will not care how many exact copies of this() you create. It will notice they are duplicates and only create one. Yup, it will do that. There is this, in my humble opinion, bad idea of function ‘overloading’. You can create for example 'void fun()' and 'int fun()'. C++ will be happy to let you do that. It will create different versions of fun(), and generate different names for each. It won’t tell you the names, this is a process called, I kid you not, 'mangling'. It will execute the right fun() based on the code you use to invoke the function. If you code 'anint = fun();' or just 'fun();' C++ will know what you mean. I’m not a big fan. I get it, it’s pretty cleaver but I feel like you lose control of what you are really trying to do. When you use more wxWidget parts, you’ll, as your typing, see all the different shapes and sizes of fun(). Which one is right? You’ll find out eventually.                                    

This is the interface between our editor and the file class. It’s how we pass data from one class to the other, and back, it’s a public structure. 

**void InitCF();**  	// declared in functions.h	

```
void CLEditFrame::InitCF()  // implemented in main.cpp
{

    LogFile << "Init CF File " << std::endl;
// file to or from file functions

    CF.inputfile[0].IFCode = "";    // Code string
    for (i = 1; i < 25000; i++)
    {
        CF.inputfile[i] = CF.inputfile[0];
    }

}
```
This is in order to add a new line or “carriage return” to each line of text. We remove it when we import the file with a ‘copy’, ‘open’ or ‘fromstage’. Make sense? We don’t what to see the 'carriage return' on the screen, but we need it in the file as a record terminator.    

**void SetEndl();**  	// declared in functions.h

```
void CLEditFrame::SetEndl()  // implemented in main.cpp
{

    LogFile << "Set Endl " << std::endl;

    winputfile[i].wIFCode += '\n';

}
```
This is the ‘create table’ action. It uses a class, CLEditDB to perform database functions. This class is implemented later. It’s only about 350 lines.  We’re going to make it fancier! 

Add to CLEditMain.h

```
	#include "CLEditDB.h"
```

Add to objects.h – we’ll implement the class later. What “CLEditDB DB;” means is that we’d like an instance of the object CLEditDB, we’ll call our instance DB.  We will take advantage of the public functions (methods) CLEditDB provides for us. You’ll see in the header, CLEditDB.h, there are many functions, some public that we can use and some private to CLEditDB. We’re using a class, so that we don’t have to put the code in our Editor, and, we could use it elsewhere. We’re using wxWidgets right? Same idea.
```
	// database processing
	// this is an instance of a class to access the database
   			CLEditDB DB;
```
Add to functions.h

```
	void InitDB();
```

**void CreateTable();**  	// declared in functions.h

```
void CLEditFrame::CreateTable()  // implemented in main.cpp
{

    LogFile << "Create Table" << std::endl;   // need a block copy and file name

    InitDB();

    for (i = 0; i < CCrows; i++)
    {
        SetEndl();
        DB.inputfile[i].IFCode = ccinputfile[i].cIFCode;
    }

    DB.DataBase = FirstParameter;

    DB.TableName = SecondParameter;
// the next three lines are the equivalent of an "open"
//create a driver object
    DB.Driver();
//create a connection object
    DB.Connect();
//create a statement object
    DB.Statement();

    DB.rowcnt = CCrows;

    DB.ToStage();
// "close" the database
    DB.Free();

    LoadScreen();   //always from work input

    wxLogStatus(PrimaryCommand + " " + FirstParameter + SecondParameter + " applied");

    WipeCommand();

}
```
This is the interface between our editor and the database class. It’s how we pass data from one class to the other and back, it’s a public structure.

**void InitDB();**  	// declared in functions.h

```
void CLEditFrame::InitDB()  // implemented in main.cpp
{

    LogFile << "Init DB File " << std::endl;
// file to or from stage database functions

    DB.inputfile[0].IFCode = "";    // Code string
    for (i = 1; i < 25000; i++)
    {
        DB.inputfile[i] = DB.inputfile[0];
    }

}
```
Our second, preliminary, temporary, class declaration for database processing. We’ll fill out all the details, after we are done with the Editor.

Add this file, a class, to your project.
file CLEditDB.h – the header, partial

```
#include <string>
using namespace std;
class CLEditDB
{
    public:

        CLEditDB();
        virtual ~CLEditDB();

        struct InputFile
        {
            std::string IFCode; // the line of code
        };
        InputFile inputfile[25000];  // 23,000 line is the biggest single block of code I've ever seen aka "203"

        std::string DataBase;
        std::string TableName;

        int rowcnt;

        void Driver();
        void Connect();
        void Statement();
        void ToStage();
        void Free();
        int  Cursor();
        void FromStage();

    protected:

    private:

};
```
Add this file, a class, to your project.  
file CLEDitDB.cpp – the implementation, partial  

```
#include "CLEditDB.h"
using namespace std;
CLEditDB::CLEditDB()
{
}
CLEditDB::~CLEditDB()
{
}
void CLEditDB::Driver()
{
}
void CLEditDB::Connect()
{
}
void CLEditDB::Statement()
{
}
int CLEditDB::Cursor()
{
    return 0;
}
void CLEditDB::ToStage()
{
}
void CLEditDB::FromStage()
{
}
void CLEditDB::Free()
{
}    	
```
This is the ‘copy’ file action. It will copy a file,  before or after a line in the current file. So you have to supply a name and a location, or it can be used to copy one file to another given two file names. 
Example “copy fromfile tofile”.  It uses the CF class member copyfile referenced by the dot.          

Add to functions.h

```
	void InitScreen();
	void CLEditCFmsg();
```

**void CopyFile();**   	// declared in functions.h

```
void CLEditFrame::CopyFile()  // implemented in main.cpp
{

    LogFile << "Copy File " << std::endl;

    InitScreen();

    if (FirstParameter == "")
    {
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " FROM file name missing");
        goto ExitCopyFile;
    }

    if (SecondParameter == "")
    {
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " TO file name missing");
        goto ExitCopyFile;
    }


    CF.fileiname = FirstParameter;
    CF.fileoname = SecondParameter;
    CLEditCFrc = CF.copyfile(CF.fileiname, CF.fileoname);

    if  (CLEditCFrc != 0)
    {
        CLEditCFmsg();
    }
    else
    {
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " applied");
    }

ExitCopyFile:

    WipeCommand();

}
```
This is the screen the User sees. Let’s clear it off, before we fill it up.

**void InitScreen();**  	// declared in functions.h

```
void CLEditFrame::InitScreen()  // implemented in main.cpp
{

    LogFile << "Init Screen " << std::endl;

    for (u =0; u < 50; u++)
    {
        CL[u].Line->ChangeValue("000000");  // line command string
        CL[u].Code->ChangeValue("");        // Code string
    }

}
```
This is a message to the user, if there is a problem.

**void CLEditCFmsg();**  	// declared in functions.h

```
void CLEditFrame::CLEditCFmsg()  // implemented in main.cpp
{

    LogFile << "CF msg " << std::endl;

    switch (CLEditCFrc)
    {
        case 3500:
            wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " file Out Open error");
            break;
        case 3501:
            wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " file In Open error");
            break;
    }

}
```
This is the ‘find’ action. It will find all the occurrences of a string provided. It will scroll to the first instance of the string in the file. Pressing F5, the traditional ‘find next’,  will scroll to next occurrence.

Add to functions.h

```
	void TrimFile();
	void InitFF();
	void LookForFF();
```

Add to variables.h

```
   	std::string FindStr;        // find string
	int FindCnt;        // number of times string found
	int prevf;          // previously found string location
	int f;              // index into found string locations
	int res;            // result of STD::STRING::FIND
	int MinusOne;       // a constant 
```

Add to structures.h

```
	// index to found strings - find
    		struct FindFile
    		{
        		int index;
        		int pos;
    		};
      	FindFile FF[25000];  // not at all likely
```

**void Find();**  	// declared in functions.h
```
void CLEditFrame::Find()  // implemented in main.cpp
{

    LogFile << "Find " << std::endl;

    if (FirstParameter == "")
    {
        wxLogStatus("Find what?");
        return;
    }

//trim the ends off the file
    LogFile << "Trim File " << std::endl;
    for (i = (wfilecnt - 1); i > 1; i--)
    {
        TrimFile();
    }

    FindStr = FirstParameter;

    InitFF();

    FindCnt = 0;    // how many times is the string found

    LookForFF();

    if (FindCnt == 0)
    {
        wxLogStatus("Find applied " + FirstParameter + " not found");
    }
    else
    {
        wxLogStatus("Find applied " + FirstParameter + " found " + std::to_string(FindCnt) + " times");
        frstl = FF[0].index + 1;    //off by one eh
        prevf = FF[0].index;        // for find next
    }

}

```
This is to truncate the blank lines from the end of the file. It’s an efficiency thing.

**void TrimFile();**  	// declared in functions.h

```
void CLEditFrame::TrimFile()  // implemented in main.cpp
{

//    LogFile << "Trim File " << std::endl;

    if (winputfile[i].wIFCode == "")
    {
        wfilecnt--;
    }
    else
    {
        i = 0; // stop loop
    }

}
```
This is standard array initialization, using the trick. We’re keeping track of what ‘card’ contains the string, and the position on the ‘card’. The string might exist more than one time on a line. No problem.

**void InitFF();**  	// declared in functions.h

```
void CLEditFrame::InitFF()  // implemented in main.cpp
{

    LogFile << "Init FF " << std::endl;

    FF[0].index = 0;    // where in the winput is the string found - an index
    FF[0].pos = 0;      // what position - an index
    for (f = 1; f < 25000; f++)
    {
        FF[f] = FF[0];
    }

}
```

This is where we capture all the places in the file where the string exists. This the the ugliest piece of C++ code in this whole project. I hate it. It’s not so much the ‘while’ loop, it’s the miniature function in the while condition. It would be much nice as a ‘do….while’ . We’ll do that later. As it is you’ll hurt yourself figuring out what it’s doing. This is the style of code I abhor.  

But, the absolute worst part of this code is that it doesn't  work if the search string is in the first column! I got it from the internet.

https://www.geeksforgeeks.org/string-find-in-cpp/#finding-multiple-occurrences-of-a-substring
 
This example and 1000 other reasons are why I wrote all this down.

**void LookForFF();**  	// declared in functions.h
```
void CLEditFrame::LookForFF()  // implemented in main.cpp
 for (i = 0; i < wfilecnt; i++)
    {
        if  (winputfile[i].wIFCode != "")
        {
            res = 0;
            while ((res = winputfile[i].wIFCode.find(FirstParameter, res + 1)) != MinusOne)  

{

    LogFile << "Look For FF " << std::endl;

    f = 0;  // index into find found
           {
                FF[f].index = i;
                FF[f].pos = res;
                FindCnt++;
                f++;
            }
        }
    }

}
```
I need to sidebar here. I really need to explain the “while”. There are three loop commands in C++. A 'for' loop. It has 4 parts. Part one is in brackets. The first is to set an initial value. The second is a condition. The third is an iterator. Follow by a block {} of code. 
Example 
for (i = 0; i < wfilecnt; i++)    
{
//	
```
do this
}
```
C++ manages the loop and if you don’t mess up the condition, you’ll be fine. If the condition you code can never be false, you’ll be in trouble. Caution not to effect the condition in the block. In other words don’t touch “wfilecnt” within the block.     	
Believe it or not C++ in it’s infinite brilliance will let you code this: 
```
for (;;)
{
//	do this
}
```

What does it mean? It means just keep running until I say stop. Very dangerous.

A 'for' loop is a ‘test before’ loop, obviously created for iterating through arrays. Test before means, check the condition first, before doing the stuff in the block. As long as the condition is true, it will execute the block  What if we want to do stuff in a loop, without an array. What if we want to do stuff at least once and then ‘test after’ before doing the block again. This is where the other two loops come in, 'while' and 'do while' respectively. 
In the prior code we see an ugly 'while. A 'while looks like this. ( test before )

```
while ( condition )
{
//	do stuff
}  
```
    
A 'do while' looks like this. ( test after ) Do stuff will happen at least once.
```
do
{
//	do stuff
}   
while ( condition );
```

Sadly, in my not so humble opinion, C++ will let you code virtually anything as a condition. C++ executes commands. Commands create a result. If that result is zero, that means false, everything else is true. So you can create nonsense like this:
```
If (1+1) 
{
	// do this
} 
```
 
I kid you not, try it. 
In the prior 'while', what a mouth full. 

```
while ((res = winputfile[i].wIFCode.find(FirstParameter, res + 1)) != MinusOne)
```

The condition is 'if something not equal to minus one'. Ok. Let’s unpack the something, the something is in brackets because we want C++ to do all of the something first, then check to see if it is not equal to -1.    
```
res = winputfile[i].wIFCode.find(FirstParameter, res + 1)
```

or 

```
res = string(substring, res++) 
```

We’re going to execute find() and put the result in res. The variable wIFCode, an element of the winputfile array is of std::string type. The function find() is a method within the std::string. So we can say wIFCode dot find(). What does find() do? It has 5 variations, this variation performs a loop. 

The loop It goes like this. res is both a result and a index. This is bad. Period. find() says, set iterator res + 1, 0 + 1 = 1,  bad, loop through the string, byte by byte, looking for the sub string. If you can’t find it, then res is -1 or false. If you do find it, res is set to the position in the string (array) where the sub string is found. The first character of a string ( array ) is position zero, not one.     
Our block of code says, every time you find the string, keep track of where it is. And keep looking until you don’t find the sub string anymore. I tested it with “this that this that”, applied a “find this” command and it only found the second “this” in position 10. Boy was I stunned. I hadn’t even done any searching in position one because C++ is all indented. Lessons learned.

```
res = 0;
while ((res = winputfile[i].wIFCode.find(FirstParameter, res + 1)) != MinusOne)  
{
	FF[f].index = i;
	FF[f].pos = res;
	FindCnt++;
	f++;
}
```

Could we make it better, better meaning, can I write code, so that when it’s read, it will not cause the reader to search the Intenet to de-sypher. You bet we can. And We will. Bye the way, the reason that the code sample does not work is that the “res + 1” is executed first. If you start res at -1, it wont execute at all!  Let’s fix this rude nonsense! First put what we want to have happen when we find the substring in a function. Next use separate int type for the result and search start position.

Add to function.h
```
	void CaptureFF(); 
```

**void LookForFF();**  	// declared in functions.h

```
void CLEditFrame::LookForFF()	 // implemented in main.cpp
{

    LogFile << "Look For FF " << std::endl;

    f = 0;  // index into find found
    for (i = 0; i < wfilecnt; i++)
    {
        if  (winputfile[i].wIFCode != "")
        {
            res = 0;
            pos = 0;
            while (res != MinusOne)
            {
                CaptureFF();
            }
        }
    }

}
```
Now the intent is clear. Look for the sub string. The result will either be not found “-1” or the position of the location of the first character of the sub string. Remember it is the position in the string, an array. If we find the string we capture where it is, count it and set the next search start position. Can you figure out how to make this even more efficient? Pierre, what do you mean? What's wrong with it now?

**void CaptureFF();**  	// declared in functions.h

```
void CLEditFrame::CaptureFF() 	// implemented in main.cpp
{

    LogFile << "Capture FF " << std::endl;

    res = winputfile[i].wIFCode.find(FirstParameter, pos);

    if (res == MinusOne) return;

    FF[f].index = i;
    FF[f].pos = res;
    FindCnt++;
    f++;
    pos = res + 1;

}
```
In my better testing, I searched for sub string “this” in a string containing “this that this that”. The sub string was found twice, once in pos 0 and then in position 10. In CaptureFF() we increment the start search position by the last position, plus one. This is not ideal, unless the sub string is one character. Suppose it was 10. In that case it would check 10 characters for no reason right? If the first position found is 0, and the sub string length is 10, the next possible position to find the sub string is 11. Right? The hint to this is not to add “res + 1” to pos, but to include the length of the sub string, plus one. To be supper supper efficient! Believe me, it makes a difference. Note that is you want to do two things after a condition, you need to wrap those two things in brackets {}. Alas, C++ let’s you slack off if you only wan to do one thing. That is a bad practice to start. 

	Add to variables.h
        		int FindStrl;        // length of a search string

	Set the length in Find()
    		FindStr  = FirstParameter;
    		FindStrl = FirstParameter.length(); 

	in CaptureFF() change 
		pos = res + 1;
	to
		pos = res + FindStrl + 1;


New and much improved CaptureFF().
**void CaptureFF();**  	// declared in functions.h

```
void CLEditFrame::CaptureFF() 	// implemented in main.cpp
{

    LogFile << "Capture FF " << std::endl;

    res = winputfile[i].wIFCode.find(FirstParameter, pos);

    if (res == MinusOne) 
    {
        return;
    }

    FF[f].index = i;
    FF[f].pos = res;
    FindCnt++;
    f++;
    
    pos = res + FindStrl + 1;

}
```

This is the ‘open’ file action. It will open a file and present it on the screen. This becomes the current file. The prior file is ignored. There is no ‘auto save’ on exit. So, yes, you can type all day and lose everything. Also, there is no ‘undo’. You need to provide a file name to open
example “open myfile.txt”.   I suppose you could implement an ‘undo’ action. You’d have to save a version of the file, each send / receive loop, track it and so on. Good luck. I save often. I backup my project at least once per day. And if I’m trying things out, I put the existing code in block comments.  

Add to CLEditMain.h

```
	#include <algorithm>
```

Add to functions.h

```
    void GetEndl();
```

**void OpenFile();**  	// declared in functions.h

```
void CLEditFrame::OpenFile()  // implemented in main.cpp
{

    LogFile << "Open File " << std::endl;

    if (FirstParameter == "")
    {
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " file name to OPEN missing");
        goto ExitOpenFile;
    }

    InitScreen();

    CurrentFile = FirstParameter;
    CF.fileiname = FirstParameter;
// import the file
    CLEditCFrc = CF.openfile(CF.fileiname);

    if  (CLEditCFrc != 0)
    {
        CLEditCFmsg();
        wfilecnt = 0;
        goto ExitOpenFile;
    }

    InitIF();

    InitWIF();

    wfilecnt = CF.fileireccnt;

    if (wfilecnt > 23000)
    {
        FileSizeError = true;
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " file too big ");
    }
    else
    {
        haveaFile = true;
        for (i = 0; i < CF.fileireccnt; i++)
        {
            inputfile[i].IFlc   = "000000";
            inputfile[i].IFCode   = CF.inputfile[i].IFCode;

            winputfile[i].wIFlc   = "000000";
            winputfile[i].wIFCode = CF.inputfile[i].IFCode;

            GetEndl();
        }
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " applied");
    }

    frstl = 1;

    LoadScreen();   //always from work input

ExitOpenFile:

    WipeCommand();

}
```
This is where we remove the ‘carriage return’ or ‘end line’ . The carriage return looks terrible in the wxTextCtrl, so it’s got to go. What a mouthful of a command. It uses the string functions, erase, remove, begin, end and cend. It says look from the beginning of the string to the end and if you see ‘\n’ take it out. I cheated and copied this code from the internet because I got lazy. If I coded it myself it would, get the length or the string, read the string backwards and if ‘\n’ is found. Make it a blank. I think I’ll do that. It will make more sense, to me.  What do you think.    	
**void GetEndl();**  	// declared in functions.h

```
void CLEditFrame::GetEndl()  // implemented in main.cpp
{

    LogFile << "Get Endl " << std::endl;

    winputfile[i].wIFCode.erase(std::remove(winputfile[i].wIFCode.begin(), winputfile[i].wIFCode.end(), '\n'), winputfile[i].wIFCode.cend());

}
```
We have to be careful here not to clobber all our good work with a hidden bug so we’re going to use new unused variables for this specific task. Be safe out there. What GetEndl() does now is put the wxTextCtrl into a string, look backwards from the end of the string and blank out the new line character, then put the string back into the wxTextCtrl. Then Simple and fast.  

Add to variables.h

```
    	int xpos;              // X position left/right  
    	int WorkStrl;          // length of the work string
    	std::string WorkStr;   // a work string
```

**void GetEndl();**  	// declared in functions.h

```
void CLEditFrame::GetEndl() 	// implemented in main.cpp
{

    LogFile << "Get Endl " << std::endl;

    WorkStr  = winputfile[i].wIFCode;
    WorkStrl = WorkStr.length();

    for (xpos = (WorkStrl - 1); xpos >= 0; xpos--)
    {
        if (WorkStr[xpos] == '\n')
        {
            WorkStr[xpos] = ' ';
            winputfile[i].wIFCode = WorkStr;
            return;
        }
    }

}
```

This is the ‘save’ file action. It will save the current file. It will use the current file name if it has one, otherwise it will ask you for one. It uses the CF class. 
Example “save filename.txt”
**void SaveFile();**  	// declared in functions.h

```
void CLEditFrame::SaveFile()  // implemented in main.cpp
{

    LogFile << "Save File " << std::endl;

    if (CurrentFile == "")  // means the file is on the screen - wasn't opened first
    {
        if (FirstParameter == "")
        {
            wxLogStatus(PrimaryCommand + " " + FirstParameter + " file name to SAVE missing");
            goto ExitSaveFile;
        }
        else
        {
            CurrentFile = FirstParameter;
        }
    }

//trim the ends off the file
    LogFile << "Trim File " << std::endl;
    for (i = (wfilecnt - 1); i > 1; i--)
    {
        TrimFile();
    }

    for (i = 0; i < wfilecnt; i++)
    {
        SetEndl();
        CF.inputfile[i].IFCode = winputfile[i].wIFCode;
    }

    CF.fileoname = CurrentFile;
    CLEditCFrc = CF.savefile(CF.fileoname);

    if  (CLEditCFrc != 0)
    {
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " Save file Open error");
        goto ExitSaveFile;
    }

    LoadScreen();   //always from work input

    wxLogStatus(PrimaryCommand + " " + CurrentFile + " applied");

ExitSaveFile:

    WipeCommand();

}
```
This is the ‘saveas’ file action. It will save the current file using the name provided. It will clobber the file if it already exists, so be careful. It uses the CF class.
Example “saveas filename.txt”
Notice that there is less and less to add...
**void SaveAsFile();**  	// declared in functions.h

```
void CLEditFrame::SaveAsFile()  // implemented in main.cpp
{

    LogFile << "SaveAs " << std::endl;

    if  (FirstParameter == "")
    {
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " file name to Save As missing");
        goto ExitSaveAsFile;
    }
    else
    {
        CurrentFile = FirstParameter;
    }

//trim the ends off the file
    LogFile << "Trim File " << std::endl;
    for (i = (wfilecnt - 1); i > 1; i--)
    {
        TrimFile();
    }

    for (i = 0; i < wfilecnt; i++)
    {
        SetEndl();
        CF.inputfile[i].IFCode = winputfile[i].wIFCode;
    }

    CF.fileoname = CurrentFile;
    CF.fileoreccnt = wfilecnt;
    CLEditCFrc = CF.savefile(CF.fileoname);

    if  (CLEditCFrc != 0)
    {
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " Save As file Open error");
        goto ExitSaveAsFile;
    }

    LoadScreen();   //always from work input

    wxLogStatus(PrimaryCommand + " " + FirstParameter + " applied");

ExitSaveAsFile:

    WipeCommand();

}
```
This is the ‘exit’ action. There are many ways out, "exit", "quit", "bye", "end", "leave" or "stop". Pick your favorite. It just drops everything and leaves the application. 
**void Exit();**  	// declared in functions.h
```
void CLEditFrame::Exit()  // implemented in main.cpp
{

    LogFile << "Exit " << std::endl;

    wxExit();

}
```
This is the ‘tostage’ database action. It will make a table and load it with the code from the current file with a simple command. 'tostage mydb mytable'.   We’re using MySQL for database management.  I can imagine providing an SQL interface from CLEdit inot MySQL. That’s a great idea. 
It uses the DB class. The table is defined as, like our structure.
```
CREATE TABLE mytable(id INT, code VARCHAR(255));
```

the table has an index ‘id’ to the row ‘code’. 
Add to variables.h
```
	int rowcnt;
```

**void ToStage();**  	// declared in functions.h

```
void CLEditFrame::ToStage()	// implemented in main.cpp
{  
// save the file to a Table :)

    LogFile << "To Stage " << std::endl;

    if  (FirstParameter == "")
    {
        wxLogStatus(PrimaryCommand + " need Database name ");
        return;
    }

    if  (SecondParameter == "")
    {
        wxLogStatus(PrimaryCommand + " need TableName ");
        return;
    }

    if (wfilecnt == 0)
    {
        wxLogStatus(PrimaryCommand + " no data to stage  ");
        return;
    }

    DB.DataBase = FirstParameter;
    DB.TableName = SecondParameter;

// the next three lines are the equivalent of an "open"
//create a driver object
    DB.Driver();
//create a connection object
    DB.Connect();
//create a statement object
    DB.Statement();

    if (wfilecnt > 23000)
    {
        FileSizeError = true;
        wxLogStatus(PrimaryCommand + " file too big ");
        return;
    }

    InitDB();

//trim the ends off the file
    LogFile << "Trim File " << std::endl;
    for (i = (wfilecnt - 1); i > 1; i--)
    {
        TrimFile();
    }

    for (i = 0; i < wfilecnt; i++)
    {
        SetEndl();
        DB.inputfile[i].IFCode = winputfile[i].wIFCode;
    }

    DB.rowcnt = wfilecnt;

    DB.ToStage();

// "close" the database
    DB.Free();

    LoadScreen();

    wxLogStatus(PrimaryCommand + FirstParameter + SecondParameter + " applied");

    WipeCommand();

}
```
This is the ‘fromstage’ database action. It will take a table and unload it onto the screen. You need to provide a database name and a table name. I use mydb and the file name as the table name. So if my file is  CLEditMain.cpp and I staged it, I can get it back with a command, 'fromstage mydb mytable'. I like to think of ‘staging’ as a way to protect code. I can imagine having multiple databases, by file level, like dev,test,prod,old. Something like that. Try to support some sort of promotion model. Once the code in an object, it’s more protected from loss.  We’re using MySQL for database management. It uses the DB class.
**void FromStage();**  	// declared in functions.h

```
void CLEditFrame::FromStage()  // implemented in main.cpp
{
// get the file from a table :)

    LogFile << "From Stage " << std::endl;

    InitScreen();

    if  (FirstParameter == "")
    {
        wxLogStatus(PrimaryCommand + " need Database name ");
        return;
    }

    if  (SecondParameter == "")
    {
        wxLogStatus(PrimaryCommand + " need TableName ");
        return;
    }

    DB.DataBase = FirstParameter;
    DB.TableName = SecondParameter;


// we are creating stuff with the "new" keyword here 
// so we need to delete when not in use  
// the next three lines are the equivalent of an "open"
// create a driver object
    DB.Driver();
// create a connection object
    DB.Connect();
// create a statement object
    DB.Statement();

    rowcnt = DB.Cursor();
    LogFile << "rows " << rowcnt << std::endl;

    if (rowcnt > 23000)
    {
        FileSizeError = true;
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " file too big ");
        haveaFile = false;
        goto ExitFromStage;
    }

    if  (rowcnt == 0)
    {
        haveaFile = false;
        wfilecnt = 0;
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " not found");
        goto ExitFromStage;
    }

    haveaFile = true;
    wfilecnt = rowcnt;

    InitIF();

    InitWIF();

    DB.FromStage();

    for (i = 0; i < rowcnt; i++)
    {
        inputfile[i].IFCode   = DB.inputfile[i].IFCode;
        winputfile[i].wIFlc   = "000000";
        winputfile[i].wIFCode = DB.inputfile[i].IFCode;
        GetEndl();
    }

    frstl = 1;

    LoadScreen();

    PageofPage();

    wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " applied Page " + std::to_string(page) + " of " + std::to_string(ofpage));

    WipeCommand();

ExitFromStage:

// "close" the database
    DB.Free();

}
```
This is the ‘bottom’  action. It is a scrolling function. It will scroll to the bottom page of the file. The same action as pressing End. Look simple enough. We don’t permit scrolling if the user changed data, because, changing the data can change the view.

Add to variables.h
```
      int lastl; 
```

**void Bottom();**  	// declared in functions.h

```
void CLEditFrame::Bottom()   // implemented in main.cpp
{

    LogFile << "Bottom " << std::endl;

    if (changes)
    {
        return;
    }

    if (wfilecnt > 50)
    {
        lastl = wfilecnt / 50;
        lastl *= 50;
        lastl++;
        frstl = lastl;
        wxLogStatus("Bottom end of file");
    }
    else
    {
        wxLogStatus("Bottom end of file");
    }

}
```
This is the ‘home’ action. It is a scrolling function. It will scroll to the beginning of the file.  The
same action as pressing Home.  Ridiculously simple. We don’t permit scrolling if the user changed data, because, changing the data can change the view.

**void Home();**  	// declared in functions.h

```
void CLEditFrame::Home()   // implemented in main.cpp
{

    LogFile << "Home " << std::endl;

    if (changes)
    {
        return;
    }

    frstl = 1;

    wxLogStatus("Home applied");

}
```
This is the ‘up’ action. It is a scrolling function. It will scroll up, one page. The same action as pressing Page Up or the traditional F7.  We don’t permit scrolling if the user changed data, because, changing the data can change the view. Discussion point. If there are changes, we skip the ‘up’. If we’re already at the top, we just say so, otherwise we do the ‘up’. So, the log status statement, where does it belong, before the condition (where it is) or after the condition? It belongs after. Plus the logic can be cleaned up.

**void Up();**  	// declared in functions.h

```
void CLEditFrame::Up()   // implemented in main.cpp
{

    LogFile << "Up " << std::endl;

    if (changes)
    {
        return;
    }

    if (frstl == 1)
    {
        wxLogStatus("Up top of file");
    }
    else
    {
        wxLogStatus("Up applied");
        if (frstl > 50)
        {
            frstl -= 50;
        }
        else
        {
            frstl = 1;
        }
    }

}
```
This is improvement is the type of thing I obsess on. It drives people crazy, but I was made this way. The layout of this function is perfect, because it’s clear. How do you like the '-=' or do you prefer 'frstl = frstl – 50'? The fact is that '-=' is not the same as '=-'. Scary right? See prefix and postfix in operators elsewhere. improved
**void Up();**   	// declared in functions.h

```
void CLEditFrame::Up()   // implemented in main.cpp
{

    LogFile << "Up " << std::endl;

    if (changes)
    {
        return;
    }

    if (frstl == 1)
    {
        wxLogStatus("Up top of file");
        return;
    }    

    if (frstl > 50)
    {
        frstl -= 50;
    }
    else
    {
        frstl = 1;
    }

    wxLogStatus("Up applied");

}
```
This is the ‘down’ action. It is a scrolling function. It will scroll down, one page. The same action as pressing Page Down or the traditional F8.  Here’s another discussion. The thinking is a) should we perform the ‘down’, b) can we perform the ‘down’. You could ask that two different says. 
One is an affirmative, ‘>’ or the negative ‘!>’ . We abhor the ‘not’ operator ‘!’.          
**void Down();**  	// declared in functions.h

```
void CLEditFrame::Down()   // implemented in main.cpp
{

    LogFile << "Down " << std::endl;

    if (changes)
    {
        return;
    }

    if (wfilecnt > (frstl + 50))
    {
        frstl += 50;
        wxLogStatus("Down applied");
    }
    else
    {
        wxLogStatus("Down end of file");
    }

}
```
This is the ‘help’ action. It will dump a help file into the log file. The same action as pressing the traditional F1. build
**void Help();**    // declared in functions.h

```
void CLEditFrame::Help()    // implemented in Main.cpp
{
    LogFile << "Primary Commands  " << std::endl;
    LogFile << " 'create filename' create a file from a block of Copy code " << std::endl;
    LogFile << " 'change fromstring to string all' change a string to another string everywhere " << std::endl;
    LogFile << " 'change fromstring to string' one at a time " << std::endl;
    LogFile << " 'copy filename' into the file After a line location, insert a file " << std::endl; 
    LogFile << " 'find string' find a string, and next " << std::endl;
    LogFile << " 'open filename' open a file " << std::endl;
    LogFile << " 'save' save the current file " << std::endl;
    LogFile << " 'saveas filename' save the current file with a different name " << std::endl;
    LogFile << " 'exit' terminate the application. bye,end,quit,leave should work just as well " << std::endl;
    LogFile << " 'fromstage mydb mytable' get a file from a database name/table name " << std::endl;
    LogFile << " 'tostage mydb mytable' store the file in a database name/table name " << std::endl;
    LogFile << " 'bottom' scroll to the bottom of the file " << std::endl;
    LogFile << " 'home' scroll to the top of the file " << std::endl;
    LogFile << " 'up' page up " << std::endl;
    LogFile << " 'down' page down " << std::endl;
    LogFile << " 'help' provides these notes in the Log file " << std::endl;
    LogFile << " " << std::endl;
    LogFile << "Key Board Commands " << std::endl;
    LogFile << " ENTER: Process Screen - process what the User entered " << std::endl;
    LogFile << "    F5: Find - repeat find " << std::endl;
    LogFile << "   END: Bottom - scroll to the bottom of the file " << std::endl;
    LogFile << "  HOME: Home - scroll to the top oof the file " << std::endl;
    LogFile << "    F7: Up - page up " << std::endl;
    LogFile << "    F8: Down - page down " << std::endl;
    LogFile << "    F1: Help - provide these notes :) " << std::endl;
    LogFile << "    F6: Change - repeat change " << std::endl;
    LogFile << "    For Line Commands let’s deal with: (make a connection) " << std::endl;
    LogFile << " " << std::endl;
    LogFile << "Line Commands  " << std::endl;
    LogFile << " 'A'  place a copied line or copy block after this line(s) " << std::endl;
    LogFile << " 'B'  place a copied line or copy block after this line(s) " << std::endl;
    LogFile << " 'C'  copy a line " << std::endl;
    LogFile << " 'CC' copy a block,  CC on one line, CC on another line anywhere in the file " << std::endl;
    LogFile << " 'D'  delete a line " << std::endl;
    LogFile << " 'DD' delete a block of lines " << std::endl;
    LogFile << " 'I'  insert a line " << std::endl;
    LogFile << " 'M'  move a line after or before another line " << std::endl;
    LogFile << " 'MM' move a block of lines after or before another line " << std::endl;
    LogFile << " 'O'  overlay a line with the contents of a moved line  " << std::endl;
    LogFile << " 'OO' overlay a block of lie with the data from a corresponding move block " << std::endl;
    LogFile << " 'R'  repeat a line " << std::endl;
    LogFile << " 'RR' repeat a block of lines " << std::endl;
    LogFile << " '>'  shift right, tab a line 4 characters " << std::endl;
    LogFile << " '>>' shift right, tab a block of lines 4 characters " << std::endl;
    LogFile << " '<'  shift left, tab a line 4 characters " << std::endl;
    LogFile << " '<<' shift left, tab a block of lines 4 characters " << std::endl;

} 
```
This is the ‘change’ action. It starts as a ‘find’, using the First Parameter as the ‘from string’. Then, uses the Second Parameter as the ‘to string’. Only the first found occurrence is changed, unless the Third Parameter is ‘all’. Otherwise the traditional ‘change next’ key F6 will change the next occurrence. The screen view will change to the current changed line. This is a complex function.    

Add to variables.h

```
	int ChangeFroml;    // change from string length
	int ChangeTol;      // change to string length
	std::string ChangeFrom;     // change from string
	std::string ChangeTo;       // change to string
	int ChngCnt;        // number of times change from string found
	int prevtf;         // previously found string location
```

Add to functions.h
 
```
	void ChangeFind();
 	void ChangeNext();
 	void ChangeAll();
 	void ChangeIt();
 	void ChangeOver();
 	void ChangeOverShort();
 	void ChangeOverLong();
```

Add to structures.h

```
// index to found strings - change from
	struct ChngFile
	{
		int index;
    		int pos;
	};
	ChngFile TF[25000];  // not at all likely
```
From 1000 feet we need to do several things here and naturally give it all a decent amout of thought. Did we get both parameters? How about the length? Is what we are changing to bigger or smaller than what we are changing from? We’re not too concerned with the total length of the resulting line, but we need to think about it. The next thing we need to do is ‘find’. Yes! We already coded that. Then we need to figure out how to apply the change once. When we can do that, doing it once, or ‘next’ is easy. Of course it’s grunt work, byte by byte, character by character logic.         	  	
**void Change();**  	// declared in functions.h

```
void CLEditFrame::Change()   // implemented in main.cpp
{

    LogFile << "Change " << std::endl;

    if (FirstParameter == "")
    {
        wxLogStatus("Change from what?");
        return;
    }

    if (SecondParameter == "")
    {
        wxLogStatus("Change to what?");
        return;
    }

    ChangeFrom  = FirstParameter;
    ChangeFroml = FirstParameter.length();
    ChangeTo    = SecondParameter;
    ChangeTol   = SecondParameter.length();

// find line where change is requested
    ChangeFind();

    if (ChngCnt == 0)
    {
        wxLogStatus(PrimaryCommand +  " " + FirstParameter + " not found");
        return;
    }

// replace
    if (ThirdParameter == "all")
    {
        ChangeAll();
        wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " applied " + std::to_string(ChngCnt) + " times");
        frstl = TF[0].index + 1;     //off by one eh
        prevtf = TF[0].index;        // for find next
    }
    else
    {
        ChangeNext();
    }

}
```
This is where we going to look for the from string, like ‘find’.
Add to functions.h
```
	void InitTF();
	void LookForTF(); 
```

**void ChangeFind();**  	// declared in functions.h

```
void CLEditFrame::ChangeFind()   // implemented in main.cpp
{

    LogFile << "Change Find " << std::endl;

//trim the ends off the file
    LogFile << "Trim File " << std::endl;
    for (i = (wfilecnt - 1); i > 1; i--)
    {
        TrimFile();
    }

    InitTF();

    ChngCnt = 0;    // how many times is the string found

    LookForTF();

}
```
This is the our standard array initialize.  

Add to variables.h

```
	int tf;  // index into change from found string locations
```

**void InitTF();**  	// declared in functions.h

```
void CLEditFrame::InitTF()   // implemented in main.cpp
{

    LogFile << "Init TF " << std::endl;

    TF[0].index = 0;    // where in the winput is the string change from found - an index
    TF[0].pos = 0;      // what position - an index
    for (tf = 1; tf < 25000; tf++)
    {
        TF[tf] = TF[0];
    }

}
```
This is where we look for the from string. Same as ‘find’ right? Why don’t we use ‘find’? Great question! It’s because ‘find’ is a unit of work and ‘change’ is a different unit of work. Imagine the user command “find this”. Then the User commands “change that this”. Then they press “next” change F6, or “next” find F5. Using different keys, let’s us do different things. Not forgetting what the User wants or expects is important. Actions “find” and “change” are very similar but very different. Keep them that way. 
**void LookForTF();**  	// declared in functions.h

```
void CLEditFrame::LookForTF()   // implemented in main.cpp
{

    LogFile << "Look For TF " << std::endl;

    tf = 0;  // index into change from found
    for (i = 0; i < wfilecnt; i++)
    {
        if  (winputfile[i].wIFCode != "")
        {
            res = 0;
            while ((res = winputfile[i].wIFCode.find(FirstParameter, res + 1)) != MinusOne)
            {
                TF[tf].index = i;
                TF[tf].pos = res;
                ChngCnt++;
                tf++;
            }
        }
    }

} 
```

This is typical. Figure out how to do it once, and then you can do it over and over.
**void ChangeNext();**  	// declared in functions.h

```
void CLEditFrame::ChangeNext()   // implemented in main.cpp
{

    LogFile << "Change Next " << std::endl;

    for (tf = 0; tf < ChngCnt; tf++)
    {
        if (TF[tf].index > prevtf)    // look for the index in the after the prior one
        {
            ChangeIt();
            wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " " + " next applied");
            frstl = TF[tf].index + 1;    //off by one eh
            prevtf = TF[tf].index;
            return;
        }
    }

    wxLogStatus(PrimaryCommand + " " + FirstParameter + " " + SecondParameter + " " + " no more");

}
```
This is how you reuse code. Change It handles a change, so now, we just do it in a loop.
**void ChangeAll();**  	// declared in functions.h

```
void CLEditFrame::ChangeAll()   // implemented in main.cpp
{

    LogFile << "Change All Loop" << std::endl;

    for (tf = 0; tf < ChngCnt; tf++)
    {
        ChangeIt();
    }

}
```
This is the switcheroo. Capture the line to change, from. Initialize the target, to. Change from to. Apply the new result string back from where you took it.

Add to variables.h

```
	int ChangeLineTl;   // change line to string length
    int ChangeLineFl;   // change line from string length
    std::string ChangeLineT;    // change line to string
    std::string ChangeLineF;    // change line from string
```

**void ChangeIt();**  	// declared in functions.h

```
void CLEditFrame::ChangeIt()   // implemented in main.cpp
{

    LogFile << "Change All " << std::endl;

// this is where the line is
    i = TF[tf].index;
    ChangeLineF  = winputfile[i].wIFCode;
    ChangeLineFl = winputfile[i].wIFCode.length();
// new target line
    ChangeLineT  = "";
    ChangeLineTl = 0;
// start replacing here
    f = TF[tf].pos;

    ChangeOver();
//  changed line
    winputfile[i].wIFCode = ChangeLineT;
    inputfile[i].IFCode   = ChangeLineT;

}
```
This is the mechanics of changing a string in a line. It helps to perform this task on a piece of paper to get a feel of what needs to be done and considered. It’s clunky grunt work. There’s probably another way to do this, but, I’m so used to character and array processing, I did it like this.
**void ChangeOver();**  	// declared in functions.h

```
void CLEditFrame::ChangeOver()   // implemented in main.cpp
{

    LogFile << "Change Over " << std::endl;

// copy the bytes From To until f - the first byte for the change from string
    for (l = 0; l < f; l++)
    {
        ChangeLineT += ChangeLineF[l];
    }

    if (ChangeTol <= ChangeFroml)
    // the change To string will fit completely into the From string
    {
        ChangeOverShort();
    }
    else
    //  if (ChangeTol > ChangeFroml the To string is bigger than From string - need to squeeze it into the line
    {
        ChangeOverLong();
    }

}
```
This is if the change to string length is less than or equal to the change from string length. It fits inside the same space. A picture is worth 1000 words.
**void ChangeOverShort();**  	// declared in functions.h

```
void CLEditFrame::ChangeOverShort()   // implemented in main.cpp
{

    LogFile << "Change Over Short";

//  from this XXXXXXFFFFXXXXXX
//    to this XXXXXXTTTTXXXXXX
//  or
//  from this XXXXXXFFFFFFXXXXXX
//    to this XXXXXXTTTTXXXXXX

// append the To string
    for (l = 0; l < ChangeTol; l++)
    {
        ChangeLineT += ChangeTo[l];
    }
    posp1 = f + ChangeFroml;
// append the rest for the From line
    for (l = posp1; l < ChangeLineFl; l++)
    {
        ChangeLineT += ChangeLineF[l];
    }

}
```
This is if the change to string length is greater than the change from string length. We need to make space for it. A picture is worth 1000 words. Did you notice the ‘+=’ is acting on characters just as easy as numbers? It’s called operator overloading. With strings it means append, or add it to the end. C++ does it for you. 
**void ChangeOverLong();**  	// declared in functions.h

```
void CLEditFrame::ChangeOverLong()   // implemented in main.cpp
{

    LogFile << "Change Over Long ";
//  from this XXXXXXFFFXXXXXX
//    to this XXXXXXTTTTTTXXXXXX

//  append the first part of the To string
    l = 0;
    for (pos = f; pos < ChangeFroml; pos++)
    {
        ChangeLineT += ChangeTo[l];
        l++;
        posp1 = pos + 1;  // start location of byte after changed string
    }

// append the remaining part of the To string
    for (l = l; l < ChangeTol; l++)
    {
        ChangeLineT += ChangeTo[l];
    }

// append the rest of the Line - append
    for (l = posp1; l < ChangeLineFl; l++)
    {
        ChangeLineT += ChangeLineF[l];
    }

}
```
This is the ‘reset’ action. It removes all the line commands from the current file. Sort of like a do over.
**void Reset();**  	// declared in functions.h

```
void CLEditFrame::Reset()   // implemented in main.cpp
{

    LogFile << "Reset " << std::endl;

// clear all commands
    InitCC();
    InitMM();
    InitOO();
    InitRR();
    InitFF();
    InitTF();
    InitCTrackers();

    for (i = 0; i < wfilecnt; i++)
    {
        inputfile[i].IFlc   = "000000";
        winputfile[i].wIFlc = "000000";
    }

    wxLogStatus(PrimaryCommand + " applied");

    WipeCommand();

}
```
This is the ‘sort’ action. It’s silly and just for fun. It could be useful, but, I included it to provide you with an example of the fastest sort logic ever created. It was created by a woman.Shell-Metzner sort an adaptation of the Shell sort by Marlene Metzner Implemented in a class, so that we make it fun! And even more fun later. We’ll call if CLEditSM. 
Add to objects.h

```
	// SORT
	// this is an instance of a class to SORT the current file
		CLEditSM SM;
```

Add to Main.h

```
	#include "CLEditSM.h"
```

Add to functions.h

```
	int BiSearch();
```

Add to variables.h

```
    int left;           // lower bound of array
	int right;          // upper bound of array
   	int mid;            // location of 'key' if found
    	std::string key;    // key value to search for
```

**void SortSM();**  	// declared in functions.h

```
void CLEditFrame::SortSM()   // implemented in main.cpp
{

    LogFile << "Sort " << std::endl;

//trim the ends off the file
    LogFile << "Trim File " << std::endl;
    for (i = (wfilecnt - 1); i > 1; i--)
    {
        TrimFile();
    }

    for (i = 0; i < wfilecnt; i++)
    {
        SM.inputfile[i].IFCode = winputfile[i].wIFCode;
    }

    SM.rowcnt = wfilecnt;
    SM.SortSM();

    for (i = 0; i < wfilecnt; i++)
    {
        inputfile[i].IFlc   = "000000";
        inputfile[i].IFCode   = SM.inputfile[i].IFCode;
        winputfile[i].wIFlc   = "000000";
        winputfile[i].wIFCode = SM.inputfile[i].IFCode;
    }

// binary search - for kicks
    left = 0;
    right = wfilecnt - 1;
    mid = 0;
    key = "Pierre";
    res = BiSearch();

    if (res == -1)
    {
        LogFile << "Binary Search - Pierre not found " << std::endl;
    }
    else
    {
        LogFile << "Binary Search - Pierre found here " + std::to_string(mid) << std::endl;
    }

    frstl = 1;

    LoadScreen();   //always from work input

    wxLogStatus(PrimaryCommand + " applied");

    WipeCommand();

}
```
This is the logic for a binary search. It’s not need by our Editor, but I included it because it might come in handy.
Add to functions.h
	int BiSearch();
**int BiSearch();**   // declared in function.h

```
int CLEditFrame::BiSearch()	// implemented in main.cpp
{

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (winputfile[mid].wIFCode == key)
        {
            return mid;
        }
        if (winputfile[mid].wIFCode < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;

}
```

Add the header and implementation files for class CLEditSM 

file CLEditSM.h

```
#include <string>
class CLEditSM
{
    public:

        CLEditSM();
        virtual ~CLEditSM();

        int rowcnt;

        struct InputFile
        {
            std::string IFCode; // the line of code
        };
        InputFile inputfile[25000];  // 23,000 line is the biggest single block of code I've ever seen aka "203"

        void SortSM();

    protected:

    private:

        int i;
        int j;
        int k;
        int l;
        int m;
        std::string temp;

        void Swap();
        void Loop();
        void LoopLoop();

};

CLEditSM.cpp
// this is the Shell-Metzner sort an adaptation of the Shell sort by Marlene Metzner
// the fastest sort on the planet
#include "CLEditSM.h"
CLEditSM::CLEditSM()
{
    //ctor
}

CLEditSM::~CLEditSM()
{
    //dtor
}
void CLEditSM::SortSM()
{
    rowcnt--; // the number of elements in the array offset by one

    m = rowcnt;

    while (m > 0)
    {
        m /= 2;
        k = rowcnt - m;
        j = 0;
        do
        {
            Loop();
        }
        while (j <= k);
    }

}
void CLEditSM::Loop()
{

    i = j;

    do
    {
        LoopLoop();
    }
    while (i >= 0);

    j++;

}
void CLEditSM::LoopLoop()
{

    l = i + m;

    if (inputfile[i].IFCode > inputfile[l].IFCode)
    {
        Swap();
        i -= m;
    }
    else
    {
        i = -1;
    }

}
void CLEditSM::Swap()
{

    temp = inputfile[i].IFCode;

    inputfile[i].IFCode = inputfile[l].IFCode;

    inputfile[l].IFCode = temp;

}
```
This is a real mile stone. We’ve completed OnApplyClicked! Let’s finish out our connection OnKeyDown. We had much more to do. We left it because these are keyboard event driven connections to actions. It’s clear that we’re injecting actions between the send LoadScreen, receive ProcessScreen loop. At the level of the ENTER key event, and not a key level event. We’re not going to react to key press event like the IDE does. We don’t need to. 

Add to functions.h
```
	void FindNext(); 
```
Really? We added eight key shortcuts and only need to add one function? Why you ask. It’s because the ‘change’ action performs one change by default, but the ‘find’ action performs ‘all’ by default. Why? Because I said so. Kidding. I coded it like that because most of the time, this is what we want done. Similar applications exhibit the same behavior. Weird things happen.           
**void OnKeyDown(wxKeyEvent & event);**  	// declared in functions.h

```
void CLEditFrame::OnKeyDown(wxKeyEvent & event)   // implemented in main.cpp
{

    switch ( event.GetKeyCode() )
    {
        case WXK_NUMPAD_ENTER:
        case WXK_RETURN:
            ProcessScreen();
            LoadScreen();
            break;
        case WXK_CONTROL_F:
        case WXK_F5:
            LogFile << "F5 " << std::endl;
            ProcessScreen();
            if  (changes)
            {
                Find();     // because things might have changed
            }
            else
            {
                FindNext();
            }
            LoadScreen();
            break;
        case WXK_END:
        case WXK_NUMPAD_END:
            LogFile << "End " << std::endl;
            ProcessScreen();
            Bottom();
            LoadScreen();
            break;
        case WXK_HOME:
        case WXK_NUMPAD_BEGIN:
            LogFile << "Home " << std::endl;
            ProcessScreen();
            Home();
            LoadScreen();
            break;
        case WXK_F7:
        case WXK_PAGEUP:
        case WXK_NUMPAD_PAGEUP:
            LogFile << "F7 " << std::endl;
            ProcessScreen();
            Up();
            LoadScreen();
            break;
        case WXK_F8:
        case WXK_PAGEDOWN:
        case WXK_NUMPAD_PAGEDOWN:
            LogFile << "F8 " << std::endl;
            ProcessScreen();
            Down();
            LoadScreen();
            break;
        case WXK_HELP:
        case WXK_F1:
            LogFile << "F1 " << std::endl;
            ProcessScreen();
            Help();
            LoadScreen();
            break;
        case WXK_F6:
            LogFile << "F6 " << std::endl;
            ProcessScreen();
            if  (changes)
            {
                Change();     // because things might have changed
            }
            else
            {
                ChangeNext();
            }
            LoadScreen();
            break;
    }

    event.Skip();

}
```

This is the reaction to key F5. All we need to do here is Load Screen from a new location. 
**void FindNext();**  	// declared in functions.h

```
void CLEditFrame::FindNext()   // implemented in main.cpp
{

    LogFile << "Find Next" << std::endl;

//default for no next
    frstl = FF[0].index + 1;    //off by one eh
    prevf = FF[0].index;

    for (f = 0; f < FindCnt; f++)
    {
        if (FF[f].index > prevf)    // look for the index in the after the prior
//						 one
        {
            frstl = FF[f].index + 1;    //off by one eh
            prevf = FF[f].index;
            return;
        }
    }

} 
```

We’re done! We’re done with CLEditMain. We just need to go back to Initialize, because we left it incomplete. 
**void Initialize();**  	// declared in functions.h

```
void CLEditFrame::Initialize()   // implemented in main.cpp
{

    LogFile << "Initialize " << std::endl;

// screen
    InitScreen();
// variables
    haveaFile = false;
    CurrentFile = "";       // the name of the file currently being edite
    Byte        = ' ';      // do nothing - like a continue
    ypos        = 0;        // Y position
    pos         = 0;        // search position
    strpos      = 0;        // start position
    Mstrl       = 0;        // length of Move string
    Ostrl       = 0;        // length of Overlay string
    posp1       = 0;        // string position plus 1 - next byte
    str         = "";       // common string
    i           = 0;        // index into string
    wi          = 0;        // index into work string
    l           = 0;        // index other
// find
    FindStr     = "";       // find string
    res         = 0;        // result of STD::STRING::FIND
    FindCnt     = 0;        // number of times string found
    MinusOne    = -1;       // a constant 
    f           = 0;        // index into found string locations
    OnOne       = true;     // trigger for first time
    prevf       = 0;        // previously found string location

//change
    ChangeFrom  = "";       // change from string
    ChangeFroml = 0;        // change from string length
    ChangeLineT  = "";      // change line to string
    ChangeLineTl = 0;       // change line to string length
    ChangeLineF  = "";      // change line from string
    ChangeLineFl = 0;       // change line from string length
    ChngCnt     = 0;        // number of times change from string found
    tf          = 0;        // index into change from found string locations
    OnOnetf     = true;     // trigger for first time
    prevtf      = 0;        // previously found string location
    ChangeTo    = "";       // change to string
    ChangeTol   = 0;        // change to string length

// Command
    Commandl    = 0;        // the length of the command line string
    Commandstr      = "";   // the command string
    PrimaryCommand  = "";   // the Primary command
    FirstParameter  = "";   // the first parameter
    SecondParameter = "";   // the second parameter
    ThirdParameter  = "";   // the third parameter

// for binary search
    left = 0;               // lower bound of array
    right = 0;              // upper bound of array
    mid = 0;                // location of 'key' if found
    key = "";               // key value to search for

// this is the "screen" 50 lines of visible code ( line command area 6 bytes / line of code 80 bytes)
    InitUser();
// to make the line command area pretty "000010"
//      ostringstream os;     defined local because otherwise it concatenates
    prettyint = 0;      // STD::OSTRINGSTREAM::SETW number to output
    prettystr = "";     // result string from STD::OSTRINGSTREAM::SETW
// error / logging
    Return = true;          // return
    ReturnFunction = "";    // the name of the function running
    ReturnCode = "";        // a return code
    ReturnMessage = "";     // a meaningful return message

// file to and from file functions
    InitCF();
// files to and from stage database
    InitDB();
// the file open by the user
    InitIF();
// the work file being processed
    InitWIF();
// a line or block being Copied
    InitCC();
// a line or block to be Moved
    InitMM();
// a line or block to be Overlaid
    InitOO();
// a line or block to be Repeated
    InitRR();
// line command trackers
    InitCTrackers();
// index to found strings - find
    InitFF();
// index to found strings - change from
    InitTF();

}
```
We completed CLEditSM, because it’s small. Now we need to finish out two other classes CLEditCF the file functions and CLEditDB the database functions. Lastly, we circle back and add more features, and maybe clean some things up. 
You might be asking, how did I write all this down and put it all together. What I did was I thought about what I wanted to do. I wrote it down on paper. Then I open a file and start adding comments. Only Comments. That is step one.
Example
// do this
// do that 
// do the other thing
Step two is to create high level, empty files, as containers for the code. I put comments into each of those. Then as I added topics and logic to this document, I did the exact same action in the IDE and I compiled and tested as I progressed. This ensures, as best possible the completeness of this document. Recall that so far, there are two basically empty class implementations. We’ll complete those
now.
They are small so we’ll just dive into CLEditCF. This is for file processing, not stream processing. Real life, not silly list taking and such. I need to digress.
Bits and bytes hardly matter unless they are organized into some form of useful collection. We are not taking about dials, buttons, check boxes. Were talking about real data. Real data is complicated.
Take my personal favorite example, names and addresses. Everyone has a name and address. People have a first name, a last name and perhaps a middle initial. Some people have a title at the end of their names like lawyers, esquire, or doctors MD. Then in the address typically we see street number, street, apartment number, city, state, zip, county, country. 
How many different ways can you combine all those values? How many different days can you define those values? Is zip code 5 numbers, or 9 numbers. Does it include the dash? The US Postal Service has one way, the IRS another. And uess what, nobody is the same. Oh. How many addresses can a person have? Good questions. 
The point to be made here is that data requires structure. The whole idea is called data administration. It’s both a science, and an art. You need to decide, what data, what it will look like and how are you going to 'process' it. You also have to be disciplined. When you read that C++ is a strongly typed language, that’s type discipline. 
Everyone born before the year 2000, and those after, experience the cost of poor data administration and some woefully poor data discipline. My professional career started in 1982, on cards. With only 80 bytes per card, how do you imagine they decided to define Dates? You guess it, they said to themselves, we don’t need the century, we’ll save two bytes! Besides, this program wont be running in 20 years, and I’ll be retired by then. Not to mention format, will it be yymmdd, mmddyy, ddmmyy or julian yyddd or dddyy. You save 1 byte!
Were they ever wrong! Programs that I wrote at AT&T in the 90’s are still running 1000’s of times per day, even today. Today’s ‘modern’ languages have ‘date’ types and all sorts of functions to deal with them.
In the beginning. I do like to talk about the past because it can explain the future. In the beginning, remember those punch cards. Data was on punch cards too. Each card could only hold 80 characters. These cards, when they were data, were referred to as ‘records’. So now your name and address ‘file’ needs structure. These structures know as ‘layouts’ need to be defined by you, and filled in character by character for consumption. Some languages like COBOL make that so easy for you. Not C++. CLEditCF will give you the frame work for even thinking about this mehtodology. 
CLEditCF is what real file processing looks like. For fun, we’ll improve CLEdit by adding a create record function, later. In Data Processing terms, records within a file are consistent within a layout. Each file will have a different layout.  The language of file processing is like  Open, Read, Write, ReWrite, Delete, Close.  
Databases. A database stores data in tables. Tables have a structure. Each ‘record’ in the table is called a row. A database management system DBMS can handle many databases each containing many tables. Also, the DBMS provides a ton of functions. There are books and books. The language of database is like USE, CREATE,SELECT,UDATE,DELETE,INSERT. And many more. We’ll touch on the basics. The language of all DBMS is SQL. 
Ok. Back to reality. Hey Pierre, why did you write ‘using namespace std’ and then waste all those keystrokes typing std::string instead of just string? Because, if you add a new library, or someone  changes a library, affecting the ‘string’ type, my code will always work. Now and forever. 
Reminder that CLEditCF is a class. It has public parts and private parts. Never us a class in your  project , unless, you have all the code to the class and everything inherited from those classes. If you can’t read the code, you have no idea that your program is doing. No idea! Period. All the libraries we’ve used are open source, the code is 100% available. 

**file CLEditCF.h**  complete


```
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <ctype.h>
using namespace std;
class CLEditCF
{
    public:

        CLEditCF();
        virtual ~CLEditCF();

        std::string fileiname;
        std::string fileoname;

        int fileibytecnt;
        int fileireccnt;
        int fileoreccnt;

        struct InputFile
        {
            std::string IFCode; // the line of code
        };
        InputFile inputfile[25000];  // 23,000 line is the biggest single block of
//							 code I've ever seen aka "203"

        int copyfile(std::string, std::string);

        int openfile(std::string);  // open file - load into InputFile structure

        int savefile(std::string);  // save / save as file - from InputFile
//						 structure

    protected:

    private:

        std::fstream filei;
        char fileic;
        int fileitellg;


        std::fstream fileo;
        char fileoc;
        int fileoi;
        int fileotellg;
        char fileir[201];

        std::string mode;
        std::string str;
        char arr[201];
        char tick;
        char tack;
        int i;
        int j;
        int k;
        int l;
        int Outreccnt;
        int start_s;
        int stop_s;
        std::string msg;
        int abendi;
        bool abend;

        void init();
        void openfo();
        void openfi();
        void closefi();
        void closefo();
        void eop();
        void processfir();
        void readfir();
        void processfor();
        void writefor();
        void initfileir();
        void initsavefileir();
        void stringtochar();

};
```
**file CLEditCF.cpp** complete 

```
#include "CLEditCF.h"
using namespace std;
CLEditCF::CLEditCF()
{
    //ctor
}

CLEditCF::~CLEditCF()
{
    //dtor
}

int CLEditCF::copyfile(std::string fileiname, std::string fileoname)
{
    mode = "copy";

    start_s = clock();

    init();

    openfo();

    if (abendi != 0)
    {
        goto copyexit;
    }

    openfi();

    if (abendi != 0)
    {
        goto copyexit;
    }

    i = 0;  //used to track position
    j = 0;  //used for logical record length

    readfir();

    while (fileitellg > 0)  // at end of file the read returns -1
    {
        processfir();
    }

    closefi();

    closefo();

    eop();

    stop_s = clock();
    std::cout << "elapsed time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << std::endl;

copyexit:

    return abendi;

}

int CLEditCF::openfile(std::string fileiname)
{
    mode = "open";

    start_s = clock();

    init();

    openfi();

    if (abendi != 0)
    {
        goto openexit;
    }

    inputfile[0].IFCode = "";
    for (i = 1; i < 25000; i++)
    {
        inputfile[i] = inputfile[0];
    }

    i = 0;  //used to track position
    j = 0;  //used for logical record length
    Outreccnt = 0;

    readfir();

    while (fileitellg > 0)  // at end of file the read returns -1
    {
        processfir();
    }

    closefi();

    eop();

    stop_s = clock();
    std::cout << "elapsed time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << std::endl;

openexit:

    return abendi;

}
int CLEditCF::savefile(std::string fileoname)
{
    mode = "save";

    start_s = clock();

    init();

    openfo();

    if (abendi != 0)
    {
        goto saveexit;
    }

    for (i = 0; i < fileoreccnt; i++)
    {
        stringtochar();
        writefor();
        initsavefileir();
    }

    closefo();

    eop();

    stop_s = clock();
    std::cout << "elapsed time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << std::endl;

saveexit:

    return abendi;

}
void CLEditCF::stringtochar()
{

    for (l = 0; l < 201; l++)
    {
        arr[l] = '\0';     // set to null
    }

    strcpy(arr, inputfile[i].IFCode.c_str());

    k = inputfile[i].IFCode.length();

    for (l = 0; l < k; l++)
    {
        fileir[l] = arr[l];
    }

}
void CLEditCF::init()
{

    std::time_t currentdatetime = std::time(nullptr);

    std::cout << "Welcome " << std::ctime(&currentdatetime) << std::endl;

    for (l = 0; l < 201; l++)
    {
        arr[l] = '\0';     // set to null
    }

    str = "";

}

void CLEditCF::openfo()
{

    fileo.open(fileoname, std::ios::out);

    if  (!fileo.is_open())
    {
        msg = "TO file Open error";
        abendi = 3500;
    }

}
/*
We’re going to read, or input a file here “stg::ios::in” means input.  
I could write a whole book here. Computers are fast. Files are generally small. But file systems are funny. They catalog the file as soon as you touch it.
What’s the problem? The problem is, suppose the file is large, and suppose that the file is being created, at the same time that you want to read it. You might not be looking at the whole file. Imagine if that file is being sent someplace via secure ftp. Secure FTP aka guaranteed delivery, will try to send the file in one go, but if it can’t it will keep trying until its successful. If you try to read this file, the system will let you, but you won’t get the whole file. And you won’t know it. 
You cannot even begin to appreciate the problems that creates. The below is not the way to read a file. The correct way is to check to see if the file is available to update first. Why? Because the system knows if and when the file is complete and will only let you update it once that is true.             
This is the wrong way
void CLEditCF::openfi()
{

    filei.open(fileiname, std::ios::in );

    if  (!filei.is_open())
    {
        msg = "FROM file Open error";
        abendi = 3501;
    }

}
this is the right way */
/*
to test this, open the file with another editor first then try ‘open filename’ and you will get a ‘file unavailable’ message. Exactly what we want    
*/
void CLEditCF::openfi()
{
// keep trying to open the file for output, until you can
// you won't be able to do that if the file is not complete or available
    fileoi = 0;
    do
    {
        filei.open(fileiname, std::ios::out | std::ios::app);
        fileoi++;
        if (fileoi > 2)
        {
            break;
        }
    }
    while (!filei.is_open());

    if (fileoi > 2)
    {
        msg = "FROM file unavailable";
        abendi = 3501;
        return;
    }

    filei.close();

// now you can open the file
    filei.open(fileiname, std::ios::in );

    if  (!filei.is_open())
    {
        msg = "FROM file Open error";
        abendi = 3502;
        return;
    }

}

void CLEditCF::closefi()
{

    filei.close();

}

void CLEditCF::closefo()
{

    fileo.close();

}

void CLEditCF::eop()
{

    std::cout << "File In Bytes " << fileibytecnt << std::endl;

    std::cout << "File In Records " << fileireccnt << std::endl;

}

void CLEditCF::processfir()
{

    j++;

    fileir[i] = fileic;

    i++;

    if  (fileic == '\n')
    {
       processfor();
    }

    readfir();

}

void CLEditCF::readfir()
{

    fileic = filei.get();   // one byte at a time

    fileitellg = filei.tellg();

    if  (filei.tellg() > 0)
    {
        fileibytecnt = filei.tellg();
    }

}

void CLEditCF::processfor()
{

    if  (mode == "copy")
    {
        writefor();
    }
    else
    {
        if  (mode == "open")
        {
            fileireccnt++;
            inputfile[Outreccnt].IFCode = fileir;
            Outreccnt++;
        }
    }

    initfileir();

}

void CLEditCF::writefor()
{

    fileo << fileir;

    fileireccnt++;

}

void CLEditCF::initfileir()
{

    for (i = 0; i < j; i++)   // i < j to save time
    {
        fileir[i] = '\0';     // set to null
    }

    i = 0;
    j = 0;

}

void CLEditCF::initsavefileir()
{

    for (l = 0; l < k; l++)
    {
        fileir[l] = '\0'; //set to null
    }

}
```
A header for our database class. Nothing scary here. We’re going to use pointers, to dynamically instantiate objects, because, they are big, under the hood. Then ‘free’ them later, ‘delete’ them.       

**file CLEditDB.h** complete

```
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <sstream>

#include "mysql.h"
#include "mysql_driver.h"
#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
using namespace std;
class CLEditDB
{
    public:

        CLEditDB();
        virtual ~CLEditDB();

        int errorcode = 0;
        int rowcnt = 0;
        int abendi;
        int u;
        int i;
        int n;
        bool OnOne;

        std::string what = "";
        std::string state = "";

        std::string DataBase;
        std::string TableName;
        std::string Query;
        std::string CodeStr;
        int         CodeStrl;
        std::string CodeNew;
        int         CodeId;
        stringstream sql;

        struct InputFile
        {
            std::string IFCode; // the line of code
        };
        InputFile inputfile[25000];  // 23,000 line is the biggest single block of
//							 code I've ever seen aka "203"

        sql::Driver * driver;
        sql::Connection * con;
        sql::Statement * stmt;
        sql::PreparedStatement * pstmt;
        sql::ResultSet * res;

        void InitInputFile();
        void Driver();
        void Connect();
        void Free();
        void Statement();
        int  Cursor();
        void FromStage();
        void ToStage();
        void UseDb();
        void DropTable();
        void CreateTable();
        void InsertRow();
        void FixQuote();
        void Error();

    protected:

    private:

        std::fstream LogFile;
        std::fstream ErrFile;

};
```

**file CLEditDB.cpp** complete 

```
#include "CLEditDB.h"
using namespace std;
CLEditDB::CLEditDB()
{

    LogFile.open("CLEditDBLogFile.txt", std::ios::out);
    ErrFile.open("CLEditDBErrFile.txt", std::ios::out);

    LogFile << "Constructor " << std::endl;

    OnOne = true;

}
CLEditDB::~CLEditDB()
{

    LogFile << "Destructor " << std::endl;

}
void CLEditDB::Driver()
{

    LogFile << "Driver " << std::endl;

    try
    {
        driver = get_driver_instance();
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }

}
void CLEditDB::Connect()
{

    LogFile << "Connect " << std::endl;

    try
    {
        con = driver->connect("localhost", "CLEdit", "CLEdit");    //host,user,pass
        con->setSchema(DataBase);
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }

}
void CLEditDB::Statement()
{

    LogFile << "Statement " << std::endl;

    try
    {
        stmt = con->createStatement();
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }

}
int CLEditDB::Cursor()
{

    LogFile << "Count(*) " << std::endl;

    try
    {
        Query = "";
        Query += "SELECT COUNT(*) AS total FROM ";
        Query += DataBase;
        Query += ".";
        Query += TableName;
        Query += ";";
        res = stmt->executeQuery(Query);
        if (res->next())
        {
            rowcnt = res->getInt("total");
        }
        else
        {
            rowcnt = 0;
        }
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }

    LogFile << "Cursor " << std::endl;

    try
    {
        Query = "";
        Query += "SELECT * FROM ";
        Query += DataBase;
        Query += ".";
        Query += TableName;
        Query += ";";
        res = stmt->executeQuery(Query);
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }

    return rowcnt;

}
void CLEditDB::InitInputFile()
{

    LogFile << "Init Input File " << std::endl;

    inputfile[0].IFCode = "";

    for (u = 1; u < 25000; u++)
    {
        inputfile[u] = inputfile[0];
    }

}
void CLEditDB::ToStage()
{

    LogFile << "To Stage " << std::endl;

    UseDb();

    DropTable();

    CreateTable();

    CodeId = 0;
    for (u = 0; u < rowcnt; u++)
    {
        InsertRow();
    }

}
void CLEditDB::UseDb()
{

    LogFile << "UseDb " << std::endl;

    try
    {
        Query = "";
        Query += "USE ";
        Query += DataBase;
        Query += ";";
        stmt->execute(Query);
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }

}
void CLEditDB::DropTable()
{

    LogFile << "Drop Table " << std::endl;

    try
    {
        Query = "DROP TABLE IF EXISTS ";
        Query += TableName;
        Query += ";";
        stmt->execute(Query);
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }

}
void CLEditDB::CreateTable()
{

    LogFile << "Create Table " << std::endl;

    try
    {
        Query = "";
        Query += "CREATE TABLE ";
        Query += TableName;
        Query += " (idCLEdit INT, CLEditcode VARCHAR(255));";
        stmt->execute(Query);
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }

}
void CLEditDB::InsertRow()
{

    if (OnOne)
    {
        LogFile << "Insert Row " << std::endl;
        OnOne = false;
    }

// unfortunately MySQL cannot handle a single quote in a string intended to be
// stored as a varchar
// we need to look for single quotes and double them from ' to ''. two single
// quotes for each one
// MySql will drop the 'extra' single quote when it selects the value - that's nice
// isn't it
// we put this fix in this module because this is the module with the issue
    CodeStr = inputfile[u].IFCode;
    CodeStrl = CodeStr.length();
    CodeNew = "";

    for (i = 0; i < CodeStrl; i++)
    {
        FixQuote();
    }

    CodeStr = "";
    CodeStr = CodeNew;
    CodeId++;

    try
    {
        sql.str("");
        sql << "INSERT INTO ";
        sql << TableName;
        sql << "(idCLEdit, CLEditcode) VALUES (";
        sql << CodeId << ", '" << CodeStr << "')";
        stmt->execute(sql.str());
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }

}
void CLEditDB::FixQuote()
{

    if (CodeStr[i] == '\'')
    {
    //  copy the byte
        CodeNew += CodeStr[i];
    //  add an extra quote
        CodeNew += '\'';
    }
    else
    {
    //  just copy the byte
        CodeNew += CodeStr[i];
    }

}
void CLEditDB::FromStage()
{

    LogFile << "From Stage " << std::endl;

    InitInputFile();

    try
    {
        int i = 0;
        while (res->next())
        {
            std::cout << "CLEdit ";
            std::cout << " id "   << res->getInt("idCLEdit");
            std::cout << " line " << res->getString("CLEditcode");
            std::cout << endl;
            inputfile[i].IFCode = res->getString("CLEditcode");
            i++;
        }
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }

}
void CLEditDB::Free()
{

    LogFile << "Free " << std::endl;

    try
    {
        delete con;
        delete stmt;
        delete pstmt;
        delete res;
    }
    catch (sql::SQLException &e)
    {
        errorcode = e.getErrorCode();
        what = e.what();
        state = e.getSQLState();
        Error();
    }
}
void CLEditDB::Error()
{

    LogFile << "Error " << std::endl;

    ErrFile << std::endl;
    ErrFile << "CLEditDB - Error " << errorcode;
    ErrFile << std::endl;
    ErrFile << "# ERR: SQLException in " << __FILE__;
    ErrFile << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
    ErrFile << "# ERR: " << what;
    ErrFile << " (MySQL error code: " << errorcode;
    ErrFile << ", SQLState: " << state << " )" << std::endl;

    exit(abendi);

} 
```
Wow. Did you see that! Ok. Time to unpack. Essentially, to get to a database you need the following. A driver, like a limo driver to get you to and from the data. A connection to a database and table. To place to create a statement. Execute the statement, then free up everything.
There is also another new fun part. A 'try/catch' block. What? Yes. We know how important it is to maintain a connection. Like when you pick up the phone, you hear a dial tone. What the phone did is open a connection, and tell you via the dial tone that it was successful. A more modern example is your Bluetooth headphones. You press a button, you’ll hear ‘power on’. Then it searches for a connection, and when it finds one it says ‘Bluetooth connected’.
Try / Catch blocks give us the opportunity to check to see if a resource is available and react accordingly, instead of crashing in the blind darkness. The beauty of a modern IDE is that as you hover over the object, it will tell you what types of exceptions might happen. So you can code separate solutions for each one. That’s cleaver. 

**CLEdit** – incomplete tasks – exclude logic

**REFERENCES / SAMPLES**

Arguments, create a ‘console’ project called Arguthis or whatever you like
Arguments, also know as parameters, provide the ability pass options to run a program. For example the “grep” program in Unix, a search tool, might be run like this example “grep -rnw -e ‘text’”. I see at least 4 arguments, maybe “-rnw” means three different things. No matter, you get the idea.        
create **file main.cpp**

```
#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
    cout << "Hello world!" << endl;
    cout << " why argue " << endl;
    cout << argc << endl;
    return 0;
}
```

We’ll do the normal compile and run in a terminal with 3 arguments xxx, yyy and zzz.

```
$ ./Arguethis xxx yyy zzz
Hello world!
 why argue 
4
```

We’ll next run in a terminal with no arguments. 

```
$ ./Arguethis
Hello world!
 why argue 
1
```

Let’s figure out what is going on here. A good guess is that the first argument is the name of the program. How do we prove that. Let’s take a peek at argv[0], the array to store the arguments. 

```
#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
    cout << "Hello world!" << endl;
    cout << " why argue " << endl;
    cout << argc << endl;

    if (argc > 0)
    {
        cout << argv[0] << endl;
    }

    return 0;
}
```

$ ./Arguethis
Hello world!
 why argue 
1
./Arguethis
	
Ok. Wow, I didn’t expect that, but I can deal. Let’s keep looking with more logic.  


```
#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
    cout << "Hello world!" << endl;
    cout << " why argue " << endl;
    cout << argc << endl;
    int i = argc;
    for (i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }

    return 0;
}
```
And we run it a couple of times, one argument. 


```
$ ./Arguethis xxx
Hello world!
 why argue 
2
./Arguethis
xxx
```


And we run it a couple of times, two arguments.  


```
$ ./Arguethis xxx yyy
Hello world!
 why argue 
3
./Arguethis
xxx
yyy
```


And we run it a couple of times, three arguments. 


```
$ ./Arguethis xxx yyy zzz
Hello world!
 why argue 
4
./Arguethis
xxx
yyy
zzz
```
Alright. I can work with this. I could modify my copy file program to accept the from file name and the to file name at the time of execution.
Variables create a ‘console’ project called Vegetables or whatever you like
create **file Timer.h**

```
#include <iostream>
#include <chrono>
class Timer
{
    public:

        std::chrono::time_point<std::chrono::high_resolution_clock> start;
        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        std::chrono::duration<float> duration;
        float ms;

        Timer();
        virtual ~Timer();

        void dummy();

    protected:

    private:

};
```

create **file arrays.h**

```
//     Arrays
// Arrays are collections of values that are referred to using a number, an integer starting with 0 aka an index
// normally the first value would be 1 but in C++ the reference is to the beginning address of the first value
// with all the other fancy obfuscation the compiler performs you'd think that would be not biggie but meh
//
// a "so called" one dimensional array

// define 5 integer things
int intArrayThingx[5];
// x  is to be used as an index into the first dimension of the array
int x;
// a "so called" two dimensional array
// an 'array' of 5 x 5 integers
// is the exact same thing as [25] - but referenced differently
int intArrayThingxy[5][5];
// y  is to be used as an index into the second dimension of the array
int y;
// a "so called" three dimensional array
// an 'array' of 5 x 5 x 5 integers
// is the exact same thing as [125] - but referenced differently
int intArrayThingxyz[5][5][5];
// z  is to be used as an index into the third dimension of the array
int z;
// beyond 3 dimensions I have never seen a use for in 40+ years
```
create **file classes.h**

```
// Class declaration - Clunker classes that are being used by Clunker
Timer * timerH = new Timer;   // dynamic call
Timer timer;                  // static call
// Note: if you're starting to think that declaring
// int i;
// is a static declare if variable i of int class - you're right!
// in C++ everything is a class!
```

create **file constants.h**

```
//     Prefixes
// const prefix means CONSTANT - value of a 'const'  cannot change
const int constintThing = 1;
```

create **file functions.h**

```
//     Functions - flow control of the "main" function - what does it do
// provide initial values to variables
// NOTE: since all the variables are GLOBAL in scope, all logic within these functions affects the actual values of the variables
void InitializeVariables();
// expose initial values of variables and the size of each
void SizeofVariables();
// provide initial values to pointers
void InitializePointers();
// expose addresses of pointers, initial values and the size of each
void SizeofPointers();
// expose values pointed to ->
void ValuesofPointers();
// expose integer values of pointers ->
void IntegerValuesofPointers();
// provide initial values to arrays
void InitializeArrays();
// expose values within arrays
void ValuesofArrays();
// provide values to structures - bad way
void InitializeStructuresX();
// provide values to structures - good way
void InitializeStructures();
// expose values within structures
void ValuesofStructues();
// Delete HEAP
void DeleteHeap();
//
//     Functions - with an input value - parameter
//     Functions - with input values - parameters
//     Functions - with a return value
//     Functions - with a return value and input values - parameters
//     Functions - with return values
//     Functions - with return values and an input value
//     Functions - with return values and input values - parameters
//
//     Classes & Methods
// Threads
// std::this_thread::sleep_for(1s);
```
create **file heap.h**

```
// Heap memory - must delete after use
// "new" returns a pointer to memory
char * charThingH = new char;
/*
char16_t char16tThing;  // to be demystified
char32_t char32tThing;  // to be demystified
wchar_t wchartThing;    // to be demystified
unsigned char unsignedcharThing;
signed char signedcharThing;
// Integer Types (signed)
short int shortintThing;
int intThing;
long int longintThing;
long long int longlongintThing;
// Integer Types (unsigned)
unsigned short int unsignedshortintThing;
unsigned int unsignedintThing;
unsigned long int unsignedlongintThing;
unsigned long long int unsignedlonglongintThing;
// Floating-point types, fractions
float floatThing;
double doubleThing;
long double longdoubleThing;
// Boolean type
bool boolThing;
// Void type
// void
// Null pointer
// decltype(nullptr)
// string type
std::string stringThing;
*/
```

create **file main.h**

```
// Clunker is C++ exposed - raw!
//     Pillars of Programming
// Sequence  - what is the logical order of processes
// Condition - what are the conditions under which to process
// Iteration - what are the processes to be repeated
//
// declarations go in .h files (or in .cpp files)
// definitions go in .cpp files
// libraries (logic) used in main, defined outside of main
// C library
#include <cassert>   //	C Diagnostics Library
#include <cctype>    //	Character handling functions
#include <cerrno>    //	C Errors
#include <cfenv>     //	Floating-point environment
#include <cfloat>    //	Characteristics of floating-point types
#include <cinttypes> //	C integer types
#include <ciso646>   //	ISO 646 Alternative operator spellings
#include <climits>   //	Sizes of integral types
#include <clocale>   //	C localization library
#include <cmath>     //	C numerics library
#include <csetjmp>   //	Non local jumps
#include <csignal>   //	C library to handle signals
#include <cstdarg>   //	Variable arguments handling
#include <cstdbool>  //	Boolean type
#include <cstddef>   //	C Standard definitions
#include <cstdint>   //	Integer types
#include <cstdio>    //	C library to perform Input/Output operations
#include <cstdlib>   //	C Standard General Utilities Library
#include <cstring>   //	C Strings
#include <ctgmath>   // Type-generic math
#include <ctime>     //	C Time Library
#include <cuchar>    //	Unicode characters
#include <cwchar>    //	Wide characters
#include <cwctype>   //	Wide character type
// Containers
#include <array>	     //Array
#include <bitset>	     //Bitset
#include <deque>	     //Deque 
#include <forward_list>	 //Forward list
#include <list>	         //List
#include <map>	         //Map
#include <queue>	     //Queue
#include <set>	         //Set
#include <stack>	     //Stack
#include <unordered_map> //Unordered map
#include <unordered_set> //Unordered set
#include <vector>	     //Vector 
//Input/Output Stream Library
#include <ios>
#include <istream>
#include <iostream>
#include <fstream>
#include <sstream>

//Atomics and threading library
#include <atomic>	            //Atomic
#include <condition_variable>	//Condition variable
#include <future>	            //Future
#include <mutex>	            //Mutex
#include <thread>	            //Thread

//Miscellaneous headers
#include <algorithm>         //Standard Template Library
#include <chrono>	         //Time library
#include <codecvt>	         //Unicode conversion facets
#include <complex>	         //Complex numbers library
#include <exception>	     //Standard exceptions
#include <functional>	     //Function objects
#include <initializer_list>	 //Initializer list
#include <iterator>	         //Iterator definitions
#include <limits>	         //Numeric limits
#include <locale>	         //Localization library
#include <memory>	         //Memory elements
#include <new>	             //Dynamic memory
#include <numeric>	         //Generalized numeric operations
#include <random>	         //Random
#include <ratio>	         //Ratio header
#include <regex>	         //Regular Expressions
#include <stdexcept>	     //Exception classes
#include <string>	         //Strings
#include <system_error>      //System errors
#include <tuple>	         //Tuple library
#include <typeindex>	     //Type index
#include <typeinfo>	         //Type information
#include <type_traits>	     //type_traits
#include <utility>	         //Utility components
#include <valarray>	         //Library for arrays of numeric values

// Exterior Classes
```
create **file pointers.h**

```

//     Pointers - addresses in memory - 8 byte !
// Character Types
char* charThingptr;             // * means pointer, & means address of, = means assign a value from right rvalue to left lvalue
char16_t * char16tThingptr;
char32_t * char32tThingptr;
wchar_t * wchartThingptr;
unsigned char * unsignedcharThingptr;
signed char * signedcharThingptr;

// Integer Types (signed)
short int * shortintThingptr;
int * intThingptr;
long int * longintThingptr;
long long int * longlongintThingptr;

// Integer Types (unsigned)
unsigned short int * unsignedshortintThingptr;
unsigned int * unsignedintThingptr;
unsigned long int * unsignedlongintThingptr;
unsigned long long int * unsignedlonglongintThingptr;

// Floating-point types
float * floatThingptr;
double * doubleThingptr;
long double * longdoubleThingptr;

// Boolean type
bool * boolThingptr;

// string type
std::string * stringThingptr;
```
create **file preprocessor.h** 

```
//  Preprocessor directives
// this means - prior to compiling, replace each instance of "NADA" with "0.0"
#define NADA 0.0
```

create **file references.h**

```
//     References - must be assigned at definition
// Character Types
char & charThingref = charThing;             // & means reference; must define what it refernces
//char16_t & char16tThingref = char16tThing;
//char32_t & char32tThingref = char32tThing;
//wchar_t & wchartThingref = wchartThing;
unsigned char & unsignedcharThingref = unsignedcharThing;
signed char & signedcharThingref = signedcharThing;

// Integer Types (signed)
short int & shortintThingref = shortintThing;
int & intThingref = intThing;
long int & longintThingref = longintThing;
long long int & longlongintThingref = longlongintThing;

// Integer Types (unsigned)
unsigned short int & unsignedshortintThingref = unsignedshortintThing;
unsigned int & unsignedintThingref = unsignedintThing;
unsigned long int & unsignedlongintThingref = unsignedlongintThing;
unsigned long long int & unsignedlonglongintThingref = unsignedlonglongintThing;

// Floating-point types
float & floatThingref = floatThing;
double & doubleThingref = doubleThing;
long double & longdoubleThingref = longdoubleThing;

// Boolean type
bool & boolThingref = boolThing;

// string type
std::string & stringThingref = stringThing;
```
create **file structures.h**

```
// don't try this in C#
// presented is a much more realistic practicle and non trivial example of an array
// 99.99% of the time the requirement is to track, manipulate, gather and report on a collection of things
// a structure is a data container - everything is public
// a structure 'can' contain 'methods' (functions) - but - leave that for classes
// since an 'object' defines data and declares actions that can be performed on the data called methods, leave that for classes
// it's clearer to use structures as data, since classes can contain structures
// here is a structure of two data types, it could have as many types in any number
struct xtimeframe        // this is now a user defined type
{
    int xtime;           // some unit of something
    char xframe;         // a value of that something
};
// now we have 5 of them
xtimeframe x_array[500];

struct yevents
{
    int id;                   // here we have a identifier for the 5 items
    xtimeframe xy_array[500];   // here were declaring an array of arrays - just wait
};
// now we have an array 5 id/arrays
yevents yevents_array[500];

struct zdetail
{
    int post;                 // another thing to keep track of - could be many things and different types of things
    yevents xyz_array[500];
};

zdetail zevents_array[500];     // so here we have an array of arrays of arrays with little extras to go along
```
create **file variables.h**
```
//     Variables - since these are all 'outside' of "main" - these are GLOBAL Scope - within Stack memory
// variables aka identifiers can be named almost anything - but not words reserved to C++. the compiler will set you straight!
// just as everything in Unix is a file, everything in C++ has a "type". A type defines what a thing is and what you can do with it. the compiler will set you straight!
// NOTE: C++ is most easily read from right to left between semi colons - try it
// Character Types
// the crafty C++ compiler 'does stuff' - all the time
// read the below line as "charThing is of char type", or more accurately "charThing is of char class"
char charThing;
char16_t char16tThing;  // to be demystified
char32_t char32tThing;  // to be demystified
wchar_t wchartThing;    // to be demystified
unsigned char unsignedcharThing;
signed char signedcharThing;

// Integer Types (signed)
short int shortintThing;
int intThing;
long int longintThing;
long long int longlongintThing;

// Integer Types (unsigned)
unsigned short int unsignedshortintThing;
unsigned int unsignedintThing;
unsigned long int unsignedlongintThing;
unsigned long long int unsignedlonglongintThing;

// Floating-point types, fractions
float floatThing;
double doubleThing;
long double longdoubleThing;

// Boolean type
bool boolThing;
// Void type
// void
// Null pointer
// decltype(nullptr)

// string type
std::string stringThing;

// prefixes
// const  // to be demystified
// static // to be demystified

// date / time
int start_s;
int stop_s;

create file Timer.cpp

#include "Timer.h"
// constructor
Timer::Timer()
{
    std::cout << "Start Timer\n";
    start = std::chrono::high_resolution_clock::now();
}
// destructor
Timer::~Timer()
{
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    ms = duration.count() * 1000.0f;
    std::cout << "Elapsed Time " << ms << "milliseconds\n";
    std::cout << "End Timer\n";
}
// Methods
void Timer::dummy()
{
// this 'method' exists only to show the difference using the method
// if Timer is used from the stack - static allocation (call)
// or if Timer is used from the heap - dynamic allocation (call) - aka allocated as 'new'
    std::cout << "Timer - dummy";

}

```
create **file main.cpp**

```
// Clunker is C++ exposed - raw!
#include "main.h"
// Preprocessor directives
#include "preprocessor.h"
// Variables - since these are all 'outside' of "main" - these are GLOBAL Scope
#include "variables.h"
// Dynamic allocation
#include "heap.h"
// Pointers
#include "pointers.h"
// References - "another word for" a variable or 'identifier'
#include "references.h"
//    Collections
// Arrays
#include "arrays.h"
// Structures
#include "structures.h"
// Class Definitions - defined classes of main
#include "Timer.h"
//     Functions - flow control of the "main" function - what does it do
#include "functions.h"
// Class declaration - Clunker classes that are being used by Clunker
#include "classes.h"
// External classes  - External Classes that are being used by Clunker
#include "Xclasses.h"


// this is where the program starts
int main()
{
    
    std::cout << "Clunker is C++ exposed - raw!" << std::endl;

// a static call to the dummy method of Timer
    timer.dummy();

// a dynamic call call to the dummy method of Timer
    timerH->dummy();

// these functions are performed in Sequence
// provide initial values to variables
    InitializeVariables();
// expose initial values of variables and the size of each
    SizeofVariables();
// provide initial values to pointers
    InitializePointers();
// expose addresses of pointers, initial values and the size of each
    SizeofPointers();
// expose values pointed to ->
    ValuesofPointers();
// expose integer values of pointers ->
    IntegerValuesofPointers();
// provide initial values to arrays
    InitializeArrays();
// expose values within arrays
    ValuesofArrays();
// provide values to structures - bad way
    InitializeStructuresX();
// provide values to structures - good way
    InitializeStructures();
// expose values within structures
    ValuesofStructues();
// Delete HEAP
    DeleteHeap();


    std::cout << "press enter to continue" << std::endl;
    std::cin.get();

    return 0;

}
// provide initial values to variables
void InitializeVariables()
{
   std::cout << "Initialize Variables " << std::endl;
// Character Types
    charThing = 'P';
    char16tThing = u'P';
    char32tThing = U'P';
    wchartThing = L'P';
    unsignedcharThing = 'P';
    signedcharThing = 'P';

// Integer Types (signed)
    shortintThing = -1;
    intThing = -1;
    longintThing = -1;
    longlongintThing = -1;

// Integer Types (unsigned)
    unsignedshortintThing = 1;
    unsignedintThing = 1;
    unsignedlongintThing = 1;
    unsignedlonglongintThing = 1;

// Floating-point types
    floatThing = 1.1;
    doubleThing = 1.1;
    longdoubleThing = 1.1;

// Boolean type
    boolThing = true;

// string type
    stringThing = "Clunker\0";  // appears to be minimum 32 bytes?

// Heap things
    *charThingH = 'P';

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
 	system("clear");

}
// expose initial values of variables and the size of each
void SizeofVariables()
{
       std::cout << "Size of Variables " << std::endl;
// Character Types
    std::cout << "charThing is............... " << charThing << " and is " << sizeof(charThing) << " bytes " << std::endl;
    std::cout << "char16tThing is............ " << char16tThing << " and is " << sizeof(char16tThing) << " bytes " << std::endl;
    std::cout << "char32tThing is............ " << char32tThing << " and is " << sizeof(char32tThing) << " bytes " << std::endl;
    std::cout << "wchartThing is............. " << wchartThing << " and is " << sizeof(wchartThing) << " bytes " << std::endl;
    std::cout << "unsignedcharThing is....... " << unsignedcharThing << " and is " << sizeof(unsignedcharThing) << " bytes " << std::endl;
    std::cout << "signedcharThing is......... " << signedcharThing << " and is " << sizeof(signedcharThing) << " bytes " << std::endl;

// Integer Types (signed)
    std::cout << "shortintThing is........... " << shortintThing << " and is " << sizeof(shortintThing) << " bytes " << std::endl;
    std::cout << "intThing is................ " << intThing << " and is " << sizeof(intThing) << " bytes " << std::endl;
    std::cout << "longintThing is............ " << longintThing << " and is " << sizeof(longintThing) << " bytes " << std::endl;
    std::cout << "longlongintThing is........ " << longlongintThing << " and is " << sizeof(longlongintThing) << " bytes " << std::endl;

// Integer Types (unsigned)
    std::cout << "unsignedshortintThing is... " << unsignedshortintThing << " and is " << sizeof(unsignedshortintThing) << " bytes " << std::endl;
    std::cout << "unsignedintThing is........ " << unsignedintThing << " and is " << sizeof(unsignedintThing) << " bytes " << std::endl;
    std::cout << "unsignedlongintThing is.... " << unsignedlongintThing << " and is " << sizeof(unsignedlongintThing) << " bytes " << std::endl;
    std::cout << "unsignedlonglongintThing is " << unsignedlonglongintThing << " and is " << sizeof(unsignedlonglongintThing) << " bytes " << std::endl;

// Floating-point types
    std::cout << "floatThing is.............. " << floatThing << " and is " << sizeof(floatThing) << " bytes " << std::endl;
    std::cout << "doubleThing is............. " << doubleThing << " and is " << sizeof(doubleThing) << " bytes " << std::endl;
    std::cout << "longdoubleThing is......... " << longdoubleThing << " and is " << sizeof(longdoubleThing) << " bytes " << std::endl;

// Boolean type
    std::cout << "boolThing is............... " << boolThing << " and is " << sizeof(boolThing) << " bytes " << std::endl;

// string type
    std::cout << "stringThing is............. " << stringThing << " and is " << sizeof(stringThing) << " bytes ?" << std::endl;

// NOTE: see arrays
    std::cout << "stringThing 0 ............. " << stringThing[0] << std::endl;
    std::cout << "stringThing 1 ............. " << stringThing[1] << std::endl;
    std::cout << "stringThing 2 ............. " << stringThing[2] << std::endl;
    std::cout << "stringThing 3 ............. " << stringThing[3] << std::endl;
    std::cout << "stringThing 4 ............. " << stringThing[4] << std::endl;
    std::cout << "stringThing 5 ............. " << stringThing[5] << std::endl;
    std::cout << "stringThing 6 ............. " << stringThing[6] << std::endl;
    std::cout << "stringThing 7 ............. " << stringThing[7] << std::endl;

// Heap
// Character Types
    std::cout << "charThingH is............... " << *charThingH << " and is " << sizeof(*charThingH) << " bytes " << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
  	system("clear");
}
// provide initial values to pointers
void InitializePointers()
{
   std::cout << "Initialize Pointers " << std::endl;
// Character Types
    charThingptr = & charThing;   // '&' on the right side means 'address of'
    char16tThingptr = & char16tThing;
    char32tThingptr = & char32tThing;
    wchartThingptr = & wchartThing;
    unsignedcharThingptr = & unsignedcharThing;
    signedcharThingptr = & signedcharThing;

// Integer Types (signed)
    shortintThingptr = & shortintThing;
    intThingptr = & intThing;
    longintThingptr = & longintThing;
    longlongintThingptr = & longlongintThing;

// Integer Types (unsigned)
    unsignedshortintThingptr = & unsignedshortintThing;
    unsignedintThingptr = & unsignedintThing;
    unsignedlongintThingptr = & unsignedlongintThing;
    unsignedlonglongintThingptr = & unsignedlonglongintThing;

// Floating-point types
    floatThingptr = & floatThing;
    doubleThingptr = & doubleThing;
    longdoubleThingptr = & longdoubleThing;

// Boolean type
    boolThingptr = & boolThing;

// string type
    stringThingptr = & stringThing;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// expose addresses of pointers, initial values and the size of each
void SizeofPointers()
{
   std::cout << "Size of Pointers " << std::endl;
// Character Types
    std::cout << "charThingptr address is............... " << charThingptr << " and is " << sizeof(charThingptr) << " bytes ?" << std::endl;
    std::cout << "char16tThingptr address is............ " << char16tThingptr << " and is " << sizeof(char16tThingptr) << " bytes " << std::endl;
    std::cout << "char32tThingptr address is............ " << char32tThingptr << " and is " << sizeof(char32tThingptr) << " bytes " << std::endl;
    std::cout << "wchartThingptr address is............. " << wchartThingptr << " and is " << sizeof(wchartThingptr) << " bytes " << std::endl;
    std::cout << "unsignedcharThingptr address is....... " << unsignedcharThingptr << " and is " << sizeof(unsignedcharThingptr) << " bytes ?" << std::endl;
    std::cout << "signedcharThingptr address is......... " << signedcharThingptr << " and is " << sizeof(signedcharThingptr) << " bytes ?" << std::endl;

// Integer Types (signed)
    std::cout << "shortintThingptr address is........... " << shortintThingptr << " and is " << sizeof(shortintThingptr) << " bytes " << std::endl;
    std::cout << "intThingptr address is................ " << intThingptr << " and is " << sizeof(intThingptr) << " bytes " << std::endl;
    std::cout << "longintThingptr address is............ " << longintThingptr << " and is " << sizeof(longintThingptr) << " bytes " << std::endl;
    std::cout << "longlongintThingptr address is........ " << longlongintThingptr << " and is " << sizeof(longlongintThingptr) << " bytes " << std::endl;

// Integer Types (unsigned)

    std::cout << "unsignedshortintThingptr address is... " << unsignedshortintThingptr << " and is " << sizeof(unsignedshortintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedintThingptr address is........ " << unsignedintThingptr << " and is " << sizeof(unsignedintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedlongintThingptr address is.... " << unsignedlongintThingptr << " and is " << sizeof(unsignedlongintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedlonglongintThingptr address is " << unsignedlonglongintThingptr << " and is " << sizeof(unsignedlonglongintThingptr) << " bytes " << std::endl;

// Floating-point types
    std::cout << "floatThingptr address is.............. " << floatThingptr << " and is " << sizeof(floatThingptr) << " bytes " << std::endl;
    std::cout << "doubleThingptr address is............. " << doubleThingptr << " and is " << sizeof(doubleThingptr) << " bytes " << std::endl;
    std::cout << "longdoubleThingptr address is......... " << longdoubleThingptr << " and is " << sizeof(longdoubleThingptr) << " bytes " << std::endl;

// Boolean type
    std::cout << "boolThingptr address is............... " << boolThingptr << " and is " << sizeof(boolThingptr) << " bytes " << std::endl;

// string type
    std::cout << "stringThingptr address is............. " << stringThingptr << " and is " << sizeof(stringThingptr) << " bytes " << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// expose values pointed to ->
void ValuesofPointers()
{
   std::cout << "Values of Pointers " << std::endl;
// Character Types
    std::cout << "charThingptr value is............... " << * charThingptr << " and is " << sizeof(charThingptr) << " bytes " << std::endl;           // * means refer to the value pointed to
//  std::cout << "char16tThingptr value is............ " << * char16tThingptr << " and is " << sizeof(char16tThingptr) << " bytes " << std::endl;
//  std::cout << "char32tThingptr value is............ " << * char32tThingptr << " and is " << sizeof(char32tThingptr) << " bytes " << std::endl;
//  std::cout << "wchartThingptr value is............. " << * wchartThingptr << " and is " << sizeof(wchartThingptr) << " bytes " << std::endl;
    std::cout << "unsignedcharThingptr value is....... " << * unsignedcharThingptr << " and is " << sizeof(unsignedcharThingptr) << " bytes " << std::endl;
    std::cout << "signedcharThingptr value is......... " << * signedcharThingptr << " and is " << sizeof(signedcharThingptr) << " bytes " << std::endl;


// Integer Types (signed)
    std::cout << "shortintThingptr value is........... " << * shortintThingptr << " and is " << sizeof(shortintThingptr) << " bytes " << std::endl;
    std::cout << "intThingptr value is................ " << * intThingptr << " and is " << sizeof(intThingptr) << " bytes " << std::endl;
    std::cout << "longintThingptr value is............ " << * longintThingptr << " and is " << sizeof(longintThingptr) << " bytes " << std::endl;
    std::cout << "longlongintThingptr value is........ " << * longlongintThingptr << " and is " << sizeof(longlongintThingptr) << " bytes " << std::endl;

// Integer Types (unsigned)
    std::cout << "unsignedshortintThingptr value is... " << * unsignedshortintThingptr << " and is " << sizeof(unsignedshortintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedintThingptr value is........ " << * unsignedintThingptr << " and is " << sizeof(unsignedintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedlongintThingptr value is.... " << * unsignedlongintThingptr << " and is " << sizeof(unsignedlongintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedlonglongintThingptr value is " << * unsignedlonglongintThingptr << " and is " << sizeof(unsignedlonglongintThingptr) << " bytes " << std::endl;

// Floating-point types
    std::cout << "floatThingptr value is.............. " << * floatThingptr << " and is " << sizeof(floatThingptr) << " bytes " << std::endl;
    std::cout << "doubleThingptr value is............. " << * doubleThingptr << " and is " << sizeof(doubleThingptr) << " bytes " << std::endl;
    std::cout << "longdoubleThingptr value is......... " << * longdoubleThingptr << " and is " << sizeof(longdoubleThingptr) << " bytes " << std::endl;

// Boolean type
    std::cout << "boolThingptr value is............... " << * boolThingptr << " and is " << sizeof(boolThingptr) << " bytes " << std::endl;

// string type
    std::cout << "stringThingptr value is............. " << * stringThingptr << " and is " << sizeof(stringThingptr) << " bytes " << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// expose integer values of pointers ->
void IntegerValuesofPointers()
{

    std::cout << "Integer Values of Pointers " << std::endl;
// Character Types
    std::cout << "charThingptr is............... " << (unsigned long) charThingptr << std::endl;           // this (unsigned long) is a 'cast' - to convert one type to another
//  std::cout << "char16tThingptr is............ " << (unsigned long) char16tThingptr << std::endl;
//  std::cout << "char32tThingptr is............ " << (unsigned long) char32tThingptr << std::endl;
//  std::cout << "wchartThingptr is............. " << (unsigned long) wchartThingptr << std::endl;
    std::cout << "unsignedcharThingptr is....... " << (unsigned long) unsignedcharThingptr << std::endl;
    std::cout << "signedcharThingptr is......... " << (unsigned long) signedcharThingptr << std::endl;

// Integer Types (signed)
    std::cout << "shortintThingptr is........... " << (unsigned long) shortintThingptr << std::endl;
    std::cout << "intThingptr is................ " << (unsigned long) intThingptr << std::endl;
    std::cout << "longintThingptr is............ " << (unsigned long) longintThingptr << std::endl;
    std::cout << "longlongintThingptr is........ " << (unsigned long) longlongintThingptr  << std::endl;

// Integer Types (unsigned)
    std::cout << "unsignedshortintThingptr is... " << (unsigned long) unsignedshortintThingptr << std::endl;
    std::cout << "unsignedintThingptr is........ " << (unsigned long) unsignedintThingptr << std::endl;
    std::cout << "unsignedlongintThingptr is.... " << (unsigned long) unsignedlongintThingptr << std::endl;
    std::cout << "unsignedlonglongintThingptr is " << (unsigned long) unsignedlonglongintThingptr << std::endl;

// Floating-point types
    std::cout << "floatThingptr is.............. " << (unsigned long) floatThingptr << std::endl;
    std::cout << "doubleThingptr is............. " << (unsigned long) doubleThingptr << std::endl;
    std::cout << "longdoubleThingptr is......... " << (unsigned long) longdoubleThingptr << std::endl;

// Boolean type
    std::cout << "boolThingptr is............... " << (unsigned long) boolThingptr << std::endl;

// string type
    std::cout << "stringThingptr is............. " << (unsigned long) stringThingptr << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// provide initial values to arrays
void InitializeArrays()
{

    std::cout << "Initialize Arrays " << std::endl;

    for (x = 0; x < 5; x++)
    {
        intArrayThingx[x] = 0;         // one assignment statement for each index - 5
    }
// aviod this
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            intArrayThingxy[x][y] = 0; // one assignment statement for each index - 25
        }
    }
// avoid this
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            for (z = 0; z < 5; z++)
            {
                  intArrayThingxyz[x][y][z] = 0; // one assignment statement for each index - 125
            }
        }
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// expose values within arrays
void ValuesofArrays()
{
    std::cout << "Values of Arrays " << std::endl;

    for (x = 0; x < 5; x++)
    {
        std::cout << "intArrayThingx at index X " << x << " value is " << intArrayThingx[x] << std::endl;
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            std::cout << "intArrayThingxy at index X " << x << " index Y " << y << " value " << intArrayThingxy[x][y] << std::endl;
        }
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            for (z = 0; z < 5; z++)
            {
                std::cout << "intArrayThingxyz at index X " << x << " index Y " << y << " index Z " << z << " value " << intArrayThingxyz[x][y][z] << std::endl;
            }
        }
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// provide values to structures - bad way
void InitializeStructuresX()
{
    std::cout << "Initialize Structures - bad " << std::endl;
    Timer time;
    start_s = clock();

    for (x = 0; x < 500; x++)
    {
        x_array[x].xtime = 0;
        x_array[x].xframe = '0';
    }

    for (x = 0; x < 500; x++)
    {
        yevents_array[x].id = x;
        for (y = 1; y < 500; y++)
        {
            yevents_array[x].xy_array[y].xtime = 0;
            yevents_array[x].xy_array[y].xframe = '0';
        }
    }

    for (x = 0; x < 500; x++)
    {
        zevents_array[x].post = x;
        for (y = 0; y < 500; y++)
        {
            zevents_array[x].xyz_array[y].id = y;
            for (z = 0; z < 500; z++)
            {
                zevents_array[x].xyz_array[y].xy_array[z].xtime = 0;
                zevents_array[x].xyz_array[y].xy_array[z].xframe = 'A';
            }
        }
    }

    stop_s = clock();
    std::cout << "elapsed time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// provide values to structures - good way
void InitializeStructures()
{
    std::cout << "Initialize Structures - good " << std::endl;
    start_s = clock();

// array of structures
// here is where the fireworks really begin
// assign initial values to first array index - use your imagination - there might be dozens of things to keep track of
    x_array[0].xtime = 0;
    x_array[0].xframe = '0';
//  magic
// we are now assigning the other values (1 thru 4) to the first one
    for (x = 1; x < 500; x++)
    {
        x_array[x] = x_array[0];
    }

// array of array of structures
//  as is the routine we start from the inside and move out
//  starting with the first entry
    for (x = 0; x < 500; x++)                          // the unavoidable 5 assignments (10  actually)
    {
        yevents_array[0].xy_array[x].xtime = 0;
        yevents_array[0].xy_array[x].xframe = '0';
    }

    yevents_array[0].id = 0; //initialize
//  so we have initialized a 5 x 5 (25)) element array with 9 assignments (5 + 4)
    for (y = 1; y < 500; y++) //initialize all the entries to the first
    {
        yevents_array[y] = yevents_array[0];   // don't be tempted to flip these two lines around - the result will mortify you
        yevents_array[y].id = y;               // resist the urge to perform the assignments in the order of the struct
    }

//  array of array of array of structures
//  let's initialize
//  so we move from the inside towards the outside - always starting at the first entry
    for (x = 0; x < 500; x++)
    {
        zevents_array[0].xyz_array[0].xy_array[x].xtime = 0;
        zevents_array[0].xyz_array[0].xy_array[x].xframe = 'A';
    }
//  next we move outwards to the next level
    zevents_array[0].xyz_array[0].id = 0; //initialize

    for (y = 1; y < 500; y++) //initialize the rest to the first
    {
        zevents_array[0].xyz_array[y] = zevents_array[0].xyz_array[0];
        zevents_array[0].xyz_array[y].id = y;
    }
//  keep moving outwards
    zevents_array[0].post = 0;

    for (z = 1; z < 500; z++)  // initialize the rest to the first
    {
        zevents_array[z] = zevents_array[0];
        zevents_array[z].post = z;
    }
//  so we have initialized a 5 x 5 x 5 (125)) element array with 14 assignments (5 + 4 + 4)
//  had the array been 500x500x500 that would be 125,000,000 versus 500 + 499 + 499 = 1,498 - that is a massive performance difference
    stop_s = clock();
    std::cout << "elapsed time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// expose values within structures
void ValuesofStructues()
{
    std::cout << "Values of Structures " << std::endl;

    for (x = 0; x < 5; x++)
    {
        std::cout << " t " << x_array[x].xtime << " f " << x_array[x].xframe << std::endl;
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");

    for (x = 0; x < 5; x++)
    {
        std::cout << " id " << yevents_array[x].id ;
        for (y = 0; y < 5; y++)
        {
            std::cout << " t " << yevents_array[x].xy_array[y].xtime << " f " << yevents_array[x].xy_array[y].xframe;
        }
        std::cout << std::endl;
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");

    for (z = 0; z < 5; z++)
    {
        std::cout << " post " << zevents_array[z].post << std::endl;
        for (y = 0; y < 5; y++)
        {
            std::cout << " id " << zevents_array[z].xyz_array[y].id;
            for (x = 0; x < 5; x++)
            {
                std::cout << " t " << zevents_array[z].xyz_array[y].xy_array[x].xtime
                          << " f " << zevents_array[z].xyz_array[y].xy_array[x].xframe;
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// Delete HEAP
void DeleteHeap()
{
    std::cout << "Delete Heap " << std::endl;

    delete charThingH;
    delete timerH;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
```


**References and Pointers**

file **refptr.cpp**

```
#include <iostream>   // standard console input/output

// global variables
int tack;              // 'tack' is a variable of integer type

int * ptr = nullptr;   // 'ptr' a pointer "*" of integer type; it is a number, the
// address to the beginning of a location in memory

int & tick = tack;     // 'tack' a reference "&" of integer type; it is 'another
// name for' a variable - it's a alias

// at this point you have a choice
// either define the function/methods here before 'main' ( so the compiler see's
// them ) or
// declare the function/methods here and define them after 'main' in the actual
// physical code text
void Incremental(int);     // using a variable, modifying the value locally – not
// globally
int  Increment(int);       // using a variable, modifying the value and returning 
// the value
// although C/C++ will allow you to have the same name for function/method with 
// different parameters, it can only handle so much
// an int, an int pointer or an int reference - are all still int
// void Incremental(int) - allowed
// void Incremental(char) - allowed
void Incrementptr(int *);  // using a pointer, modifying the value pointed to
void Incrementref(int &);  // using a reference, modifying the value referred to

int main()
{
    tack = 5;
    ptr = & tack; // assign memory address of "&" tack to the pointer
// tack = 5
    Incremental(tack); // using a variable, modifying the value locally – not
// globally
// tack is still 5
    tack = Increment(tack);  // passing a variable, modifying the value and
// returning the value, then assigning it back ( dumb )
// tack = 6
    Incrementptr(ptr);   // passing a pointer, modifying the value pointed to ( ptr
// or &tack )
// tack = 7
    tack = Increment(tack);     // passing a variable, modifying the value and
// returning the value, then assigning it back ( dumb )
// tack = 8
    Incrementref(tick);    // passing a reference, modifying the value referred to
// tack = 9
    tack = Increment(tack);       // passing a variable, modifying the value and returning the value, then assigning it back ( dumb )
// tack = 10
    std::cout << "                   the value of tack " << tack << std::endl;  
// identified by variable name
    std::cout << "                 the address of tack " << & tack << std::endl;
    std::cout << "           the value located at tack " << * ptr << std::endl;  
// identified by a pointer to the variable name
    std::cout << "  the address of the pointer to tack " << ptr << std::endl;
    std::cout << "         the value referring to tack " << tick << std::endl; 
// identified by a reference to the variable name
    std::cout << "the address of the reference to tack " << & tick << std::endl;

    return 0;

}
// this is what you would like to do - since 'tack' is global, you'd think that
// doing something to 'tack' would work
// but it wont...because of the way the compiler works, compared to Cobol for
// example
// in Cobol, everything is global, and, the compile looks at everything and takes 
// notes along the way
// if at the end something is not defined, only then does it issue an error
// hence, 'paragraphs', the name for functions/methods in Cobol don't need
// parameters or return values because everything is global
// the C/C++ compiler is top down, and the manner of defining functions/methods - 
// forces you to declare or define things in advance
// this results in the creation of a new variable of local scope
// void Incremental(int tack)    // using a variable, modifying the value locally -
// not globally
{             // here 'tack' is actually a new integer with the same name – allowed
//  since it is 'scoped' locally to the function/method
// you can code whatever you'd like in this block - but - it's effects are local to
//  this function/method

    std::cout << tack << std::endl;    //tack is local

    tack++;

    ++tack;

}
// because or the rules for defining a function/method - this is am option you
// have, return a value and assigning it back
int Increment(int tack)    // accepting an integer and returning an integer
{

// because this function/method returns a value - it just 'looks' like it's
// updating a global variable - but it is not

    std::cout << tack << std::endl;    // tack is local

    tack++;

    return tack;
}
// So...here is option two; use a pointer
void Incrementptr(int * ptr)  // accepting a pointer and modifying the value
// pointed to - the global pointer 'ptr' is assigned to the local pointer 'ptr'
{
//  here is a new pointer - local to the function/method - no choice here
    std::cout << "value pointed to " << * ptr << std::endl;   // de-reference
// pointer to 'tack' is the value of 'tack'

    int local = * ptr;     // silly assignment - but- this demonstrates you can do
// stuff to 'local' starting from the current value of 'tack'

    std::cout << "local value from ptr " << local << std::endl;   // de-reference
// pointer to tack

    // ptr++;  this would increase the value of the pointer!!! - boom
    (* ptr) ++;   // de-reference ( refer to the value pointed to) then increment
// the value

}
// So...this leaves you with option three; use a reference
void Incrementref(int & tick)  // accepting a reference and modifying the value
// referred to
{
//      here 'tick'  is not new and not local - because 'tick' is a global

// reference this tells the compiler what you want
//      you want to do stuff to 'tack'. period. but because of the compiler, you need to use a reference

    std::cout << tick << std::endl;       // the word 'tick' "means" 'tack'

    tick++;

}
```
## **Installation**

To install Project Title, follow these steps:

## **Usage**

To use Project Title, follow these steps:

## **Contributing**

If you'd like to contribute to Project Title, here are some guidelines:

## **License**

Project Title is released under the MIT License

## **Authors and Acknowledgment**

Project Title was created by **[Pierre Fiore](https://github.com/package57)**.

 #header#

##header##

###header###

_italics_





