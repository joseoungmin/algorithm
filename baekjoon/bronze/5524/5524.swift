var input_num = Int(readLine()!)!

while input_num > 0 {
    let input = readLine()!
    let input_lower = input.lowercased()
    print(input_lower)
    input_num -= 1
}