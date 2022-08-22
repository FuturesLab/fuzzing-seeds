int bar; 
/* This declaration used to shadow the global in
   pre-1.0 versions */
int (*foo) (int bar); 

int
main()
{
     bar = 1;
}

