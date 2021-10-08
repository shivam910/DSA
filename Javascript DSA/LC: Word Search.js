
/**
 * @param {character[][]} board
 * @param {string} word
 * @return {boolean}
 */
var exist = function(board, word) {
  var len1 = board.length;
  var len2 = (board[0] || []).length;
  var len3 = word.length;

  if (!len1 || !len2 || !len3) return false;

  for (var i = 0; i < len1; i++) {
    for (var j = 0; j < len2; j++) {
      if (helper(board, word, i, j, 0)) return true;
    }
  }

  return false;
};

var helper = function (board, word, m, n, k) {
  if (k === word.length) return true;
  if (m < 0 || m >= board.length) return false;
  if (n < 0 || n >= board[m].length) return false;
  if (board[m][n] !== word[k]) return false;

  var res = false;
  var char = board[m][n];

  board[m][n] = '#';

  res = helper(board, word, m - 1, n, k + 1)
        || helper(board, word, m + 1, n, k + 1)
        || helper(board, word, m, n - 1, k + 1)
        || helper(board, word, m, n + 1, k + 1);

  if (!res) board[m][n] = char;

  return res;
};
