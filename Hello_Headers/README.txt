Simple CMAKE Tutorial to teach myself CMake

Testing out "Hello_Headers" Program

Hello_Headers$ tree
.
├── CMakeLists.txt
├── Include
│   └── Hello.h
└── Src  
    ├── Hello.cpp
    └── main.cpp


Commands
mkdir build     -- Creates new directory called build
cd build        -- Enters the build directory
cmake ..        -- Generates build file in "build" directory
make            -- Creates executable
./Hello_CMake   -- Runs Program

The meaning of scopes are:
PRIVATE - the directory is added to this target’s include directories
INTERFACE - the directory is added to the include directories for any targets that link this library.
PUBLIC -Included in this library and also any targets that link this library.

