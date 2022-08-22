static int s = 1;
int g = -100;

static
int foo()
{
  static int s = 10;     /* hides file static variable */
  return s;
}

static
int bar()
{
  static int foo = 100;  /* hides file static function */
  return foo + g;
}

int baz()
{
  int g = 100;           /* hides global variable */
  return s + g;
}

int main()
{
  return (g + s + foo() + bar() + baz());
}

