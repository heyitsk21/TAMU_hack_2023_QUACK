function makeMathQuestion() {
  let questions = [];
  for (let i = 1; i <= 10; i++) {
    for (let j = 1; j <= 10; j++) {
      questions.push(`What is ${i} x ${j}`);
    }
  }
  return questions;
}

