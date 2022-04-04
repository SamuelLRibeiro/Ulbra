//CÓDIGO DA PARTE DE OPERAÇÕES
alert('Ler dois valores e então executar operação desejada: ')
var numero1 = Number(prompt("Digite um valor: "))
var numero2 = Number(prompt("Digite outro valor: "))
var operador = Number(prompt('Digite a operação: 1- soma 2- subtração 3- multiplicação 4- divisão '))
switch (operador) {
    case 1:
        var soma = numero1 + numero2
        alert(`${numero1} + ${numero2} = ${soma}`)
        break;
    case 2:
        var subtracao = numero1 - numero2
        alert(`${numero1} - ${numero2} = ${subtracao}`)
        break;
    case 3:
        var multiplicacao = numero1 * numero2
        alert(`${numero1} * ${numero2} = ${multiplicacao}`)
        break;
    case 4:
        var divisao = numero1 % numero2
        alert(`${numero1} % ${numero2} = ${divisao}`)
        break;
    default:
        break;

}
