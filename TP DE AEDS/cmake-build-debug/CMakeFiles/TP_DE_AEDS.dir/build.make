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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/TP_DE_AEDS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TP_DE_AEDS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP_DE_AEDS.dir/flags.make

CMakeFiles/TP_DE_AEDS.dir/sources/main.c.o: CMakeFiles/TP_DE_AEDS.dir/flags.make
CMakeFiles/TP_DE_AEDS.dir/sources/main.c.o: ../sources/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TP_DE_AEDS.dir/sources/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TP_DE_AEDS.dir/sources/main.c.o   -c "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS/sources/main.c"

CMakeFiles/TP_DE_AEDS.dir/sources/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TP_DE_AEDS.dir/sources/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS/sources/main.c" > CMakeFiles/TP_DE_AEDS.dir/sources/main.c.i

CMakeFiles/TP_DE_AEDS.dir/sources/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TP_DE_AEDS.dir/sources/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS/sources/main.c" -o CMakeFiles/TP_DE_AEDS.dir/sources/main.c.s

# Object files for target TP_DE_AEDS
TP_DE_AEDS_OBJECTS = \
"CMakeFiles/TP_DE_AEDS.dir/sources/main.c.o"

# External object files for target TP_DE_AEDS
TP_DE_AEDS_EXTERNAL_OBJECTS =

TP_DE_AEDS: CMakeFiles/TP_DE_AEDS.dir/sources/main.c.o
TP_DE_AEDS: CMakeFiles/TP_DE_AEDS.dir/build.make
TP_DE_AEDS: CMakeFiles/TP_DE_AEDS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TP_DE_AEDS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TP_DE_AEDS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP_DE_AEDS.dir/build: TP_DE_AEDS

.PHONY : CMakeFiles/TP_DE_AEDS.dir/build

CMakeFiles/TP_DE_AEDS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TP_DE_AEDS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TP_DE_AEDS.dir/clean

CMakeFiles/TP_DE_AEDS.dir/depend:
	cd "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS" "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS" "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS/cmake-build-debug" "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS/cmake-build-debug" "/run/media/tais/fdaf8709-4bc3-475c-bb76-b13eb4a2da7b/tais/repositorios/tp1-Aeds1/TP DE AEDS/cmake-build-debug/CMakeFiles/TP_DE_AEDS.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TP_DE_AEDS.dir/depend
