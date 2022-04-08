#include <wchar.h>

int wcsncmp(const wchar_t *s1, const wchar_t *s2, size_t n) {
    for (size_t i = 0; i < n; i++) {
        if (s1[i] < s2[i]) {
            return -1;
        }

        if (s1[i] > s2[i]) {
            return 1;
        }

        if (s1[i] == L'\0') {
            return 0;
        }
    }

    return 0;
}

wchar_t *wcsrchr(const wchar_t *wcs, wchar_t wc) {
    wchar_t *res = NULL;

    while (*wcs != L'\0') {
        if (*wcs == wc) {
            // This function is also a const-cast
            res = (wchar_t *)wcs;
        }

        wcs++;
    }

    return res;
}

wchar_t *wmemset(wchar_t *wcs, wchar_t wc, size_t n) {
    for (size_t i = 0; i < n; i++) {
        wcs[i] = wc;
    }

    return wcs;
}
