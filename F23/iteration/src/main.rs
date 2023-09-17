fn reversed_vec(input_data: &[i32]) -> Vec<i32> {
    let mut result: Vec<i32> = Vec::new();
    for x in input_data.iter().rev() {
        result.push(*x);
    }

    result
}

fn is_in_order(data: &[i32]) -> bool {
    let min = i32::MIN;
    for x in data {
        
    }
}

fn main() {
    let data = vec![2, 3, 5, 7, 11, 13];

    for x in &data {
        println!("{x}");
    }

    for x in data {
        println!("{x}");
    }
}

#[cfg(test)]
mod test {
    use super::*;

    #[test]
    fn reversed_vec_empty() {
        let data = vec![];
        assert_eq!(reversed_vec(&data), vec![]);
    }

    #[test]
    fn reversed_vec_one() {
        let data = vec![1];
        assert_eq!(reversed_vec(&data), [1]);
    }

    #[test]
    fn reversed_vec_three() {
        let data = vec![1, 2, 3];
        assert_eq!(reversed_vec(&data), [3, 2, 1]);
    }
    
}
