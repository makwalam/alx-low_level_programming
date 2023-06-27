/**
 * generate_password - Generates the expected password for `101-crackme`
 * @password: The buffer to store the generated password
 */
void generate_password(char *password)
{
    int i;

    for (i = 0; i < 2; i++)
    {
        password[i] = 'a';
    }

    for (i = 2; i < PASSWORD_LENGTH; i++)
    {
        password[i] = '\n';
    }

    password[PASSWORD_LENGTH] = '\0';
}

