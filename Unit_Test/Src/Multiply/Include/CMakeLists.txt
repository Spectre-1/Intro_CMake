# Add libraries

add_library(${Multiply}  ${Multiply.cpp})

# Add target

target_include_directories(${Multiply} PUBLIC ${include})