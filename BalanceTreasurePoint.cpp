int balancedTreasurePoint(vector<int>& arr) {
    int totalSum = 0;
    for (int x : arr) totalSum += x;

    int leftSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i;   // balanced treasure point
        }

        leftSum += arr[i];
    }

    return -1; // no balanced point
}
