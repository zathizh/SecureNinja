char input[];
string email;
string::iterator loc = email.begin();
// copy into string converting ";" to " "
for (size_t i=0; i < strlen(input); ++i) {
	if (input[i] != ';') {
		loc = email.insert(loc, input[i]);
	}
	else loc = email.insert(loc, ' ');
	++loc;
}
