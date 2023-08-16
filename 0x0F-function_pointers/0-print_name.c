
/**
* print_name - func start here
* @name: char pointer
* @f: functio pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
