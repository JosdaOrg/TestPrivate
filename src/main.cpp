int Deref(int* value)
{
  return *value;
}

int main()
{
  Deref(nullptr);
  return 0;
}
