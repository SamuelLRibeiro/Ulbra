<?php

class ClientController{
    public function register(){
        require_once('views/templates/header.php');
        require_once('views/client/register.php');
        require_once('views/templates/footer.php');
    }

    public function registerView(){
        if(isset($_POST['option1'])){
            $option1 = true;
            $option1Label = 'A opção foi marcada';
        } else {
            $option1 = false;
            $option1Label = 'A opção 1 não foi marcada';
        }

        $arrayClient = array(
            'name' => $_POST['name'],
            'email' => $_POST['email'],
            'gender' => $_POST['gender'],
            'option1' => $option1,
            'option1Label' => $option1Label
        );

        require_once('views/templates/header.php');
        require_once('views/client/registerView.php');
        require_once('views/templates/footer.php');
    }

    public function listClients(){
        require_once('models/ClientModel.php');
        $ClientModel = new ClientModel();
        $result = $ClientModel -> listClients();

        $arrayClients =  array();
        while($line = $result -> fetch_assoc()){
            array_push($arrayClients, $line);
        }
        
        require_once('views/templates/header.php');
        require_once('views/client/listClients.php');
        require_once('views/templates/footer.php');
    }

}