INCL_DIR = ./include/vis.hpp
RAYLIB_ARCHIVE = ./raylib/lib/libraylib.a

SRC_FILES = ./src/main.cpp ./src/nmspc_tools.cpp
EXTRA_FLAGS = -lX11

all: $(INCL_DIR)
	c++ $(SRC_FILES) -Iinclude $(RAYLIB_ARCHIVE) $(EXTRA_FLAGS) -o devdbg