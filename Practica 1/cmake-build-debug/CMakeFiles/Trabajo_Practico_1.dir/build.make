# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Projects\C++\Trabajo-Practico-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projects\C++\Trabajo-Practico-1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Trabajo_Practico_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Trabajo_Practico_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Trabajo_Practico_1.dir/flags.make

CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj: CMakeFiles/Trabajo_Practico_1.dir/flags.make
CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj: ../Source.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Projects\C++\Trabajo-Practico-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Trabajo_Practico_1.dir\Source.cpp.obj -c C:\Projects\C++\Trabajo-Practico-1\Source.cpp

CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Projects\C++\Trabajo-Practico-1\Source.cpp > CMakeFiles\Trabajo_Practico_1.dir\Source.cpp.i

CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Projects\C++\Trabajo-Practico-1\Source.cpp -o CMakeFiles\Trabajo_Practico_1.dir\Source.cpp.s

CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj.requires:

.PHONY : CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj.requires

CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj.provides: CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Trabajo_Practico_1.dir\build.make CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj.provides.build
.PHONY : CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj.provides

CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj.provides.build: CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj


# Object files for target Trabajo_Practico_1
Trabajo_Practico_1_OBJECTS = \
"CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj"

# External object files for target Trabajo_Practico_1
Trabajo_Practico_1_EXTERNAL_OBJECTS =

Trabajo_Practico_1.exe: CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj
Trabajo_Practico_1.exe: CMakeFiles/Trabajo_Practico_1.dir/build.make
Trabajo_Practico_1.exe: CMakeFiles/Trabajo_Practico_1.dir/linklibs.rsp
Trabajo_Practico_1.exe: CMakeFiles/Trabajo_Practico_1.dir/objects1.rsp
Trabajo_Practico_1.exe: CMakeFiles/Trabajo_Practico_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Projects\C++\Trabajo-Practico-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Trabajo_Practico_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Trabajo_Practico_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Trabajo_Practico_1.dir/build: Trabajo_Practico_1.exe

.PHONY : CMakeFiles/Trabajo_Practico_1.dir/build

CMakeFiles/Trabajo_Practico_1.dir/requires: CMakeFiles/Trabajo_Practico_1.dir/Source.cpp.obj.requires

.PHONY : CMakeFiles/Trabajo_Practico_1.dir/requires

CMakeFiles/Trabajo_Practico_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Trabajo_Practico_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Trabajo_Practico_1.dir/clean

CMakeFiles/Trabajo_Practico_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projects\C++\Trabajo-Practico-1 C:\Projects\C++\Trabajo-Practico-1 C:\Projects\C++\Trabajo-Practico-1\cmake-build-debug C:\Projects\C++\Trabajo-Practico-1\cmake-build-debug C:\Projects\C++\Trabajo-Practico-1\cmake-build-debug\CMakeFiles\Trabajo_Practico_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Trabajo_Practico_1.dir/depend

