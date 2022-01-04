// solution
// я не решил zljdghvfdfkjsgkjdhgklfghsvuirtbnvrtyvgbryutvgruybvrtuyvbruvyubruytuyruybryvyurvbyuvbuyrtvurytbuyvbrtuyrbvt
// 2 hours 
char *makeUpperCase (char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    return str;
}
