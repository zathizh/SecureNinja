#include <stdio.h>

void func1(){
	printf("void ()\n");
}

void func2(int val){
	printf("void (int) : val=%d\n", val);
}

void func3(int val1, float val2){
        printf("void (int, float) : val1=%d\tval2=%f\n", val1, val2);
}

int func4(){
	return 100;
}

int func5(int val){
	return val*5;
}

int func6(int val1, float val2){
	return val1*val2;
}

int main(){

	void (*f1ptr)() = &func1;
	(*f1ptr)();
	
	void (*f2ptr)(int) = &func2;
	(*f2ptr)(100);

	void (*f3ptr)(int, float) = &func3;
        (*f3ptr)(100, 5.8);

	int(*f4ptr)() = &func4;
	int val4 = (*f4ptr)();
	printf("int () : val=%d\n", val4);

	int(*f5ptr)(int) = &func5;
	int val5 = (*f5ptr)(10);
	printf("int (int) : val=%d\n", val5);

	int(*f6ptr)(int, float) = &func6;
	int val6 = (*f6ptr)(10, .5);
	printf("int (int, float) : val=%d\n", val6);

	return 0;
}
