# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/session4b3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/session4b3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/session4b3.dir/flags.make

CMakeFiles/session4b3.dir/ejercicio4.cpp.obj: CMakeFiles/session4b3.dir/flags.make
CMakeFiles/session4b3.dir/ejercicio4.cpp.obj: ../ejercicio4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/session4b3.dir/ejercicio4.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\session4b3.dir\ejercicio4.cpp.obj -c C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b\ejercicio4.cpp

CMakeFiles/session4b3.dir/ejercicio4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session4b3.dir/ejercicio4.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b\ejercicio4.cpp > CMakeFiles\session4b3.dir\ejercicio4.cpp.i

CMakeFiles/session4b3.dir/ejercicio4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session4b3.dir/ejercicio4.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b\ejercicio4.cpp -o CMakeFiles\session4b3.dir\ejercicio4.cpp.s

# Object files for target session4b3
session4b3_OBJECTS = \
"CMakeFiles/session4b3.dir/ejercicio4.cpp.obj"

# External object files for target session4b3
session4b3_EXTERNAL_OBJECTS =

session4b3.exe: CMakeFiles/session4b3.dir/ejercicio4.cpp.obj
session4b3.exe: CMakeFiles/session4b3.dir/build.make
session4b3.exe: CMakeFiles/session4b3.dir/linklibs.rsp
session4b3.exe: CMakeFiles/session4b3.dir/objects1.rsp
session4b3.exe: CMakeFiles/session4b3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable session4b3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\session4b3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/session4b3.dir/build: session4b3.exe

.PHONY : CMakeFiles/session4b3.dir/build

CMakeFiles/session4b3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\session4b3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/session4b3.dir/clean

CMakeFiles/session4b3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b\cmake-build-debug C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b\cmake-build-debug C:\Users\Christoffer\Documents\EC1\ec1-ChristofferVCh\session4b\cmake-build-debug\CMakeFiles\session4b3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/session4b3.dir/depend

