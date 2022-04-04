alert('Repetindo um nome de acordo com número digitado: ')
var nome = prompt("Digite um nome: ")
var numeroRepeticao = Number(prompt("Digite a quantidade de vezes que o nome vai ser repetido: "))
for(var i = 1; i <= numeroRepeticao; i++){
    alert(`${nome} escrito pela ${i} vez`)
}