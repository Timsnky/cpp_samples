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
CMAKE_SOURCE_DIR = D:\Development\CLionProjects\Introduction\RegionShippingCharge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Development\CLionProjects\Introduction\RegionShippingCharge\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RegionShippingCharge.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RegionShippingCharge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RegionShippingCharge.dir/flags.make

CMakeFiles/RegionShippingCharge.dir/main.cpp.obj: CMakeFiles/RegionShippingCharge.dir/flags.make
CMakeFiles/RegionShippingCharge.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Development\CLionProjects\Introduction\RegionShippingCharge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RegionShippingCharge.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RegionShippingCharge.dir\main.cpp.obj -c D:\Development\CLionProjects\Introduction\RegionShippingCharge\main.cpp

CMakeFiles/RegionShippingCharge.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RegionShippingCharge.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Development\CLionProjects\Introduction\RegionShippingCharge\main.cpp > CMakeFiles\RegionShippingCharge.dir\main.cpp.i

CMakeFiles/RegionShippingCharge.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RegionShippingCharge.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Development\CLionProjects\Introduction\RegionShippingCharge\main.cpp -o CMakeFiles\RegionShippingCharge.dir\main.cpp.s

# Object files for target RegionShippingCharge
RegionShippingCharge_OBJECTS = \
"CMakeFiles/RegionShippingCharge.dir/main.cpp.obj"

# External object files for target RegionShippingCharge
RegionShippingCharge_EXTERNAL_OBJECTS =

RegionShippingCharge.exe: CMakeFiles/RegionShippingCharge.dir/main.cpp.obj
RegionShippingCharge.exe: CMakeFiles/RegionShippingCharge.dir/build.make
RegionShippingCharge.exe: CMakeFiles/RegionShippingCharge.dir/linklibs.rsp
RegionShippingCharge.exe: CMakeFiles/RegionShippingCharge.dir/objects1.rsp
RegionShippingCharge.exe: CMakeFiles/RegionShippingCharge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Development\CLionProjects\Introduction\RegionShippingCharge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RegionShippingCharge.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RegionShippingCharge.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RegionShippingCharge.dir/build: RegionShippingCharge.exe

.PHONY : CMakeFiles/RegionShippingCharge.dir/build

CMakeFiles/RegionShippingCharge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RegionShippingCharge.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RegionShippingCharge.dir/clean

CMakeFiles/RegionShippingCharge.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Development\CLionProjects\Introduction\RegionShippingCharge D:\Development\CLionProjects\Introduction\RegionShippingCharge D:\Development\CLionProjects\Introduction\RegionShippingCharge\cmake-build-debug D:\Development\CLionProjects\Introduction\RegionShippingCharge\cmake-build-debug D:\Development\CLionProjects\Introduction\RegionShippingCharge\cmake-build-debug\CMakeFiles\RegionShippingCharge.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RegionShippingCharge.dir/depend

