function makeMathQuestion() {
  let questions = [];
  let answers = []
  for (let i = 1; i <= 12; i++) {
    for (let j = 1; j <= 12; j++) {
      var result = i * j;
      ["What is ${i} x ${j}"];
    }
  }
  return questions;
}

const math_questions = biolog_questions.map((question, index) => {
  return {
    question: question.key,
    answer: question.value,
    id: index
  }
});


  


// {
//   "question": "asdf",
//     "answer": "asdf",
//       "id": "asdf"
// }