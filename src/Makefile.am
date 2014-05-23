include Makefile.include

AM_CPPFLAGS += -I$(builddir)

noinst_LIBRARIES = \
  liboctocoin_server.a \
  liboctocoin_common.a \
  liboctocoin_cli.a
if ENABLE_WALLET
noinst_LIBRARIES += \
  liboctocoin_wallet.a \
  liboctocoin_server_wallet.a
endif

bin_PROGRAMS =

if BUILD_OCTOCOIND
  bin_PROGRAMS += octocoind
endif

if BUILD_OCTOCOIN_CLI
  bin_PROGRAMS += octocoin-cli
endif

SUBDIRS = . $(BUILD_QT) $(BUILD_TEST)
DIST_SUBDIRS = . qt test
.PHONY: FORCE
# octocoin core #
OCTOCOIN_CORE_H = \
  addrman.h \
  alert.h \
  allocators.h \
  base58.h bignum.h \
  bloom.h \
  chainparams.h \
  checkpoints.h \
  checkqueue.h \
  clientversion.h \
  coincontrol.h \
  coins.h \
  compat.h \
  core.h \
  crypter.h \
  db.h \
  hash.h \
  init.h \
  key.h \
  keystore.h \
  leveldbwrapper.h \
  limitedmap.h \
  main.h \
  miner.h \
  mruset.h \
  netbase.h \
  net.h \
  noui.h \
  protocol.h \
  rpcclient.h \
  rpcprotocol.h \
  rpcserver.h \
  script.h \
  scrypt.h \
  serialize.h \
  sync.h \
  threadsafety.h \
  tinyformat.h \
  txdb.h \
  txmempool.h \
  ui_interface.h \
  uint256.h \
  util.h \
  version.h \
  walletdb.h \
  wallet.h

JSON_H = \
  json/json_spirit.h \
  json/json_spirit_error_position.h \
  json/json_spirit_reader.h \
  json/json_spirit_reader_template.h \
  json/json_spirit_stream_reader.h \
  json/json_spirit_utils.h \
  json/json_spirit_value.h \
  json/json_spirit_writer.h \
  json/json_spirit_writer_template.h

obj/build.h: FORCE
	@$(MKDIR_P) $(abs_top_builddir)/src/obj
	@$(top_srcdir)/share/genbuild.sh $(abs_top_builddir)/src/obj/build.h \
	  $(abs_top_srcdir)
version.o: obj/build.h

liboctocoin_server_a_SOURCES = \
  addrman.cpp \
  alert.cpp \
  rpcserver.cpp \
  bloom.cpp \
  chainparams.cpp \
  checkpoints.cpp \
  coins.cpp \
  init.cpp \
  keystore.cpp \
  leveldbwrapper.cpp \
  main.cpp \
  miner.cpp \
  net.cpp \
  noui.cpp \
  rpcblockchain.cpp \
  rpcmining.cpp \
  rpcmisc.cpp \
  rpcnet.cpp \
  rpcrawtransaction.cpp \
  txdb.cpp \
  txmempool.cpp \
  $(JSON_H) \
  $(OCTOCOIN_CORE_H)

liboctocoin_wallet_a_SOURCES = \
  db.cpp \
  crypter.cpp \
  wallet.cpp \
  walletdb.cpp \
  $(OCTOCOIN_CORE_H)

liboctocoin_server_wallet_a_SOURCES = \
  rpcdump.cpp \
  rpcwallet.cpp \
  $(OCTOCOIN_CORE_H)

liboctocoin_common_a_SOURCES = \
  allocators.cpp \
  chainparams.cpp \
  core.cpp \
  hash.cpp \
  key.cpp \
  netbase.cpp \
  protocol.cpp \
  rpcprotocol.cpp \
  script.cpp \
  scrypt.cpp \
  sync.cpp \
  util.cpp \
  version.cpp \
  $(OCTOCOIN_CORE_H)

liboctocoin_cli_a_SOURCES = \
  rpcclient.cpp \
  $(OCTOCOIN_CORE_H)

nodist_liboctocoin_common_a_SOURCES = $(top_srcdir)/src/obj/build.h
#

# octocoind binary #
octocoind_LDADD = \
  liboctocoin_server.a \
  liboctocoin_cli.a \
  liboctocoin_common.a \
  $(LIBLEVELDB) \
  $(LIBMEMENV)
if ENABLE_WALLET
octocoind_LDADD += liboctocoin_wallet.a liboctocoin_server_wallet.a
endif
octocoind_SOURCES = octocoind.cpp
#

if TARGET_WINDOWS
octocoind_SOURCES += octocoind-res.rc
endif

AM_CPPFLAGS += $(BDB_CPPFLAGS)
octocoind_LDADD += $(BOOST_LIBS) $(BDB_LIBS)

# octocoin-cli binary #
octocoin_cli_LDADD = \
  liboctocoin_cli.a \
  liboctocoin_common.a \
  $(BOOST_LIBS)
octocoin_cli_SOURCES = octocoin-cli.cpp
#

if TARGET_WINDOWS
octocoin_cli_SOURCES += octocoin-cli-res.rc
endif

# NOTE: This dependency is not strictly necessary, but without it make may try to build both in parallel, which breaks the LevelDB build system in a race
leveldb/libleveldb.a: leveldb/libmemenv.a

leveldb/%.a:
	@echo "Building LevelDB ..." && $(MAKE) -C $(@D) $(@F) CXX="$(CXX)" \
	  CC="$(CC)" PLATFORM=$(TARGET_OS) AR="$(AR)" $(LEVELDB_TARGET_FLAGS) \
	  OPT="$(CXXFLAGS) $(CPPFLAGS)"

qt/octocoinstrings.cpp: $(liboctocoin_server_a_SOURCES) $(liboctocoin_common_a_SOURCES) $(liboctocoin_cli_a_SOURCES)
	@test -n $(XGETTEXT) || echo "xgettext is required for updating translations"
	@cd $(top_srcdir); XGETTEXT=$(XGETTEXT) share/qt/extract_strings_qt.py

CLEANFILES = leveldb/libleveldb.a leveldb/libmemenv.a *.gcda *.gcno

DISTCLEANFILES = obj/build.h

EXTRA_DIST = leveldb Makefile.include

clean-local:
	-$(MAKE) -C leveldb clean
	rm -f leveldb/*/*.gcno leveldb/helpers/memenv/*.gcno
