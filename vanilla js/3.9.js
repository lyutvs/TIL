const obj = [
    {
        id:1,
        done: true,
    },
    {
        id:3,
        done: false,
    }
];
const who = obj.filter(e =>e.done === false);
console.log(who);
