NAME     := forms
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17 -Iinclude

SRC_DIR  := src
OBJ_DIR  := obj

SRC_FILES := \
	$(SRC_DIR)/main.cpp \
	$(SRC_DIR)/Bureaucrat.cpp \
	$(SRC_DIR)/AForm.cpp \
	$(SRC_DIR)/ShrubberyCreationForm.cpp \
	$(SRC_DIR)/RobotomyRequestForm.cpp \
	$(SRC_DIR)/PresidentialPardonForm.cpp \
	$(SRC_DIR)/Intern.cpp

OBJ_FILES := \
	$(OBJ_DIR)/main.o \
	$(OBJ_DIR)/Bureaucrat.o \
	$(OBJ_DIR)/AForm.o \
	$(OBJ_DIR)/ShrubberyCreationForm.o \
	$(OBJ_DIR)/RobotomyRequestForm.o \
	$(OBJ_DIR)/PresidentialPardonForm.o \
	$(OBJ_DIR)/Intern.o

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ_FILES)

# Compilation rule
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create obj directory if not exists
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
