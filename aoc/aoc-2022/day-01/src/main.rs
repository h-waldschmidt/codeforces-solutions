use std::fs;

fn main() {
    let file_path = "src/challenge.txt";
    println!("In file {}", file_path);

    let input = fs::read_to_string(file_path).expect("Should have been able to read the file");
    let max = solve_first(&input);
    println!("max calorie value: {}", max);

    let max_three = solve_second(&input);
    println!("max three calorie values summed: {}", max_three);
}

fn solve_first(input: &str) -> u64 {
    let mut max = 0;
    for group in input.split("\n\n") {
        let mut sum = 0;
        for line in group.lines() {
            let value = line.parse::<u64>().unwrap();
            sum += value;
        }
        if sum > max {
            max = sum;
        }
    }
    max
}

fn solve_second(input: &str) -> u64 {
    let mut vec = Vec::new();
    for group in input.split("\n\n") {
        let mut sum = 0;
        for line in group.lines() {
            let value = line.parse::<u64>().unwrap();
            sum += value;
        }
        vec.push(sum);
    }

    vec.sort_by(|a, b| b.cmp(a));
    vec.truncate(3);
    let sol = vec.iter().sum::<u64>();
    sol
}
