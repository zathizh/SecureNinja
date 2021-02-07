// https://codeyarns.com/tech/2017-06-13-a-dissection-of-c-virtual-functions.html
g++ -g 05_v_ptr.cpp -o 05_v_ptr
readelf -s 05_v_ptr  | c++filt | grep -E "vtable|a::|b::"
