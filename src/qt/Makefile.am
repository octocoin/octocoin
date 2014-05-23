include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = octocoin-qt
noinst_LIBRARIES = liboctocoinqt.a
SUBDIRS = $(BUILD_TEST_QT)
DIST_SUBDIRS = test

# octocoin qt core #
QT_TS = \
  locale/octocoin_ach.ts \
  locale/octocoin_af_ZA.ts \
  locale/octocoin_ar.ts \
  locale/octocoin_be_BY.ts \
  locale/octocoin_bg.ts \
  locale/octocoin_bs.ts \
  locale/octocoin_ca_ES.ts \
  locale/octocoin_ca.ts \
  locale/octocoin_ca@valencia.ts \
  locale/octocoin_cmn.ts \
  locale/octocoin_cs.ts \
  locale/octocoin_cy.ts \
  locale/octocoin_da.ts \
  locale/octocoin_de_AT.ts \
  locale/octocoin_de.ts \
  locale/octocoin_el_GR.ts \
  locale/octocoin_en.ts \
  locale/octocoin_eo.ts \
  locale/octocoin_es_CL.ts \
  locale/octocoin_es_DO.ts \
  locale/octocoin_es_MX.ts \
  locale/octocoin_es.ts \
  locale/octocoin_es_UY.ts \
  locale/octocoin_et.ts \
  locale/octocoin_eu_ES.ts \
  locale/octocoin_fa_IR.ts \
  locale/octocoin_fa.ts \
  locale/octocoin_fi.ts \
  locale/octocoin_fr_CA.ts \
  locale/octocoin_fr.ts \
  locale/octocoin_gl.ts \
  locale/octocoin_gu_IN.ts \
  locale/octocoin_he.ts \
  locale/octocoin_hi_IN.ts \
  locale/octocoin_hr.ts \
  locale/octocoin_hu.ts \
  locale/octocoin_id_ID.ts \
  locale/octocoin_it.ts \
  locale/octocoin_ja.ts \
  locale/octocoin_ka.ts \
  locale/octocoin_kk_KZ.ts \
  locale/octocoin_ko_KR.ts \
  locale/octocoin_ky.ts \
  locale/octocoin_la.ts \
  locale/octocoin_lt.ts \
  locale/octocoin_lv_LV.ts \
  locale/octocoin_ms_MY.ts \
  locale/octocoin_nb.ts \
  locale/octocoin_nl.ts \
  locale/octocoin_pam.ts \
  locale/octocoin_pl.ts \
  locale/octocoin_pt_BR.ts \
  locale/octocoin_pt_PT.ts \
  locale/octocoin_ro_RO.ts \
  locale/octocoin_ru.ts \
  locale/octocoin_sah.ts \
  locale/octocoin_sk.ts \
  locale/octocoin_sl_SI.ts \
  locale/octocoin_sq.ts \
  locale/octocoin_sr.ts \
  locale/octocoin_sv.ts \
  locale/octocoin_th_TH.ts \
  locale/octocoin_tr.ts \
  locale/octocoin_uk.ts \
  locale/octocoin_ur_PK.ts \
  locale/octocoin_uz@Cyrl.ts \
  locale/octocoin_vi.ts \
  locale/octocoin_vi_VN.ts \
  locale/octocoin_zh_CN.ts \
  locale/octocoin_zh_HK.ts \
  locale/octocoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_octocoinaddressvalidator.cpp \
  moc_octocoinamountfield.cpp \
  moc_octocoingui.cpp \
  moc_octocoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

OCTOCOIN_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  octocoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_octocoin.cpp
QT_QRC = octocoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

OCTOCOIN_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  octocoinaddressvalidator.h \
  octocoinamountfield.h \
  octocoingui.h \
  octocoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/octocoin.ico \
  res/icons/octocoin.png \
  res/icons/octocoin_testnet.ico \
  res/icons/octocoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

OCTOCOIN_QT_CPP = \
  octocoin.cpp \
  octocoinaddressvalidator.cpp \
  octocoinamountfield.cpp \
  octocoingui.cpp \
  octocoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  signverifymessagedialog.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp

if ENABLE_WALLET
OCTOCOIN_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png \
  res/images/wallet_bgcoin.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

OCTOCOIN_RC = res/octocoin-qt-res.rc

liboctocoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
liboctocoinqt_a_SOURCES = $(OCTOCOIN_QT_CPP) $(OCTOCOIN_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_liboctocoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_liboctocoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# octocoin-qt binary #
octocoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
octocoin_qt_SOURCES = octocoin.cpp
if TARGET_DARWIN
  octocoin_qt_SOURCES += $(OCTOCOIN_MM)
endif
if TARGET_WINDOWS
  octocoin_qt_SOURCES += $(OCTOCOIN_RC)
endif
octocoin_qt_LDADD = liboctocoinqt.a $(LIBOCTOCOIN_SERVER)
if ENABLE_WALLET
octocoin_qt_LDADD += $(LIBOCTOCOIN_WALLET) $(LIBOCTOCOIN_SERVER_WALLET)
endif
octocoin_qt_LDADD += $(LIBOCTOCOIN_CLI) $(LIBOCTOCOIN_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
octocoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

octocoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/octocoinstrings.cpp

translate: octocoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(OCTOCOIN_QT_CPP) $(OCTOCOIN_QT_H) $(OCTOCOIN_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/octocoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name octocoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -i.bak -e '/^\*\*.*Created:/d' $@ && rm -f $@.bak
	$(SED) -i.bak -e '/^\*\*.*by:/d' $@ && rm -f $@.bak

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
