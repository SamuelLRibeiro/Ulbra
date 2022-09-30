/*
clientes(id int pk, nome char(100));
enderecos(id int pk, logradouro char(100), numero int, bairro, cidade, estado, id_cliente fk);
*/


/*
create table nome_da_tabela
(
    nome_do_atributo | dominio | vazios | chaves,
    nome_do_atributo | dominio | vazios | chaves 
);
*/

create table clientes
(
    id int not null primary key,
    nome varchar(100) not null,
    CPF char(14) not null unique
);

create table enderecos
(
    id int not null primary key,
    logradouro varchar(100) not null,
    numero varchar(10),
    bairro varchar(100),
    cidade varchar(100),
    estado char(2),
    id_cliente int not null, 
        constraint fk_clientes_tem_enderecos
            foreign key(id_clientes) references clientes(id)
);

create table engenheiros
(
    id int not null primary key,
    nome varchar(100) not null
);
create table projetos
(
    id int not null primary key,
    nome varchar(250) not null
);
create table atuacoes
(
    id int not null primary key,
    funcao varchar(20),
    id_engenheiro int not null,
    id_projeto int not null,
    constraint fk_engenheiros_atuacoes
        foreign key(id_engenheiro) references engenheiros(id),
    constraint fk_projetos_atuacoes
        foreign key(id_projeto) references projetos(id)
);

/*
aluno(id, nome)
departamento (id, nome)
curso(id, nome, id_depto)
  id_depto referencia departamento (id)
professor(id, nome)
disciplina(id, nome, id_prof)
   id_prof referencia professor(id)
matricula(id_disciplina, id_aluno, data_matr)
    id_disciplina referencia disciplina(id) 
   id_aluno referencia aluno(id);

*/
create table aluno
(
    id int auto_increment not null primary key,
    nome varchar(100) not null
);
create table departamento
(
    id int auto_increment primary key,
    nome varchar(100)
);
create table curso
(
    id int auto_increment primary key,
    nome varchar(100),
    id_dpto int,
    constraint fk_departamento_curso
        foreign key(id_dpto) 
            references departamento(id)
);
create table professor
(
    id int auto_increment primary key,
    nome varchar(100)
);
create table disciplina
(
    id int auto_increment primary key,
    nome varchar(100),
    id_prof int auto_increment,
    constraint fk_professor_disciplina
        foreign key(id_prof) 
            references professor(id)
);
create table matricula 
(
    id_disciplina int auto_increment primary key,
    id_aluno int auto_increment,
    data_matr Date,
    constraint fk_disciplina_matricula
        foreign key(id_disciplina) 
            references disciplina(id),
    constraint fk_aluno_disciplina
        foreign key(id_aluno) 
            references aluno(id)
);