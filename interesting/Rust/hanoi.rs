use std::io;
use std::sync::atomic::{AtomicI32,Ordering};

static MOVE_COUNT:AtomicI32=AtomicI32::new(0);

fn move_disk(_i:i32,c1:char,c2:char){
    MOVE_COUNT.fetch_add(1,Ordering::SeqCst);
    println!("{}->{}",c1,c2);
}
fn hanoi(n:i32,a:char,b:char,c:char){
    if n==1{
        move_disk(1,a,c);
    }
    else{
        hanoi(n-1,a,c,b);
        move_disk(n,a,c);
        hanoi(n-1,b,a,c);
    }
}

fn main(){
    let mut n=String::new();
    println!("please enter the number of disks");
    io::stdin()
        .read_line(&mut n)
        .expect("Failed to read line");
    let n:i32=n.trim().parse()
        .expect("please type an integer");
    hanoi(n,'A','B','C');
    println!("Total moves:{}",MOVE_COUNT.load(Ordering::SeqCst));
}
