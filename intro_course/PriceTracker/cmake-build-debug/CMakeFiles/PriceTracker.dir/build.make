# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Development\CLionProjects\Introduction\PriceTracker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Development\CLionProjects\Introduction\PriceTracker\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PriceTracker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PriceTracker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PriceTracker.dir/flags.make

CMakeFiles/PriceTracker.dir/main.cpp.obj: CMakeFiles/PriceTracker.dir/flags.make
CMakeFiles/PriceTracker.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Development\CLionProjects\Introduction\PriceTracker\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PriceTracker.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PriceTracker.dir\main.cpp.obj -c D:\Development\CLionProjects\Introduction\PriceTracker\main.cpp

CMakeFiles/PriceTracker.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PriceTracker.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Development\CLionProjects\Introduction\PriceTracker\main.cpp > CMakeFiles\PriceTracker.dir\main.cpp.i

CMakeFiles/PriceTracker.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PriceTracker.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Development\CLionProjects\Introduction\PriceTracker\main.cpp -o CMakeFiles\PriceTracker.dir\main.cpp.s

# Object files for target PriceTracker
PriceTracker_OBJECTS = \
"CMakeFiles/PriceTracker.dir/main.cpp.obj"

# External object files for target PriceTracker
PriceTracker_EXTERNAL_OBJECTS =

PriceTracker.exe: CMakeFiles/PriceTracker.dir/main.cpp.obj
PriceTracker.exe: CMakeFiles/PriceTracker.dir/build.make
PriceTracker.exe: CMakeFiles/PriceTracker.dir/linklibs.rsp
PriceTracker.exe: CMakeFiles/PriceTracker.dir/objects1.rsp
PriceTracker.exe: CMakeFiles/PriceTracker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Development\CLionProjects\Introduction\PriceTracker\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PriceTracker.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PriceTracker.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PriceTracker.dir/build: PriceTracker.exe

.PHONY : CMakeFiles/PriceTracker.dir/build

CMakeFiles/PriceTracker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PriceTracker.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PriceTracker.dir/clean

CMakeFiles/PriceTracker.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Development\CLionProjects\Introduction\PriceTracker D:\Development\CLionProjects\Introduction\PriceTracker D:\Development\CLionProjects\Introduction\PriceTracker\cmake-build-debug D:\Development\CLionProjects\Introduction\PriceTracker\cmake-build-debug D:\Development\CLionProjects\Introduction\PriceTracker\cmake-build-debug\CMakeFiles\PriceTracker.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PriceTracker.dir/depend

