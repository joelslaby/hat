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
CMAKE_SOURCE_DIR = /home/hat2/hat/gobyCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hat2/hat/gobyCode/build

# Include any dependencies generated for this target.
include src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/depend.make

# Include the progress variables for this target.
include src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/progress.make

# Include the compile flags for this target's objects.
include src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/flags.make

src/intervehicle1/publisher/config.pb.cc: ../src/intervehicle1/publisher/config.proto
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/hat2/hat/gobyCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running C++ protocol buffer compiler on config.proto"
	cd /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher && /usr/bin/protoc --cpp_out /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher /home/hat2/hat/gobyCode/src/intervehicle1/publisher/config.proto -I/home/hat2/hat/gobyCode/src/intervehicle1/publisher -I/usr/include -I/usr/include -I/usr/include -I/home/hat2/hat/gobyCode/build/include -I/home/hat2/hat/gobyCode/build/src/intervehicle1/publisher --dccl_out /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher

src/intervehicle1/publisher/config.pb.h: src/intervehicle1/publisher/config.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate src/intervehicle1/publisher/config.pb.h

src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.o: src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/flags.make
src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.o: ../src/intervehicle1/publisher/app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hat2/hat/gobyCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.o"
	cd /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.o -c /home/hat2/hat/gobyCode/src/intervehicle1/publisher/app.cpp

src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.i"
	cd /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hat2/hat/gobyCode/src/intervehicle1/publisher/app.cpp > CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.i

src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.s"
	cd /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hat2/hat/gobyCode/src/intervehicle1/publisher/app.cpp -o CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.s

src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.o: src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/flags.make
src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.o: src/intervehicle1/publisher/config.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hat2/hat/gobyCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.o"
	cd /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.o -c /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher/config.pb.cc

src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.i"
	cd /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher/config.pb.cc > CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.i

src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.s"
	cd /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher/config.pb.cc -o CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.s

# Object files for target goby3_course_intervehicle1_publisher
goby3_course_intervehicle1_publisher_OBJECTS = \
"CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.o" \
"CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.o"

# External object files for target goby3_course_intervehicle1_publisher
goby3_course_intervehicle1_publisher_EXTERNAL_OBJECTS =

bin/goby3_course_intervehicle1_publisher: src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/app.cpp.o
bin/goby3_course_intervehicle1_publisher: src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/config.pb.cc.o
bin/goby3_course_intervehicle1_publisher: src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/build.make
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libgoby_zeromq.so.3.0.0~beta16
bin/goby3_course_intervehicle1_publisher: lib/libhat_messages.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libgoby.so.3.0.0~beta16
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libdccl_arithmetic.so.3.0.15
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libdccl.so.3.0.15
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libb64.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libcryptopp.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libboost_system.so.1.71.0
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libboost_date_time.so.1.71.0
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libboost_program_options.so.1.71.0
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so.1.71.0
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libproj.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libgmp.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libncurses.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libform.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libais.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/hdf5/serial/libhdf5_cpp.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/hdf5/serial/libhdf5.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libpthread.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libsz.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libz.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libdl.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libm.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libzmq.so
bin/goby3_course_intervehicle1_publisher: /usr/lib/aarch64-linux-gnu/libprotobuf.so
bin/goby3_course_intervehicle1_publisher: src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hat2/hat/gobyCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../../../bin/goby3_course_intervehicle1_publisher"
	cd /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/goby3_course_intervehicle1_publisher.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/build: bin/goby3_course_intervehicle1_publisher

.PHONY : src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/build

src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/clean:
	cd /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher && $(CMAKE_COMMAND) -P CMakeFiles/goby3_course_intervehicle1_publisher.dir/cmake_clean.cmake
.PHONY : src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/clean

src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/depend: src/intervehicle1/publisher/config.pb.cc
src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/depend: src/intervehicle1/publisher/config.pb.h
	cd /home/hat2/hat/gobyCode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hat2/hat/gobyCode /home/hat2/hat/gobyCode/src/intervehicle1/publisher /home/hat2/hat/gobyCode/build /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher /home/hat2/hat/gobyCode/build/src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/intervehicle1/publisher/CMakeFiles/goby3_course_intervehicle1_publisher.dir/depend
