const http = require('http');
const server = http.createServer((req, res) => {
console.log(req.url);
res.end('Olá turma de WEB1 no Node js');
});
server.listen(3000, () => {
console.log('Server running on port 3000');
});