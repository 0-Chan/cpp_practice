# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cody/Downloads/cpp_practice/geometry_class

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cody/Downloads/cpp_practice/build

# Include any dependencies generated for this target.
include CMakeFiles/geometry_class.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/geometry_class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/geometry_class.dir/flags.make

CMakeFiles/geometry_class.dir/main.cpp.o: CMakeFiles/geometry_class.dir/flags.make
CMakeFiles/geometry_class.dir/main.cpp.o: /home/cody/Downloads/cpp_practice/geometry_class/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cody/Downloads/cpp_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/geometry_class.dir/main.cpp.o"
	/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geometry_class.dir/main.cpp.o -c /home/cody/Downloads/cpp_practice/geometry_class/main.cpp

CMakeFiles/geometry_class.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geometry_class.dir/main.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cody/Downloads/cpp_practice/geometry_class/main.cpp > CMakeFiles/geometry_class.dir/main.cpp.i

CMakeFiles/geometry_class.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geometry_class.dir/main.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cody/Downloads/cpp_practice/geometry_class/main.cpp -o CMakeFiles/geometry_class.dir/main.cpp.s

# Object files for target geometry_class
geometry_class_OBJECTS = \
"CMakeFiles/geometry_class.dir/main.cpp.o"

# External object files for target geometry_class
geometry_class_EXTERNAL_OBJECTS =

geometry_class: CMakeFiles/geometry_class.dir/main.cpp.o
geometry_class: CMakeFiles/geometry_class.dir/build.make
geometry_class: CMakeFiles/geometry_class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cody/Downloads/cpp_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable geometry_class"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/geometry_class.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/geometry_class.dir/build: geometry_class

.PHONY : CMakeFiles/geometry_class.dir/build

CMakeFiles/geometry_class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/geometry_class.dir/cmake_clean.cmake
.PHONY : CMakeFiles/geometry_class.dir/clean

CMakeFiles/geometry_class.dir/depend:
	cd /home/cody/Downloads/cpp_practice/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cody/Downloads/cpp_practice/geometry_class /home/cody/Downloads/cpp_practice/geometry_class /home/cody/Downloads/cpp_practice/build /home/cody/Downloads/cpp_practice/build /home/cody/Downloads/cpp_practice/build/CMakeFiles/geometry_class.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/geometry_class.dir/depend
