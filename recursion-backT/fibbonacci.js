const fib = N => {
    let arr = [0, 1];
    
    for (let i = 2; i <= N; i++) {
        arr.push(arr[i-2] + arr[i-1]);
    }
    
    return arr[N];
};
