class String
{
    public:
        String(const char *str=NULL);
        String(const String &other);

        ~String(void);

        String & operator =(const String &other);

    private:

        char *m_data;
    
};

String::String(const char* str)
{
  if(str == NULL)
  {
    return;
  }
  int length = strlen(str);
  m_data = new char[length + 1];
  strcpy(m_data, str);
}

String::String(const String &other)
{
  if(&other == this)
  {
    return;
  }
  int length = strlen(other.m_data);
  m_data = new char[length + 1];
  strcpy(m_data, other.m_data);
}

String::~String(void)
{
 delete []m_data;
}

String& String::operator=(const String& other)
{
  if(&other != this)
  {
    char *tmp = new char[strlen(other.m_data) + 1];
    strcpy(tmp, other.m_data);
    
    delete []m_data;
    m_data = tmp;
  }
  return *this;
}










