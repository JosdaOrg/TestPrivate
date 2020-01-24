char Deref(char* value)
{
  return *value;
}

int main(char** argv, int argc)
{
  Deref(argv[1]);
  return 0;
}
