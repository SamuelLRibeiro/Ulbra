function sendForm(){
    var name = document.getElementById('nameForm').value
    var email = document.getElementById('emailForm').value
    var text = document.getElementById('textareaForm').value
   
    if (name || email || text == ''){
        alert("CAMPO VAZIO! Confira suas respostas!")
    }
}

function subscribeNews(){
    var emailLetter = document.getElementById('emailNews').value
    var letterMessage = document.getElementById('newsMessage').value
    
    letterMessage.innerHTML = `${emailLetter}`
}