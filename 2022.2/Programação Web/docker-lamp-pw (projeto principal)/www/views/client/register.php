<h1>Cadastro de cliente</h1>

<form action="?controller=client&action=registerView" method="POST">
    <div class="mt-3 mb-3">
        <label class="form-label" for="">Nome</label>
        <input class="form-control" type="text" name="name" required>
    </div>
    
    <div>
        <label class="form-label" for="">Email</label>
        <input class="form-control" type="email" name="email" required>
    </div>

    <h4>Gênero:</h4>
    <div class="form-check">
        <input type="radio" class="form-check-input" name="gender" value="female" checked>
        <label class="form-check-label">Feminino</label><br>
        <input type="radio" class="form-check-input" name="gender" value="male">
        <label class="form-check-label">Masculino</label><br>
        <input type="radio" class="form-check-input" name="gender" value="others">
        <label class="form-check-label">Outros</label><br>
    </div>

    <h4>Selecione:</h4>
    <div class="form-check">
        <input class="form-check-input" type="checkbox" name="option1" value="options1" checked>
        <label class="form-check-label">Option 1</label>
    </div>

    <button type="submit">Enviar</button>
</form>