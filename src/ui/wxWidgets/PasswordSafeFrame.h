/*
 * Copyright (c) 2003-2025 Rony Shapiro <ronys@pwsafe.org>.
 * All rights reserved. Use of the code is allowed under the
 * Artistic License 2.0 terms, as specified in the LICENSE file
 * distributed with this code, or available from
 * http://www.opensource.org/licenses/artistic-license-2.0.php
 */

/** \file PasswordSafeFrame.h
 *
 */

// Generated by DialogBlocks, Wed 14 Jan 2009 10:24:11 PM IST

#ifndef _PASSWORDSAFEFRAME_H_
#define _PASSWORDSAFEFRAME_H_

/*!
 * Includes
 */

#include <wx/aui/auibar.h>
#include <wx/aui/framemanager.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
#include <wx/treebase.h> // for wxTreeItemId
#include <wx/settings.h>
#include <wx/modalhook.h>

#include "core/PWScore.h"
#include "core/PWSFilters.h"
#include "core/RUEList.h"
#include "core/UIinterface.h"
#include "os/UUID.h"

#include "wxUtilities.h"
#include "DnDFile.h"
#include "DragBarCtrl.h"
#include "TimedTaskChain.h"

#include <tuple>
#include <utility>
#include <vector>

/*!
 * Forward declarations
 */

////@begin forward declarations
class GridCtrl;
class TreeCtrl;
class StatusBar;
////@end forward declarations
class SystemTray;
class GuiInfo;
struct SelectionCriteria;
class DragBarCtrl;
class PasswordSafeSearch;
class DnDFile;

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_PASSWORDSAFEFRAME 10001
#define ID_RECENTSAFES 10440
#define ID_MENU_CLEAR_MRU 10011
#define ID_EXPORTMENU 10013
#define ID_EXPORT2OLD1XFORMAT 10013
#define ID_EXPORT2V2FORMAT 10014
#define ID_EXPORT2V4FORMAT 10015
#define ID_EXPORT2PLAINTEXT 10016
#define ID_EXPORT2XML 10017
#define ID_IMPORTMENU 10018
#define ID_IMPORT_PLAINTEXT 10019
#define ID_IMPORT_XML 10020
#define ID_IMPORT_KEEPASS 10021
#define ID_MERGE 10022
#define ID_COMPARE 10023
#define ID_EDIT 10024
#define ID_RENAME 10025
#define ID_DUPLICATEENTRY 10026
#define ID_PROTECT 10134
#define ID_ADDGROUP 10027
#define ID_CLEARCLIPBOARD 10028
#define ID_COPYPASSWORD 10029
#define ID_COPYUSERNAME 10030
#define ID_COPYAUTHCODE 10130
#define ID_SHOWAUTHCODE 10131
#define ID_TIMER_DISPLAY_TOTP 10132
#define ID_TIMER_COPY_TOTP 10133
#define ID_COPYNOTESFLD 10031
#define ID_COPYURL 10032
#define ID_BROWSEURL 10033
#define ID_AUTOTYPE 10034
#define ID_VIEWATTACHMENT 10434
#define ID_GOTOBASEENTRY 10035
#define ID_LIST_VIEW 10036
#define ID_TREE_VIEW 10037
#define ID_SHOWHIDE_TOOLBAR 10038
#define ID_SHOWHIDE_DRAGBAR 10039
#define ID_EXPANDALL 10040
#define ID_COLLAPSEALL 10041
#define ID_SHOWHIDE_UNSAVED 10002
#define ID_SHOW_ALL_EXPIRY 10125
#define ID_FILTERMENU 10042
#define ID_EDITFILTER 10043
#define ID_APPLYFILTER 10044
#define ID_MANAGEFILTERS 10045
#define ID_CUSTOMIZETOOLBAR 10046
#define ID_CHANGEFONTMENU 10047
#define ID_CHANGETREEFONT 10048
#define ID_CHANGEADDEDITFONT 10348
#define ID_CHANGEPSWDFONT 10049
#define ID_CHANGENOTESFONT 10349
#define ID_CHANGEVKBFONT 10350
#define ID_REPORTSMENU 10050
#define ID_REPORT_COMPARE 10051
#define ID_REPORT_FIND 10052
#define ID_REPORT_IMPORTTEXT 10053
#define ID_REPORT_IMPORTXML 10054
#define ID_REPORT_MERGE 10055
#define ID_REPORT_VALIDATE 10056
#define ID_CHANGECOMBO 10057
#define ID_BACKUP 10058
#define ID_RESTORE 10059
#define ID_PWDPOLSM 10215
#define ID_GENERATEPASSWORD 10330
#define ID_SETDATABASEID 10500
#define ID_YUBIKEY_MNG 10010
#define ID_LANGUAGEMENU 10011
#define ID_VISITWEBSITE 10012
#define ID_MRUMENU 10061
#define ID_SUBVIEWSMENU 10070
#define ID_SHOW_LAST_FIND_RESULTS 10073
#define ID_SORT_TREE_MENU 10310
#define ID_SORT_TREE_BY_GROUP 10311
#define ID_SORT_TREE_BY_NAME 10312
#define ID_SORT_TREE_BY_DATE 10313
#define ID_SHOW_EMPTY_GROUP_IN_FILTER 10314
#define ID_REPORT_SYNCHRONIZE 10315
#define ID_REPORT_IMPORTKEEPASS_TXT 10316
#define ID_REPORT_IMPORTKEEPASS_CSV 10317
#define ID_REPORT_EXPORTTEXT 10318
#define ID_REPORT_EXPORTXML 10319
#define ID_REPORT_EXPORT_DB 10320
#define ID_CHANGEMODE 10321
#define ID_STATUSBAR 10000
#define SYMBOL_PASSWORDSAFEFRAME_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxMINIMIZE_BOX|wxMAXIMIZE_BOX|wxCLOSE_BOX
#define SYMBOL_PASSWORDSAFEFRAME_TITLE _("PasswordSafe")
#define SYMBOL_PASSWORDSAFEFRAME_IDNAME ID_PASSWORDSAFEFRAME
#define SYMBOL_PASSWORDSAFEFRAME_SIZE wxSize(400, 300)
#define SYMBOL_PASSWORDSAFEFRAME_POSITION wxDefaultPosition
////@end control identifiers
enum {
  ID_EDITMENU_FIND_NEXT  = 10220,
  ID_EDITMENU_FIND_PREVIOUS,
  ID_PASSWORDSUBSET,
  ID_PASSWORDQRCODE,
  ID_COPYEMAIL,
  ID_RUNCOMMAND,
  ID_COPYRUNCOMMAND,
  ID_BROWSEURLPLUS,
  ID_SENDEMAIL,
  ID_CREATESHORTCUT,
  ID_EDITBASEENTRY,
  ID_SYSTRAY_RESTORE,
  ID_SYSTRAY_LOCK,
  ID_SYSTRAY_UNLOCK,
  ID_SYSTRAY_CLOSE,
  ID_SYSTRAY_EXIT,
  ID_SYSTRAY_CLEAR_RUE,
  ID_TRAYRECENT_ENTRY_HELP1,
  ID_TRAYRECENT_ENTRY_HELP2,
  ID_TOOLBAR_NEW,
  ID_TOOLBAR_CLASSIC,
  ID_SYNCHRONIZE,
  ID_LOCK_SAFE,
  ID_UNLOCK_SAFE,

  // languages
  ID_LANGUAGE_BEGIN,
  ID_LANGUAGE_CHINESE,
  ID_LANGUAGE_DANISH,
  ID_LANGUAGE_DUTCH,
  ID_LANGUAGE_ENGLISH,
  ID_LANGUAGE_FRENCH,
  ID_LANGUAGE_GERMAN,
  ID_LANGUAGE_HUNGARIAN,
  ID_LANGUAGE_ITALIAN,
  ID_LANGUAGE_KOREAN,
  ID_LANGUAGE_POLISH,
  ID_LANGUAGE_RUSSIAN,
  ID_LANGUAGE_SPANISH,
  ID_LANGUAGE_SLOVENIAN,
  ID_LANGUAGE_SWEDISH,
  ID_LANGUAGE_END
};

#if wxVERSION_NUMBER >= 3103
#define CurrentBackgroundColor2    (wxSystemSettings::GetAppearance().IsUsingDarkBackground() ? wxColor(29, 30, 32) : *wxWHITE)
#else
#define CurrentBackgroundColor2    (*wxWHITE)
#endif

/*!
 * PasswordSafeFrame class declaration
 */

class PasswordSafeFrame : public wxFrame, public Observer, public wxModalDialogHook
{
    DECLARE_CLASS( PasswordSafeFrame )
    DECLARE_EVENT_TABLE()

private:
    enum class ViewType { TREE, GRID };
    enum class TreeSortType { GROUP, NAME, DATE };
public:
  /// Constructors
  PasswordSafeFrame(PWScore &core);
  PasswordSafeFrame(wxWindow* parent, PWScore &core,
                    wxWindowID id = SYMBOL_PASSWORDSAFEFRAME_IDNAME, const wxString& caption = SYMBOL_PASSWORDSAFEFRAME_TITLE, const wxPoint& pos = SYMBOL_PASSWORDSAFEFRAME_POSITION, const wxSize& size = SYMBOL_PASSWORDSAFEFRAME_SIZE, long style = SYMBOL_PASSWORDSAFEFRAME_STYLE );

  bool Create( wxWindow* parent, wxWindowID id = SYMBOL_PASSWORDSAFEFRAME_IDNAME, const wxString& caption = SYMBOL_PASSWORDSAFEFRAME_TITLE, const wxPoint& pos = SYMBOL_PASSWORDSAFEFRAME_POSITION, const wxSize& size = SYMBOL_PASSWORDSAFEFRAME_SIZE, long style = SYMBOL_PASSWORDSAFEFRAME_STYLE );

  /// Destructor
  ~PasswordSafeFrame();

  /// Initialises member variables
  void Init();

  /// Creates the controls and sizers
  void CreateControls();
  void CreateMenubar();

  ItemList::size_type GetNumEntries() const {return m_core.GetNumEntries();}

  bool CanCloseDialogs() const;
  void CloseDB(std::function<void(bool)> callback);
  
  /* Observer Interface Implementation */

  /// Implements Observer::DatabaseModified(bool)
  void DatabaseModified(bool bChanged) override;

  /// Implements Observer::UpdateGUI(UpdateGUICommand::GUI_Action, const pws_os::CUUID&, CItemData::FieldType)
  void UpdateGUI(UpdateGUICommand::GUI_Action ga, const pws_os::CUUID &entry_uuid, CItemData::FieldType ft = CItemData::START) override;

////@begin PasswordSafeFrame event handler declarations

  /// wxEVT_CHAR_HOOK event handler for WXK_ESCAPE
  void OnChar( wxKeyEvent& evt );

  /// wxEVT_CLOSE_WINDOW event handler for ID_PASSWORDSAFEFRAME
  void OnCloseWindow( wxCloseEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_NEW
  void OnNewClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_OPEN
  void OnOpenClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_CLOSE
  void OnCloseClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_SAVE
  void OnSaveClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_SAVEAS
  void OnSaveAsClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_PROPERTIES
  void OnPropertiesClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_EXIT
  void OnExitClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_ADD
  void OnAddClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_EDIT
  void OnEditClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_DELETE
  void OnDeleteClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_PROTECT
  void OnProtectUnprotectClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_CLEARCLIPBOARD
  void OnClearClipboardClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_COPYPASSWORD
  void OnCopyPasswordClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_COPYUSERNAME
  void OnCopyUsernameClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_COPYAUTHCODE
  void OnCopyAuthCodeClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_SHOWAUTHCODE
  void OnShowAuthCodeClick( wxCommandEvent& event );

  /// wxEVT_TIMER_EVENT event handler for ID_TIMER_DISPLAY_TOTP
  void OnTotpCountdownTimer( wxTimerEvent& event );

  /// wxEVT_TIMER_EVENT event handler for ID_TIMER_COPY_TOTP
  void OnTotpCopyAuthCodeTimer( wxTimerEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_COPYNOTESFLD
  void OnCopyNotesFieldClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_COPYURL
  void OnCopyUrlClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_LIST_VIEW
  void OnListViewClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_TREE_VIEW
  void OnTreeViewClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_SORT_TREE_BY_GROUP
  void OnSortByGroupClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_SORT_TREE_BY_NAME
  void OnSortByNameClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_SORT_TREE_BY_DATE
  void OnSortByDateClick( wxCommandEvent& event );
  
  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_SHOW_EMPTY_GROUP_IN_FILTER
  void OnShowGroupInFilterClick( wxCommandEvent& event );
  
  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_SHOWHIDE_UNSAVED
  void OnShowUnsavedEntriesClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_SHOW_ALL_EXPIRY
  void OnShowAllExpiryClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_SHOW_LAST_FIND_RESULTS
  void OnShowLastFindClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_CHANGECOMBO
  void OnChangePasswordClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_PREFERENCES
  void OnPreferencesClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_PWDPOLSM
  void OnPwdPolsMClick( wxCommandEvent& event );

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_LANGUAGEMENU
  void OnLanguageClick( wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_ABOUT
  void OnAboutClick( wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_GENERATE_PASSWORD
  void OnGeneratePassword( wxCommandEvent& event );

#ifndef NO_YUBI
  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_YUBIKEY_MNG
  void OnYubikeyMngClick( wxCommandEvent& event );
#endif /* NO_YUBI */
////@end PasswordSafeFrame event handler declarations

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxEVT_FIND
  void OnFindClick( wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_EDITMENU_FIND_NEXT
  void OnFindNext(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_EDITMENU_FIND_PREVIOUS
  void OnFindPrevious(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_BROWSEURL
  void OnBrowseUrl(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_SENDEMAIL
  void OnSendEmail(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_COPYRUNCOMMAND
  void OnCopyRunCmd( wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_RUNCOMMAND
  void OnRunCommand(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_AUTOTYPE
  void OnAutoType(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_VIEWATTACHMENT
  void OnViewAttachment(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_BROWSEURLPLUS
  void OnBrowseUrlAndAutotype(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_GOTOBASEENTRY
  void OnGotoBase(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_EDITBASEENTRY
  void OnEditBase(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_CREATESHORTCUT
  void OnCreateShortcut(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_DUPLICATEENTRY
  void OnDuplicateEntry(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_MENU_CLEAR_MRU
  void OnClearRecentHistory(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_IMPORT_PLAINTEXT
  void OnImportText(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_IMPORT_XML
  void OnImportXML(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_IMPORT_KEEPASS
  void OnImportKeePass(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for EXPORT2OLD1XFORMAT & ID_EXPORT2V[23]FORMAT
  void OnExportVx(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_EXPORT2PLAINTEXT
  void OnExportPlainText(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_EXPORT2XML
  void OnExportXml(wxCommandEvent& evt);

  /// Called when one of the MRU db's is selected from File menu
  void OnOpenRecentDB(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_COPYEMAIL
  void OnCopyEmailClick( wxCommandEvent& evt);

  /// wxEVT_UPDATE_UI event handler for all command ids
  void OnUpdateUI(wxUpdateUIEvent& evt);
  
  // Supporting Function for OnUpdateUI
  bool CheckReportPresent(int iAction);

  /// wxEVT_UPDATE_UI event handler for ID_MENU_CLEAR_MRU
  void OnUpdateClearRecentDBHistory(wxUpdateUIEvent& evt);

  /// Handler for all EVT_MENU_OPEN types events for all menus
  void OnUpdateMenu(wxMenuEvent& evt);

  /// wxEVT_ICONIZE event handler
  void OnIconize(wxIconizeEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_LOCK_SAFE
  void OnLockSafe(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_UNLOCK_SAFE
  void OnUnlockSafe(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_UNDO
  void OnUndo(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_REDO
  void OnRedo(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_EXPANDALL
  void OnExpandAll(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_COLLAPSEALL
  void OnCollapseAll(wxCommandEvent& evt);
  
  /// wxEVT_COMMAND_MENU_SELECTED event handler for IID_REPORT_COMPARE
  void OnShowReportCompare(wxCommandEvent& evt);
  
  /// wxEVT_COMMAND_MENU_SELECTED event handler for IID_REPORT_SYNCHRONIZE
  void OnShowReportSynchronize(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for IID_REPORT_MERGE
  void OnShowReportMerge(wxCommandEvent& WXUNUSED(evt));

  /// wxEVT_COMMAND_MENU_SELECTED event handler for IID_REPORT_IMPORTTEXT
  void OnShowReportImportText(wxCommandEvent& WXUNUSED(evt));

  /// wxEVT_COMMAND_MENU_SELECTED event handler for IID_REPORT_IMPORTXML
  void OnShowReportImportXML(wxCommandEvent& WXUNUSED(evt));
 
  /// wxEVT_COMMAND_MENU_SELECTED event handler for IID_REPORT_IMPORTKEEPASS_TXT
  void OnShowReportImportKeePassV1_TXT(wxCommandEvent& WXUNUSED(evt));
  
  /// wxEVT_COMMAND_MENU_SELECTED event handler for IID_REPORT_IMPORTKEEPASS_CSV
  void OnShowReportImportKeePassV1_CSV(wxCommandEvent& WXUNUSED(evt));
  
  /// wxEVT_COMMAND_MENU_SELECTED event handler for IID_REPORT_EXPORTTEXT
  void OnShowReportExportText(wxCommandEvent& WXUNUSED(evt));

  /// wxEVT_COMMAND_MENU_SELECTED event handler for IID_REPORT_EXPORTXML
  void OnShowReportExportXML(wxCommandEvent& WXUNUSED(evt));
  
  /// wxEVT_COMMAND_MENU_SELECTED event handler for IID_REPORT_EXPORT_DB
  void OnShowReportExportDB(wxCommandEvent& WXUNUSED(evt));
  
  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_REPORT_FIND
  void OnShowReportFind(wxCommandEvent& WXUNUSED(evt));
  
  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_REPORT_VALIDATE
  void OnShowReportValidate(wxCommandEvent& WXUNUSED(evt));
  
  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_CHANGEMODE
  void OnChangeMode(wxCommandEvent& WXUNUSED(evt));
  
  // Supporting function for OnShowReport... function
  void RunShowReport(int iAction);
  
  void OnChangeTreeFont(wxCommandEvent& evt);
  void OnChangeAddEditFont(wxCommandEvent& evt);
  void OnChangePasswordFont(wxCommandEvent& evt);
  void OnChangeNotesFont(wxCommandEvent& evt);
  void OnChangeVirtualKeyboardFont(wxCommandEvent& evt);

  void OnShowHideToolBar(wxCommandEvent& evt);
  void OnShowHideDragBar(wxCommandEvent& evt);

  void OnMergeAnotherSafe(wxCommandEvent& evt);
  void OnSynchronize(wxCommandEvent& evt);
  void OnCompare(wxCommandEvent& evt);

  /// wxEVT_COMMAND_MENU_SELECTED event handler for ID_TOOLBAR_CLASSIC and ID_TOOLBAR_NEW
  void OnChangeToolbarType(wxCommandEvent& evt);

  void OnBackupSafe(wxCommandEvent& evt);
  void OnRestoreSafe(wxCommandEvent& evt);

  void OnEditFilter(wxCommandEvent& evt);
  void OnApplyFilter(wxCommandEvent& evt);
  void OnManageFilters(wxCommandEvent& evt);

  void OnVisitWebsite(wxCommandEvent&);

  void OnPasswordSubset(wxCommandEvent& evt);
  void OnPasswordQRCode(wxCommandEvent& evt);

////@begin PasswordSafeFrame member function declarations

  /// Retrieves bitmap resources
  wxBitmap GetBitmapResource(const wxString& name);

  /// Retrieves icon resources
  wxIcon GetIconResource(const wxString& name);

////@end PasswordSafeFrame member function declarations

/// Should we show tooltips?
  static bool ShowToolTips();

  // Overridden virtuals
  virtual bool Show(bool show = true) override;
  virtual void SetTitle(const wxString& title) override;
  virtual void SetFocus() override;

  // PasswordSafe specifics:
  int Load(const StringX &passwd);

  // Highlights the item.  Used for search
  void SelectItem(const pws_os::CUUID& uuid);
  // For predefined "last search" filter:
  void SetFilterFindEntries(UUIDVector *pvFoundUUIDs);
  
  int ImportFilterXMLFile(const FilterPool fpool,
                          const StringX &strXMLData,
                          const stringT &strXMLFileName,
                          const stringT &strXSDFileName, stringT &strErrors,
                          Asker *pAsker, Reporter *pReporter) {
    return m_MapAllFilters.ImportFilterXMLFile(fpool, strXMLData,
                                               strXMLFileName,
                                               strXSDFileName, strErrors, pAsker, pReporter);
  }
  
  
  ItemListConstIter FindEntry(const pws_os::CUUID& uuid) const {return m_core.Find(uuid);}
  ItemListConstIter GetEntryIter() const {return m_core.GetEntryIter();}
  ItemListConstIter GetEntryEndIter() const {return m_core.GetEntryEndIter();}

  void Execute(Command *pcmd, PWScore *pcore = nullptr);

  void SetViewType(const ViewType& view) { m_currentView = view; }
  bool IsTreeView() const { return m_currentView == ViewType::TREE; }
  bool IsGridView() const { return m_currentView == ViewType::GRID; }
 
  void SetTreeSortType(const TreeSortType& view) { m_currentSort = view; }
  bool IsTreeSortGroup() const { return m_currentSort == TreeSortType::GROUP; }
  bool IsTreeSortName() const { return m_currentSort == TreeSortType::NAME; }
  bool IsTreeSortDate() const { return m_currentSort == TreeSortType::DATE; }
  void UpdateTreeSortMenu();

  void RefreshViews();
  void FlattenTree(OrderedItemList& olist);

  void DispatchDblClickAction(CItemData &item); // called by grid/tree
  void UpdateSelChanged(const CItemData *pci);  // ditto

  /// Centralized handling of right click in the grid or the tree view
  void OnContextMenu(const CItemData* item);

  /// Called by wxTaskbarIcon derived class on clicking of system tray's Restore menu item
  void UnlockSafe(bool restoreUI, bool iconizeOnFailure);

  /// Called by app when the inactivity timer arrives
  void IconizeOrHideAndLock();

  void HideUI(bool lock);

  /// Called by system tray unlock the UI (and optionally restore the main window)
  void UnlockUI(bool restoreFrame);

  void GetAllMenuItemStrings(std::vector<RUEntryData>& vec) const { m_RUEList.GetAllMenuItemStrings(vec); }
  void DeleteRUEntry(size_t index) { m_RUEList.DeleteRUEntry(index); }

  void ClearRUEList() { m_RUEList.ClearEntries(); }
  void OnUpdateClearRecentHistory();

  void ViewReport(CReport& rpt);

  CItemData *GetSelectedEntry() const;
  CItemData* GetBaseEntry(const CItemData *item) const;
  const CItemData* GetTotpItem(const CItemData *item) const;
  bool IsItemNormalOrBase(const CItemData *item) const;
  bool HasItemTwoFactorKey(const CItemData *item) const;
  int GetTotpCountdownInterval() const { return s_TotpCountdownInterval; }
  void CopyAuthCodeToClipboard(const CItemData *item) { DoCopyAuthCode(item); }
  void StartTotpDisplayAuthCode();
  void StopTotpDisplayAuthCode();
  void StartTotpCopyAuthCode();
  void StopTotpCopyAuthCode();
  void UpdateTotpDisplayOnBar(const CItemData *item);
  std::pair<StringX, StringX> GetTotpData(const CItemData *item);
  PWSTotp::TOTP_Result GetTwoFactorAuthenticationCode(const CItemData& ci, StringX& sxAuthCode, double* pRatio = nullptr);
  CItemData *GetSelectedEntry(const wxCommandEvent& evt, CItemData &rueItem) const;
  wxString GetCurrentSafe() const { return towxstring(m_core.GetCurFile()); }
  StringX GetCurrentFile() const { return m_core.GetCurFile(); }
  bool IsEntryMarked();

  void SetTrayStatus(bool locked);
  void SetTrayClosed();
  void ShowTrayIcon();

  void ShowSearchBar();
  void HideSearchBar();

  void ShowTotpBar();
  void HideTotpBar();

  bool IsClosed() const;
  bool IsLocked() const;
  /// Get top dialog (shown or hidden)
  wxTopLevelWindow* GetTopWindow() const;
  static void DisplayFileWriteError(int rc, const StringX &fname);
  
  bool LaunchBrowser(const wxString &csURL, const StringX &sxAutotype,
    const std::vector<size_t> &vactionverboffsets, bool bDoAutotype) const;


////@begin PasswordSafeFrame member variables
  GridCtrl* m_grid;
  TreeCtrl* m_tree;
  StatusBar* m_statusBar;
////@end PasswordSafeFrame member variables

private:

  enum class SaveType { INVALID = -1, NORMALEXIT = 0, IMMEDIATELY, 
                        ENDSESSIONEXIT, WTSLOGOFFEXIT, FAILSAFESAVE };

  //we need to restrict the size of individual text fields, to prevent creating
  //enormous databases.  See the comments in DboxMain.h
  enum { MAXTEXTCHARS = 30000 };

  int New();
  int NewFile(StringX &fname);
  int DoOpen(const wxString& title);
  int Open(const wxString &fname); // prompt for password, try to Load.
  int SaveIfChanged();
  int SaveAs(void);
  int Save(SaveType savetype = SaveType::INVALID);
  int SaveImmediately();
  void ShowGrid(bool show = true);
  void ShowTree(bool show = true);
  void ClearAppData();
  bool ReloadDatabase(const StringX& password);
  bool SaveAndClearDatabaseOnLock();
  void CleanupAfterReloadFailure(bool tellUser);
  Command *DeleteItem(CItemData *pci, wxTreeItemId root = 0);
  Command *Delete(wxTreeItemId tid, wxTreeItemId root = 0); // for group delete
  void UpdateAccessTime(CItemData &ci);

  void CreateMainToolbar();
  void RefreshToolbarButtons();
  void UpdateMainToolbarBitmaps();
  void UpdateMainToolbarSeparators(bool insert);
  void DeleteMainToolbarSeparators();
  wxAuiPaneInfo& GetMainToolbarPane();
  wxAuiToolBar* GetToolBar() { return m_Toolbar; }

  void CreateDragBar();
  void UpdateDragbarTooltips();
  wxAuiPaneInfo& GetDragBarPane();
  DragBarCtrl* GetDragBar() { return m_Dragbar; };

  void CreateTotpBar();
  wxAuiPaneInfo& GetTotpBarPane();

  void CreateSearchBar();
  wxAuiPaneInfo& GetSearchBarPane();
  PasswordSafeSearch* GetSearchBar() { return m_search; };
  void UpdateSearchBarVisibility();

  void CreateStatusBar();

  long GetEventRUEIndex(const wxCommandEvent& evt) const;
  bool IsRUEEvent(const wxCommandEvent& evt) const;
  void RebuildGUI(const int iView = iBothViews);
  void SaveSettings();
  void LockDb();
  void TryIconize(int nAttempts = 5);
  bool ChangeMode(bool promptUser);

  void Merge(const StringX &sx_Filename2, PWScore *pothercore, const SelectionCriteria& selection);
  int MergeDependents(PWScore *pothercore, MultiCommands *pmulticmds,
                              uuid_array_t &base_uuid, uuid_array_t &new_base_uuid,
                              const bool bTitleRenamed, wxString &timeStr,
                              const CItemData::EntryType et,
                              std::vector<StringX> &vs_added);

  // Do* member functions for right-click and menu-accessible actions
  void DoCopyPassword(CItemData &item);
  void DoCopyNotes(CItemData &item);
  void DoCopyUsername(CItemData &item);
  void DoCopyAuthCode(const CItemData *item);
  void DoCopyURL(CItemData &item);
  void DoCopyEmail(CItemData &item);
  void DoCopyRunCmd(CItemData &item);
  void DoEdit(CItemData item);
  void DoAutotype(CItemData &item);
  void DoAutotype(const StringX& sx_autotype, const std::vector<size_t>& vactionverboffsets);
  void DoBrowse(CItemData &item, bool bAutotype);
  void DoRun(CItemData &item);
  void DoEmail(CItemData &item);
  void DoPasswordSubset(CItemData *item);
  void DoEditBase();

  // These 3 fns are called via wxEvtHandler::CallAfter in sequence for autotyping
  void MinimizeOrHideBeforeAutotyping();
  void MaybeRestoreUI(bool autotype_err, wxString autotype_err_msg);

  template <class ExportType>
  void DoExportText();

  /// Adds a sub menu with all supported languages to a given wxMenu
  void AddLanguageMenu(wxMenu* parent);

  /// Adds a language to internal list of supported languages by this application
  void AddLanguage(int menu_id, wxLanguage lang_id, const wxString& lang_name);

  /// Update status bar - call when stuff changes:
  /// File open, double-click, modify, r-o r/w, filter...
  void UpdateStatusBar();
  void UpdateMenuBar();
  void UpdateLastClipboardAction(const CItemData::FieldType field);

  void ChangeFontPreference(const PWSprefs::StringPrefs fontPreference);
  
  enum CloseFlags { CLOSE_NORMAL = 0, CLOSE_FORCED = 1, LEAVE_MAIN = 2, HIDE_ON_VETO = 4 };
  void CloseAllWindows(TimedTaskChain* taskChain, CloseFlags flags, std::function<void(bool success)> onFinish);
  bool IsCloseInProgress() const;

  void SaveLayoutPreferences();
  bool LoadLayoutPreferences();

  void DoCreateShortcut(CItemData* item);
  void DoDeleteItems(bool askConfirmation, bool isGroup);
  void DoImportXML(wxString filename);
  void DoImportText(wxString filename);
  void DoImportKeePass(wxString filename);
  void DoManageFilters();
  void DoPwdPolsMClick();
  void DoEditFilter();
  void DoGeneratePassword();
  void DoChangePassword();
  void DoPasswordQRCode(CItemData* item);
  void DoPropertiesClick();
  void DoMergeAnotherSafe(wxString filename);
  void DoRestoreSafe();
  void DoChangeMode();
  void DoPreferencesClick();
  void DoSynchronize(wxString filename);
  void DoCompare();
  void DoViewAttachment(CItemData* item);

#ifndef NO_YUBI
  void DoYubikeyMngClick();
#endif /* NO_YUBI */  

  PWScore &m_core;
  ViewType m_currentView;
  TreeSortType m_currentSort;
  PasswordSafeSearch* m_search;
  SystemTray* m_sysTray;
  bool m_bRestoredDBUnsaved;
  CRUEList m_RUEList;
  GuiInfo* m_guiInfo;
  bool m_bTSUpdated;
  wxString m_savedDBPrefs;

  enum {iListOnly = 1, iTreeOnly = 2, iBothViews = 3};

  /*
   * The map associates menu item id's with language specific data represented by a tuple.
   * The tuple consists of the wxWidgets language identifier, the language name as wxString
   * as it should appear in the menu and of an indicator whether the language can be
   * activated or not.
   */
  std::map<int, std::tuple<wxLanguage, wxString, bool> > m_languages;

  // The selected language menu id
  int m_selectedLanguage;
  void RegisterLanguageMenuItems();
  // we need to prevent multiple call to db (un)locker and UI hider
  // These mutexes must not be recursive!
  wxMutex m_dblockMutex, m_hideUIMutex;

  // Filter-related stuff
  PWSFilterManager m_FilterManager;
  // Current filter
  st_filters &CurrentFilter() {return m_FilterManager.m_currentfilter;}
  void ResetFilters();
  
  virtual int Enter(wxDialog* dialog) override;
  virtual void Exit(wxDialog* dialog) override;
  
  std::vector<wxTopLevelWindow*> GetTopLevelWindowsList() const;
  void HideTopLevelWindows();
  void ShowHiddenWindows(bool raise);
  
  // Global Filters
  PWSFilters m_MapAllFilters;     // Includes DB and temporary (added, imported, autoloaded etc.)
  FilterPool m_currentfilterpool; // Filter pool of the current active filter
  stringT m_selectedfiltername;   // Is the selected active filter
  
  enum {NONE, EXPIRY, UNSAVED, LASTFIND} m_CurrentPredefinedFilter;
  bool m_bFilterActive;
  bool m_bShowEmptyGroupsInFilter;
  void ApplyFilters();
  wxMenuItem *m_ApplyClearFilter; // To change between Apply and Clear, without searching of menu item

  bool m_InitialTreeDisplayStatusAtOpen;

  wxString m_LastClipboardAction;
  CItem::FieldType m_LastAction;  // TODO: Check how this is used by Windows version

  friend class DnDFile;
  friend class TreeCtrl;
  friend class PWSafeApp;

  wxAuiManager m_AuiManager;
  wxAuiToolBar* m_Toolbar;
  DragBarCtrl* m_Dragbar;

  CItemData *m_TotpLastSelectedItem = nullptr;
  wxTimer *m_TotpCountdownTimer = nullptr;
  wxTimer *m_TotpCopyAuthCodeTimer = nullptr;
  wxStaticText* m_TotpStaticText = nullptr;
  static int s_TotpCountdownInterval;
  static int s_TotpCalculationInterval;

  // top-level windows that we hide while locking the UI
  std::vector<wxTopLevelWindow*> m_hiddenWindows;
  std::vector<wxDialog*> m_shownDialogs;
  wxWindowDisabler* m_closeDisabler = nullptr; // disable all windows while waiting for close
  wxTopLevelWindow* m_pengingCloseWindow = nullptr; // current window that processing close event
};

BEGIN_DECLARE_EVENT_TYPES()
DECLARE_EVENT_TYPE(wxEVT_GUI_DB_PREFS_CHANGE, -1)
END_DECLARE_EVENT_TYPES()

#endif // _PASSWORDSAFEFRAME_H_
