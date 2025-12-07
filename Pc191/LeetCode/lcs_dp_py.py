def longest_common_substring_dp(S1, S2):
    n1, n2 = len(S1), len(S2)
    dp=[[0 for _ in range(n2+1)] for _ in range(n1+1)]

    max_len = 0
    end_pos = 0

    for i in range(1, n1 + 1):
        for j in range(1, n2 + 1):
            if S1[i-1] == S2[j-1]:
                dp[i][j] = dp[i-1][j-1] + 1

                if dp[i][j] > max_len:
                    max_len = dp[i][j]
                    end_pos = i
            else:
                dp[i][j] = 0

    return S1[end_pos - max_len : end_pos]


print(longest_common_substring_dp('acz','ammmmm'))