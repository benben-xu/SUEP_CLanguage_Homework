# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\share\cProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\share\cProject\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c3-2-5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/c3-2-5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/c3-2-5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c3-2-5.dir/flags.make

CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.obj: CMakeFiles/c3-2-5.dir/flags.make
CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.obj: D:/share/cProject/School_Test/c3/c3-2-5.c
CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.obj: CMakeFiles/c3-2-5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\share\cProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.obj -MF CMakeFiles\c3-2-5.dir\School_Test\c3\c3-2-5.c.obj.d -o CMakeFiles\c3-2-5.dir\School_Test\c3\c3-2-5.c.obj -c D:\share\cProject\School_Test\c3\c3-2-5.c

CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\share\cProject\School_Test\c3\c3-2-5.c > CMakeFiles\c3-2-5.dir\School_Test\c3\c3-2-5.c.i

CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\share\cProject\School_Test\c3\c3-2-5.c -o CMakeFiles\c3-2-5.dir\School_Test\c3\c3-2-5.c.s

# Object files for target c3-2-5
c3__2__5_OBJECTS = \
"CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.obj"

# External object files for target c3-2-5
c3__2__5_EXTERNAL_OBJECTS =

c3-2-5.exe: CMakeFiles/c3-2-5.dir/School_Test/c3/c3-2-5.c.obj
c3-2-5.exe: CMakeFiles/c3-2-5.dir/build.make
c3-2-5.exe: CMakeFiles/c3-2-5.dir/linkLibs.rsp
c3-2-5.exe: CMakeFiles/c3-2-5.dir/objects1.rsp
c3-2-5.exe: CMakeFiles/c3-2-5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\share\cProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c3-2-5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\c3-2-5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c3-2-5.dir/build: c3-2-5.exe
.PHONY : CMakeFiles/c3-2-5.dir/build

CMakeFiles/c3-2-5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\c3-2-5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/c3-2-5.dir/clean

CMakeFiles/c3-2-5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\share\cProject D:\share\cProject D:\share\cProject\cmake-build-debug D:\share\cProject\cmake-build-debug D:\share\cProject\cmake-build-debug\CMakeFiles\c3-2-5.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/c3-2-5.dir/depend

