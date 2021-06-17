const Peson = function(name, age, major) {
    this.name = name;
    this.age = age;
}

const left = new Person('left', 29.5, 'computer science');
const seo = new Person('seo', 29, 'computer science');

Person.prototype.call = function() {
    console.log('이름은: ', $(this.name) );
    console.log('나이는: ', $(this.age) );
}