# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sistema_aeroporto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sistema_aeroporto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sistema_aeroporto.dir/flags.make

CMakeFiles/sistema_aeroporto.dir/main.c.o: CMakeFiles/sistema_aeroporto.dir/flags.make
CMakeFiles/sistema_aeroporto.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sistema_aeroporto.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sistema_aeroporto.dir/main.c.o   -c /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto/main.c

CMakeFiles/sistema_aeroporto.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sistema_aeroporto.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto/main.c > CMakeFiles/sistema_aeroporto.dir/main.c.i

CMakeFiles/sistema_aeroporto.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sistema_aeroporto.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto/main.c -o CMakeFiles/sistema_aeroporto.dir/main.c.s

# Object files for target sistema_aeroporto
sistema_aeroporto_OBJECTS = \
"CMakeFiles/sistema_aeroporto.dir/main.c.o"

# External object files for target sistema_aeroporto
sistema_aeroporto_EXTERNAL_OBJECTS =

sistema_aeroporto: CMakeFiles/sistema_aeroporto.dir/main.c.o
sistema_aeroporto: CMakeFiles/sistema_aeroporto.dir/build.make
sistema_aeroporto: CMakeFiles/sistema_aeroporto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sistema_aeroporto"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sistema_aeroporto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sistema_aeroporto.dir/build: sistema_aeroporto

.PHONY : CMakeFiles/sistema_aeroporto.dir/build

CMakeFiles/sistema_aeroporto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sistema_aeroporto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sistema_aeroporto.dir/clean

CMakeFiles/sistema_aeroporto.dir/depend:
	cd /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto/cmake-build-debug /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto/cmake-build-debug /media/tais/29aed11e-f1b2-4f7c-9f3a-0cf5068318f0/home/tais/repositorios/tp1-Aeds1/sistema_aeroporto/cmake-build-debug/CMakeFiles/sistema_aeroporto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sistema_aeroporto.dir/depend

