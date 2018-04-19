extern void swap(int*, int*);

int partion(int a[], int left, int right) {
    int idx = right;
    int small = left - 1, big = left;
    while(big < right) {
        if (a[big] < a[idx]) {
            ++ small;
            if (small != big) {
                swap(&a[small],&a[big]);
            }
        }
        ++ big;
    }
    ++ small;
    swap(&a[small], &a[idx]);

    return small;
}

int quick_sort(int a[], int left, int right) {
    if (left < right) {
        int povit = partion(a, left, right);
        quick_sort(a, left, povit -1);
        quick_sort(a, povit + 1, right);
    }
}
