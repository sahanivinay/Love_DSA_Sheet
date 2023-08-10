sort(v.begin(), v.end());

    if (v.size() % 2 == 0) {
        // Even length array
        int mid1 = v.size() / 2 - 1;
        int mid2 = v.size() / 2;
        return (static_cast<double>(v[mid1]) + v[mid2]) / 2.0;
    } else {
        // Odd length array
        int median_index = v.size() / 2;
        return v[median_index];
    }
}
