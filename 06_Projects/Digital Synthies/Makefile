# Компілятор і прапорці
CC       = gcc
CFLAGS   = -Wall -Wextra -std=c99 -Iinclude
LIBS     = -lraylib

# Папки
SRC_DIR  = src
OBJ_DIR  = obj
TARGET   = my_game

# Автоматичний пошук усіх .c файлів у папці src/
SRCS     = $(wildcard $(SRC_DIR)/*.c)
# Генеруємо шляхи для об'єктних .o файлів у папці obj/
OBJS     = $(patsnetwork:%,$(OBJ_DIR)/%,$(notdir $(SRCS:.c=.o)))
OBJS     = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Головна ціль
all: create_dirs $(TARGET)

# Створення папки obj/, якщо її немає
create_dirs:
	@mkdir -p $(OBJ_DIR)

# Лінкування підсумкового виконуваного файлу
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LIBS)

# Компіляція кожної сировини .c у об'єктний .o файл
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Очищення зібраних файлів
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

# Запуск програми
run: all
	./$(TARGET)

.PHONY: all clean run create_dirs
