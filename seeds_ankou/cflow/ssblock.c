int
foo ()
{
  static struct {
    int f;
  } k[[]] = { 0 };
  k[[0]]=1;
}

int
main()
{
     foo();
}

