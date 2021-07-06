#Target_name : Dependencies
#<TAB>Command


SRC = quiz.c\
src/help.c\
src/game.c\
src/reset_score.c\
src/show_record.c

INC = inc

target: $(SRC) $(INC)
	gcc $(SRC) -I$(INC) -o all.out

run : target
	./all.out