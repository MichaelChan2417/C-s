# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = "D:\STUDY\CLion\CLion 2022.3.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\STUDY\CLion\CLion 2022.3.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Chapter_9.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Chapter_9.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Chapter_9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chapter_9.dir/flags.make

CMakeFiles/Chapter_9.dir/expression_0.cpp.obj: CMakeFiles/Chapter_9.dir/flags.make
CMakeFiles/Chapter_9.dir/expression_0.cpp.obj: C:/Users/MSI_NB/Desktop/C-s/C++\ Primer/Chapter\ 9/expression_0.cpp
CMakeFiles/Chapter_9.dir/expression_0.cpp.obj: CMakeFiles/Chapter_9.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Chapter_9.dir/expression_0.cpp.obj"
	"D:\STUDY\CLion\CLion 2022.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chapter_9.dir/expression_0.cpp.obj -MF CMakeFiles\Chapter_9.dir\expression_0.cpp.obj.d -o CMakeFiles\Chapter_9.dir\expression_0.cpp.obj -c "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\expression_0.cpp"

CMakeFiles/Chapter_9.dir/expression_0.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chapter_9.dir/expression_0.cpp.i"
	"D:\STUDY\CLion\CLion 2022.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\expression_0.cpp" > CMakeFiles\Chapter_9.dir\expression_0.cpp.i

CMakeFiles/Chapter_9.dir/expression_0.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chapter_9.dir/expression_0.cpp.s"
	"D:\STUDY\CLion\CLion 2022.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\expression_0.cpp" -o CMakeFiles\Chapter_9.dir\expression_0.cpp.s

CMakeFiles/Chapter_9.dir/swap.cpp.obj: CMakeFiles/Chapter_9.dir/flags.make
CMakeFiles/Chapter_9.dir/swap.cpp.obj: C:/Users/MSI_NB/Desktop/C-s/C++\ Primer/Chapter\ 9/swap.cpp
CMakeFiles/Chapter_9.dir/swap.cpp.obj: CMakeFiles/Chapter_9.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Chapter_9.dir/swap.cpp.obj"
	"D:\STUDY\CLion\CLion 2022.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chapter_9.dir/swap.cpp.obj -MF CMakeFiles\Chapter_9.dir\swap.cpp.obj.d -o CMakeFiles\Chapter_9.dir\swap.cpp.obj -c "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\swap.cpp"

CMakeFiles/Chapter_9.dir/swap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chapter_9.dir/swap.cpp.i"
	"D:\STUDY\CLion\CLion 2022.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\swap.cpp" > CMakeFiles\Chapter_9.dir\swap.cpp.i

CMakeFiles/Chapter_9.dir/swap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chapter_9.dir/swap.cpp.s"
	"D:\STUDY\CLion\CLion 2022.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\swap.cpp" -o CMakeFiles\Chapter_9.dir\swap.cpp.s

# Object files for target Chapter_9
Chapter_9_OBJECTS = \
"CMakeFiles/Chapter_9.dir/expression_0.cpp.obj" \
"CMakeFiles/Chapter_9.dir/swap.cpp.obj"

# External object files for target Chapter_9
Chapter_9_EXTERNAL_OBJECTS =

Chapter_9.exe: CMakeFiles/Chapter_9.dir/expression_0.cpp.obj
Chapter_9.exe: CMakeFiles/Chapter_9.dir/swap.cpp.obj
Chapter_9.exe: CMakeFiles/Chapter_9.dir/build.make
Chapter_9.exe: CMakeFiles/Chapter_9.dir/linklibs.rsp
Chapter_9.exe: CMakeFiles/Chapter_9.dir/objects1.rsp
Chapter_9.exe: CMakeFiles/Chapter_9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Chapter_9.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Chapter_9.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chapter_9.dir/build: Chapter_9.exe
.PHONY : CMakeFiles/Chapter_9.dir/build

CMakeFiles/Chapter_9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Chapter_9.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Chapter_9.dir/clean

CMakeFiles/Chapter_9.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9" "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9" "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\cmake-build-debug" "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\cmake-build-debug" "C:\Users\MSI_NB\Desktop\C-s\C++ Primer\Chapter 9\cmake-build-debug\CMakeFiles\Chapter_9.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Chapter_9.dir/depend

