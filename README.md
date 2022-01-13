# StartThingy
My terminal start thingy that makes the opening of a terminal look *NICE*, tho its made by me, Yuki
# How to make it work
If you want it to work on you have to first compile it with
``` c++ code.cpp -o StartThingy ```
and move the executable resulted to a place where it wont be deleted by mistake and its not obstructive (i for example have a folder in home specifically for random executables).

Afterwards add ```/PATH/TO/EXECUTABLE/StartThingy``` to the initialization file of your specific shell

Reminder that the character ~ at the start of a path is the shell's way to represent your user's path in a small and universal way

Examples for shells (if the first command doesnt work DO NOT run it twice, it just appends the path to your exec to your shell's configuration file)
## Bash
`printf %s "/PATH/TO/EXECUTABLE/StartThingy" >> ~/.bashrc`
or just add the path to the executable in some empty space on a new line to `~/.bashrc`
## Fish
`printf %s "/PATH/TO/EXECUTABLE/StartThingy" >> ~/.config/fish/config.fish`
or just add the path to the executable in some empty space on a new line to `~/.config/fish/config.fish`

# Thingies
## Trans flag
Trans Flag
## LGBT flag
Classic LGBT flag
## Cooties
      #####      | 
      #   #      | 
      #####      | This computer is opperated by a TGirl!
        #        | You got cooties now
      #####      | 
        #        | 
