<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!--JQuery-->
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js"></script>

    <!--BOOTSTRAP-->
    <!-- Latest compiled and minified CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
    <!-- Latest compiled JavaScript -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
    
    <!--Arquivos próprios-->
    <link rel="stylesheet" href="assets/style.css">
    <title>Document</title>
</head>
<body id="body">

    <header class="jumbotron" id="header">
        <h1 id="mainTitle">Área administrativa</h1>
        <a id="logout" href="?controller=main&action=logout">Logout</a>
    </header>

    <div class="container-fluid" id="allContent">
        <div class="row">
            <nav class="col-md-2" id="myNav">
                <ul class="nav flex-column">
                    <li class="nav-item">
                      <a id="btnHome" class="nav-link" href="?controller=main&action=index" >Home</a>
                    </li>
                </ul>
                <h4>Clientes</h4>
                <ul class="nav flex-column">
                    <li class="nav-item">
                      <a id="btnHome" class="nav-link" href="?controller=client&action=listClients" >Listar Clientes</a>
                    </li>
                    <li class="nav-item">
                      <a id="btnHome" class="nav-link" href="?controller=client&action=insertClient" >Inserir Cliente</a>
                    </li>
                </ul>
              </nav>
              <section class="col-md-10 p-4" id="myText">         