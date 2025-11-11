use std::io::{self, stdin, Read, BufWriter, Write};
use String;
use Vec;

struct Pair {
    first: i32,
    second: i32,
}
fn main() {
    /** FastIO */
    let stdout = io::stdout();
    let mut writer = BufWriter::new(stdout.lock());

    /** Start Solve */
    let buffers = input();

    let n = buffers[0];

    let mut stack: Vec<Pair> = Vec::new();
    let mut pair_count:i64 = 0;

    for i in 0..n {
        let now_height = buffers[i + 1] as i32;
        let mut same_height_count = 1;

        while let Some(top) = stack.last() {
            if top.first < now_height {
                pair_count += top.second as i64;
                stack.pop();
            } else {
                break;
            }
        }

        if let Some(top) = stack.last() {
            if top.first == now_height {
                pair_count += top.second as i64;
                same_height_count = top.second + 1;

                if stack.len() > 1 {
                    pair_count += 1;
                }
                stack.pop();
            } else {
                pair_count += 1;
            }
        }

        stack.push(Pair {first: now_height, second: same_height_count});
    }

    writeln!(writer, "{}", pair_count).unwrap();
}

/** Input */
fn input() -> Vec<usize>{
    let mut buffer = String::new();
    stdin().read_to_string(&mut buffer).unwrap();
    let buffers: Vec<usize> = buffer.split_ascii_whitespace().flat_map(str::parse::<usize>).collect();

    buffers
}
