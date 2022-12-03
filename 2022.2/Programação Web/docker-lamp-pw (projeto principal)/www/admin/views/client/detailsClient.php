<h1>Detalhes do Cliente</h1>

<table class="table">
    <tr>
        <th>Código do Cliente</th>
        <td>
            <?= $arrayClient['idClient']?>
        </td>
    </tr>
    <tr>
        <th>Nome</th>
        <td>
            <?= $arrayClient['name']?>
        </td>
    </tr>
    <tr>
        <th>Email</th>
        <td>
            <?= $arrayClient['email']?>
        </td>
    </tr>
    <tr>
        <th>Telefone</th>
        <td>
            <?= $arrayClient['phone']?>
        </td>
    </tr>
    <tr>
        <th>Endereço</th>
        <td>
            <?= $arrayClient['address']?>
        </td>
    </tr>
</table>