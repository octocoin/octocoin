# OctoCoin 1.8
=========================

OctoCoin 1.8 is a complete re-architecture of OctoCoin, dropping the Litecoin
client as its base for Bitcoin 0.9.2. While OctoCoin retains the same Scrypt 
PoW algorithm and same reward schedule (albeit with tweaks), there are a lot 
of changes under the hood. This is the first version to include the hardfork
at block #75888.


For the full Bitcoin 0.9.x changelog, please see https://bitcointalk.org/index.php?topic=522014


Downgrading
-----------

First and foremost, please note that downgrading from 1.8 to 1.0.0.x is not trivial.
1.8 now uses Berkeley DB 5.1 as its default database (in place of 4.8), and as
such may create database files which are incompatible with previous versions. After
block #75888, previous versions of the OctoCoin client will no longer be compatible 
with the OctoCoin Network - we have no plans to build the hardfork into previous 
versions of the OctoCoin code. As such, this is a mandatory (and irreversable)
update for multiple reasons.

octocoin-cli
------------

Where previously commands were sent to octocoind by running
"octocoind <command>", 1.8 adopts the model from Bitcoin Core 0.9.x where there is
a separate "octocoin-cli" executable which is used instead. This avoids the risk
of accidentally trying to start two daemons at the same time, for example.


Transaction malleability-related fixes
--------------------------------------

Fixes for risk-cases involving transaction malleability have been added; this
is particularly important for any merchants or exchanges using the built-in
wallet system.
