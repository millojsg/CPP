# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/16_Inline_Function.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/16_Inline_Function.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/16_Inline_Function.dir/flags.make

CMakeFiles/16_Inline_Function.dir/main.cpp.o: CMakeFiles/16_Inline_Function.dir/flags.make
CMakeFiles/16_Inline_Function.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/16_Inline_Function.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/16_Inline_Function.dir/main.cpp.o -c "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function/main.cpp"

CMakeFiles/16_Inline_Function.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/16_Inline_Function.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function/main.cpp" > CMakeFiles/16_Inline_Function.dir/main.cpp.i

CMakeFiles/16_Inline_Function.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/16_Inline_Function.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function/main.cpp" -o CMakeFiles/16_Inline_Function.dir/main.cpp.s

CMakeFiles/16_Inline_Function.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/16_Inline_Function.dir/main.cpp.o.requires

CMakeFiles/16_Inline_Function.dir/main.cpp.o.provides: CMakeFiles/16_Inline_Function.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/16_Inline_Function.dir/build.make CMakeFiles/16_Inline_Function.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/16_Inline_Function.dir/main.cpp.o.provides

CMakeFiles/16_Inline_Function.dir/main.cpp.o.provides.build: CMakeFiles/16_Inline_Function.dir/main.cpp.o


# Object files for target 16_Inline_Function
16_Inline_Function_OBJECTS = \
"CMakeFiles/16_Inline_Function.dir/main.cpp.o"

# External object files for target 16_Inline_Function
16_Inline_Function_EXTERNAL_OBJECTS =

16_Inline_Function: CMakeFiles/16_Inline_Function.dir/main.cpp.o
16_Inline_Function: CMakeFiles/16_Inline_Function.dir/build.make
16_Inline_Function: CMakeFiles/16_Inline_Function.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 16_Inline_Function"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/16_Inline_Function.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/16_Inline_Function.dir/build: 16_Inline_Function

.PHONY : CMakeFiles/16_Inline_Function.dir/build

CMakeFiles/16_Inline_Function.dir/requires: CMakeFiles/16_Inline_Function.dir/main.cpp.o.requires

.PHONY : CMakeFiles/16_Inline_Function.dir/requires

CMakeFiles/16_Inline_Function.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/16_Inline_Function.dir/cmake_clean.cmake
.PHONY : CMakeFiles/16_Inline_Function.dir/clean

CMakeFiles/16_Inline_Function.dir/depend:
	cd "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function" "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function" "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function/cmake-build-debug" "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function/cmake-build-debug" "/Users/qasim/Desktop/cpp11/1. basic/16.Inline Function/cmake-build-debug/CMakeFiles/16_Inline_Function.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/16_Inline_Function.dir/depend

