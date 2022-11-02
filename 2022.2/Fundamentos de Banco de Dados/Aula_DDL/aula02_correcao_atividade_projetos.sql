create table colaboradores(
    id int auto_increment primary key,
    numero_matricula varchar(20) not null unique,
    nome varchar(100) not null,
    email varchar(100) not null,
    senha varchar(100) not null,
    id_coordenador int, 
    constraint colaboradores_fk_coordenadores
        foreign key(id_coordenador) references colaboradores(id)
);

create table departamentos(
    id int auto_increment primary key,
    nome varchar(100) not null
);

create table projetos(
    id int auto_increment primary key,
    nome varchar(100) not null,
    descricao varchar(200),
    estimativa_duracao int, 
    id_colaborador int not null,
    categoria, 
    constraint fk_colaboradores_projetos
);

create table projetos_colaboradores(
    id int auto_increment primary key,
    id_colaborador int not null,
    id_projeto int not null,
    constraint colaboradores_fk_projetos_colaboradores
        foreign key(id_colaborador) references colaboradores(id),
    constraint projetos_fk_projetos_colaboradores
        foreign key(id_projeto) references projetos(id)
)