use std::io::{self, stdin, Read, BufWriter, Write};
use String;

use std::collections::VecDeque;

fn main() {
    /** FastIO */
    let stdout = io::stdout();
    let mut writer = BufWriter::new(stdout.lock());

    /** Start Solve */
    let buffers = input();
    let n = buffers[0];

    let mut queue: VecDeque<i32> = (1..=n as i32).collect();

    while queue.len() > 1 {
        queue.pop_front();
        if let Some(card_to_move) = queue.pop_front() {
            queue.push_back(card_to_move);
        }
    }

    if let Some(last_card) = queue.front() {
        writeln!(writer, "{}", last_card).unwrap();
    }

}

/** Input */
fn input() -> Vec<usize>{
    let mut buffer = String::new();
    stdin().read_to_string(&mut buffer).unwrap();
    let buffers: Vec<usize> = buffer.split_ascii_whitespace().flat_map(str::parse::<usize>).collect();

    buffers
}
