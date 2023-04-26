Simple CMAKE Tutorial to teach myself CMake

Testing out "Hello_Static" Program

Hello_Static$ tree
.
├── CMakeLists.txt
├── Include
│   └── static
│       └── Hello.h
└── Src
    ├── Hello.cpp
    └── main.cpp


Commands
mkdir build     -- Creates new directory called build
cd build        -- Enters the build directory
cmake ..        -- Generates build file in "build" directory
make            -- Creates executable
./Hello_CMake   -- Runs Program