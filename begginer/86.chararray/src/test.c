

void concatinateStr(char result[100], char str1[50], char str2[50]) {
    int i = 0;
    while (str1[i] != '\0')
    {
        result[i] = str1[i];
        i++;
    }

    int j = 0;
    while (str2[j] != '\0')
    {
        result[i] = str2[j];
        i++;
        j++;
    }
    
}

int main(int argc, char *argv[]) {
    const char str1[50] = "Hello "; 
    const char str2[50] = "Iuliia!";
    char result[100] = {};

    concatinateStr(result, str1, str2);
    printf("\nconcatinate result is: %s \n", result);
    printf("\n");
}