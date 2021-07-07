#Target_name : Dependencies
#<TAB>Command


PROJECT_NAME = Implementation
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = quiz.c\
src\game.c\
src\help.c\
src\reset_score.c\
src\show_record.c\

# All include folders with header files
INC	= inc

$(PROJECT_NAME):$(SRC)
	gcc -I $(INC) $(SRC)  -o quiz.exe 


# Call `make run` to run the application

run : $(PROJECT_NAME)
	$(PROJECT_NAME)

#to delete all the exe files	
clean :
	rm -rf *exe

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS = -lssl -lcrypto

# Document the code using Doxygen
#doc:
#	make -C ./documentation
