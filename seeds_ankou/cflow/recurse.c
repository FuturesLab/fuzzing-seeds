foo()
{
	bar();
}

bar()
{
	bar();
	foo();
}

main()
{
	bar();
}

