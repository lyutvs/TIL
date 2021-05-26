const foo = {
    name: 'foo',
    major: 'computer science'
};

console.log(foo.name);
console.log(foo['name']);
console.log(foo.nickname);

foo.major = 'electronics engineering';
console.log(foo.major);
console.log(foo['major']);

foo.age = 27;
console.log(foo.age);

foo.major = 'electronics engineering'


foo['full-name'] = 'foo bar';
console.log(foo.full - name);
console.log(foo['full-name']);