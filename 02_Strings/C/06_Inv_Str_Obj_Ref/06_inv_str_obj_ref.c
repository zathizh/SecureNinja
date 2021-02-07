char input[];
string email;
string::iterator loc = email.begin();
// copy into string converting ";" to " " 
for (size_t i=0; i < strlen(input); i++) {
	if (input[i] != ';') {
		email.insert(loc++, input[i]);
	}
	else email.insert(loc++, ' '); // invalid iterator
}
