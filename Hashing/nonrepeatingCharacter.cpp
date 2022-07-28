char nonrepeatingCharacter(string S)
{
    // Your code here
    int a[26] = {};
    for (char c : S)
        a[c - 'a'] = a[c - 'a'] + 1;

    for (char c : S)
    {
        if (a[c - 'a'] == 1)
            return c;
    }
    return '$';
}