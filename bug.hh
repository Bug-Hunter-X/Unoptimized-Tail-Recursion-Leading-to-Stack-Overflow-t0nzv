function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function bar(): int {
  return foo(5);
}

// This will cause a stack overflow error
// Because Hack does not optimize tail-recursive functions
// which means that the recursive calls are not optimized
// to avoid creating a new stack frame for every call
// This can cause a stack overflow error, especially
// for large inputs.

function main(): void {
  echo bar();
}
