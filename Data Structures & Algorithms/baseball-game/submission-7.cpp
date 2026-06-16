class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> result;

        reverse(operations.begin(), operations.end());

        string tmp;
        int n;

        while (operations.size() != 0) {
            tmp = operations[operations.size() - 1];

            if (tmp != "+" && tmp != "C" && tmp != "D") {
                result.push_back(stoi(tmp));
            }
            else if (tmp == "D") {
                n = result.size() - 1;
                result.push_back(result[n] * 2);
            }
            else if (tmp == "C") {
                result.pop_back();
            }
            else if (tmp == "+") {
                n = result.size() - 1;
                result.push_back(result[n] + result[n - 1]);
            }

            operations.pop_back();
        }

        return accumulate(result.begin(), result.end(), 0);
    }
};