# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/benben/AppData/Local/JetBrains/CLion2024.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/benben/AppData/Local/JetBrains/CLion2024.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/share/cProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/share/cProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c4-3-1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/c4-3-1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/c4-3-1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c4-3-1.dir/flags.make

CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.o: CMakeFiles/c4-3-1.dir/flags.make
CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.o: /cygdrive/d/share/cProject/School_Test/c4/c4-3-1.c
CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.o: CMakeFiles/c4-3-1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/cygdrive/d/share/cProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.o -MF CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.o.d -o CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.o -c /cygdrive/d/share/cProject/School_Test/c4/c4-3-1.c

CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/d/share/cProject/School_Test/c4/c4-3-1.c > CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.i

CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/d/share/cProject/School_Test/c4/c4-3-1.c -o CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.s

# Object files for target c4-3-1
c4__3__1_OBJECTS = \
"CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.o"

# External object files for target c4-3-1
c4__3__1_EXTERNAL_OBJECTS =

c4-3-1.exe: CMakeFiles/c4-3-1.dir/School_Test/c4/c4-3-1.c.o
c4-3-1.exe: CMakeFiles/c4-3-1.dir/build.make
c4-3-1.exe: CMakeFiles/c4-3-1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/cygdrive/d/share/cProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c4-3-1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c4-3-1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c4-3-1.dir/build: c4-3-1.exe
.PHONY : CMakeFiles/c4-3-1.dir/build

CMakeFiles/c4-3-1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c4-3-1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c4-3-1.dir/clean

CMakeFiles/c4-3-1.dir/depend:
	cd /cygdrive/d/share/cProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/share/cProject /cygdrive/d/share/cProject /cygdrive/d/share/cProject/cmake-build-debug /cygdrive/d/share/cProject/cmake-build-debug /cygdrive/d/share/cProject/cmake-build-debug/CMakeFiles/c4-3-1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/c4-3-1.dir/depend

