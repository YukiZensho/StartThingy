/*
	This code is made by Martha (@YukiZensho on github & twitter)
	I would be surprised if anyone would ever be able to get a bug on this app, but if you do hmu on twitter
	My official email address is contact@martha.link
*/
#include<stdio.h>
#include <ctime>
#include <chrono>

#include <iostream>
void trans(){
	 printf("\033[48;2;91;206;250m                 \033[0m\n");//light blue
	printf("\033[48;2;245;169;184m                 \033[0m\n");//pink
	printf("\033[48;2;255;255;255m                 \033[0m\n");//white
	printf("\033[48;2;245;169;184m                 \033[0m\n");//pink
	 printf("\033[48;2;91;206;250m                 \033[0m\n");//light blue
}

void lgbt(){
	 printf("\033[48;2;228;3;3m                 \033[0m\n");//red
	printf("\033[48;2;255;140;0m                 \033[0m\n");//orange
	printf("\033[48;2;255;237;0m                 \033[0m\n");//yellow
	printf("\033[48;2;0;128;38m                 \033[0m\n");//green
	 printf("\033[48;2;0;77;255m                 \033[0m\n");//blue
	 printf("\033[48;2;177;7;135m                 \033[0m\n");//violet
}

void girl(){
	printf("      #####      | \n");
	printf("      #   #      | \n");
	printf("      #####      | This computer is opperated by a TGirl!\n");
	printf("        #        | You got cooties now\n");
	printf("      #####      | \n");
	printf("        #        | \n");
}
int main() {
	
	
    const auto p1 = std::chrono::system_clock::now();
	int t =std::chrono::duration_cast<std::chrono::seconds>(p1.time_since_epoch()).count();
	//using epoch timestamp to get sufficient randomness
	switch(t%3){
		case 0:trans();break;
		case 1:lgbt();break;
		case 2:girl();break;
		default: printf("a");break;
	}
	
}
