open_project -reset adder_prj
set_top adder

add_files adder.cpp
add_files -tb adder_test.cpp

open_solution -reset "sol1"
set_part {xcvu9p-flgb2104-1-e}
create_clock -period 10 -name default

csim_design
csynth_design

exit
