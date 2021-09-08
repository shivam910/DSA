/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    let NO_OF_CHARS=256;
        let count1 = new Array(NO_OF_CHARS);
        let count2 = new Array(NO_OF_CHARS);
        for(let i = 0; i < NO_OF_CHARS; i++)
        {
            count1[i] = 0;
            count2[i] = 0;
        }
         
        let i;
        for (i = 0; i < s.length && i < t.length;
             i++) {
            count1[s[i].charCodeAt(0)]++;
            count2[t[i].charCodeAt(0)]++;
        }

        if (s.length != t.length)
            return false;
  
        for (i = 0; i < NO_OF_CHARS; i++)
            if (count1[i] != count2[i])
                return false;
  
        return true;

};
