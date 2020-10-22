# Comandos Cisco IOS

Esse são os comandos utilizados em sala de aula, USE como consulta caso esteja em dúvida em alguma configuração.

## Configurações Iniciais

**Entrar no modo Exec Privilegiado**
```
>enable
```

**Mostrar as configurações que estão ativas no equipamentos**
```
#show running-config
```

**Mostrar as configurações que estão salvas no equipamentos**
```
#show startup-config
```

**Salvas as configurações que estão do equipamentos**
```
#copy running-config startup-config
#write memory
#wr
```

**Reiniciar o equipamento**
```
#reload
```

**Apagar todas as configurações salvas**
```
#write erase
```

**Destravar o terminal**
```
Ctrl+Shift+6
```

**Ir para a tela de configuração do equipamento**
```
#configure terminal
```

**Mudar nome do equipamentos**
```
(config)#hostname [nome]
```

**Inserir um banner de entrada**
```
(config)#banner motd "[mensagem]"
```

**Inserir senha de Enable**
```
(config)#enable secret [senha] (Criptografada)
(config)#enable password [senha] (Sem criptografia)
```

**Inserir senha na console**
```
(config)#line console [número-da-console]
(config-line)#password [senha]
(config-line)#login
```

**Encriptar todas as senhas que estão em texto plano**
```
(config)#service password-encryption
```

**Anular qualquer commando no CISCO IOS**
```
'no' na frente do comando
Exemplo: no hostname SW-01 --> (Apagar o nome configurado no Switch)
```

**Voltar para a tela de EXEC-Privilegiado**
```
Ctrl+Z
```

**Mostrar a tabela MAC do Switch**
```
#show mac-address-table (IOS 12.2)

#show mac address-table (IOS 15.0)
```

## Configurações de VLAN

**Criar e definir um nome para uma VLAN**
```
(config)#vlan [id-da-vlan]
(config-vlan)#name [nome-da-vlan]
```

**Atrelar uma VLAN a uma interface**
```
(config)#interface [id-da-interface]
(config-if)#switchport mode access
(config-if)#switchport access vlan [id-da-vlan]
```

**Exibir um resumo das VLANs presentes no dispositivo e as interfaces atreladas as VLANs**
```
#show vlan brief
```

**Exibir informações sobre uma VLAN específica**
```
#show vlan id [id-da-vlan]
ou
#show vlan name [nome-da-vlan]
```

**Exibir informações relacionadas a VLAN em um interface específica**
```
#show interface [id-da-interface] switchport
```