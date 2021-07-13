# Name of the project
PROJECT_NAME = learnDs

ifeq ($(OS),Windows_NT)
	EXECUTABLE=a.exe
else
	EXECUTABLE=a.out
endif

# Output directory
BUILD = build

# All source code files
SRC = quiz.c\
src/game.c\
src/help.c\
src/reset_score.c\
src/show_record.c

# All test source files
TEST_SRC = src/game.c\
src/help.c\
src/reset_score.c\
src/show_record.c\
test/test.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(EXECUTABLE)
# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(EXECUTABLE)

# Document files
#DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)


#Coverage
coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov

# Create new build folder if not present
$(BUILD):
	mkdir build