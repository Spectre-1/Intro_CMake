Simple CMAKE Tutorial to teach myself CMake

Testing out "Hello_Headers" Program

Hello_Headers$ tree
.
├── CMakeLists.txt
├── include
│   └── Hello.h
└── src  
    ├── Hello.cpp
    └── main.cpp


Commands
mkdir build     -- Creates new directory called build
cd build        -- Enters the build directory
cmake ..        -- Generates build file in "build" directory
make            -- Creates executable
./Hello_CMake   -- Runs Program