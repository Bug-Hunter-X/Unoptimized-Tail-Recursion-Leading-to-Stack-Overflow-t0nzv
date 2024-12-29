function factorial(x: int): int {
  var result: int = 1;
  while (x > 0) {
    result *= x;
    x--;
  }
  return result;
}

function bar(): int {
  return factorial(5);
}

function main(): void {
  echo bar();
}
