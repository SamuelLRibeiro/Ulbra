function calcular(){
    var getNumber1 = document.getElementById('num1')
    var getNumber2 = document.getElementById('num2')
    var sel = document.querySelector('#operadores').value
    var operador = sel
    var show = document.getElementById('res') 
    var number1 = Number(getNumber1.value)
    var number2 = Number(getNumber2.value)
    switch (operador) {
        case 'operadorSoma':
            var soma = number1 + number2
            show.innerHTML = `O resultado da adição: ${soma}`
            break;
        case 'operadorSubtracao':
            var subtracao = number1 - number2
            show.innerHTML = `O resultado da subtração: ${subtracao}`
            break;
        case 'operadorMultiplicacao':
            var multiplicacao = number1 * number2
            show.innerHTML = `O resultado da multiplicação: ${multiplicacao}`
            break;
        case 'operadorDivisao':
            var divisao = number1 / number2
            show.innerHTML = `O resultado da divisão: ${divisao}`
        default:
            break;
    }
}
