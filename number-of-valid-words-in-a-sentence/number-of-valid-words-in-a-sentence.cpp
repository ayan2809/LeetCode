class Solution {
public:
    int countValidWords(std::string s) {
        int res = 0;

        size_t i = 0;

        // Skip all leading spaces.
        for (; s[i] == ' ' && i < s.length(); ++i);

        while (i < s.length()) {
            // Index `i` points to the beginning of a word.
            uint32_t num_hyphens = 0;

            char prev_char = '\0';
            bool is_valid = true;
            bool has_punctuation = false;

            size_t j = i;

            for (; j < s.length() and s[j] != ' '; ++j) {
                const char c = s[j];

                
                if (!is_valid)
                    continue;

                if (has_punctuation) {
                    is_valid = false;
                }

                if (isdigit(c)) {                               // digit
                    is_valid = false;
                } else if (c == '-') {                          // hyphen
                    num_hyphens++;
                    if (num_hyphens > 1) {
                        is_valid = false;
                    } else {
                        if (!isalpha(prev_char)) {
                            is_valid = false;
                        }
                    }
                } else if (c == '!' || c == '.' || c == ',') {  // punctuation
                    has_punctuation = true;
                    if (prev_char == '-') {
                        is_valid = false;
                    }
                }

                prev_char = c;
            }

            // If the last character in the token is hyphen
            // then it is not valid.
            if (prev_char == '-')
                is_valid = false;

            if (is_valid) {
                res++;
            }

            i = j;

            // Skipp any leading spaces.
            for (; s[i] == ' ' && i < s.length(); ++i);
        }

        return res;
    }
};