#include "stdio.h"
char* longestCommonPrefix(char** strs, int strsSize) {
    int i, j;
    int len = strlen(strs[0]);
    for (i = 1; i < strsSize; i++) {
        if (strlen(strs[i]) < len) {
            len = strlen(strs[i]);
        }
    }
    char *result = malloc(sizeof(char) * (len + 1));
    if (result == NULL) {
        return ("");
    }
    strncpy(result, strs[0], len);
    result[len] = '\0'; 
    for (i = 1; i < strsSize; i++) {
        for (j = 0; j < len; j++) {
            if (result[j] != '\0' && strs[i][j] != result[j]) {
                result[j] = '\0';
            }
        }
    }
    return result;
}
