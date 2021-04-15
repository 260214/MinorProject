# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME =project.exe

SRC = calculator.c src/calculatorDefinition.c -o all.exe


INC= inc

all: $(SRC)
	gcc -I $(INC) $(SRC) -o project.exe

run :project.exe
	project.exe	


clean:
	del/q *.exe


# gcc main.c calculator.c 
