//QuickNotes

Another learning project; this one is quick note-taking program.  The premise is that the user would initialize the program in the command line by typing the name of the program, followed by the name of the note, followed by the body of the note, which would be saved as a text file on the user's 
desktop, or preferred folder (example: "qn grocery list; butter, milk, bread"). The program in it's current form has many limitations, because I have no idea what i'm doing. Some examples:
-Program only works if the binary is saved in the user's current working directory.
-Program can only save notes in user's current working directory unless edited and recompiled.
-Program is initialized by typing "./a.out" instead of "qn" because I don't know how to auto-
matically assign the name of the binary produced by the source code.
-User must specify file type (example ".a.out grocery.txt butter, milk, bread)
-Note names can only be one word, because the filename is set to match argv[2] rather than any array of strings seperated by a semicolon like I'd like it to be.
-I still don't know what "memory safety" is or how that works, so that's probably fucked up, too. 
-I have no idea how long a note is allowed to be.

A quick sidenote: I tried to add a 'help' feature, to be initialized by the user typing 
"a.out --help", but when testing the feature, the program saved a file called "--help" in my testing directory, and i can't delete it because every time i type "rm --help" it brings up the linux help
 menu. I can probably fix it by installing a file manager, but any tips are appreciated in case that doesn't work.

I'm honestly surprised the project has gotten this far, but just typing this writeup has made me 
realize that i've picked up a lot of fancy terminology along the way, so as a learning project, I'd
say its a success so far. I'm open to (desperate for) any feedback you may have. please direct all
constructive criticism, personal attacks, death threats, etc. to phil_columns@protonmail.com and I
will feel like a very special boy, and respond promptly. Thanks for having a look at my project.
