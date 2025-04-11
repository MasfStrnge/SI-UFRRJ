const http = require('http'); // Importando o módulo http
const server = http.createServer((req, res) => {
const { url } = req;
console.log(url);
if (url === '/') {
res.end('Oi, turma de Web 1');
} else if (url === '/contato') {
res.end('Esta é a página de contato');
} else if (url === '/atividades') {
res.end('Nossas atividades estão descritas aqui');
} else {
res.writeHead(404);
res.end('A página não foi encontrada');
}
});
// Escutando na porta 3000
server.listen(3000, () => {
console.log('Servidor rodando em: http://localhost:3000');
});