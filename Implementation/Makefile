#Target_name : Dependencies
#<TAB>Command

# All include folders with header files
INC	= -Iinc\
-Iunity\

target : quiz.c game.c help.c reset_score.c show_record.c fun.h
	gcc  quiz.c game.c help.c reset_score.c show_record.c -o all.out

# Call `make run` to run the application
run : target 
	./all.out

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS = -lssl -lcrypto

# Document the code using Doxygen
#doc:
#	make -C ./documentation
