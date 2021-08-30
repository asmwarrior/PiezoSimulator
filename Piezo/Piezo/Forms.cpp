//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: MainFrame.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "Forms.h"


// Declare the bitmap loading function
extern void wxCC865InitBitmapResources();

static bool bBitmapLoaded = false;


MainFrameBase::MainFrameBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCC865InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer3 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer3);
    
    m_panel5 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    
    boxSizer3->Add(m_panel5, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizer7 = new wxBoxSizer(wxVERTICAL);
    m_panel5->SetSizer(boxSizer7);
    
    wxBoxSizer* boxSizer101 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer7->Add(boxSizer101, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxFlexGridSizer* flexGridSizer79 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer79->SetFlexibleDirection( wxBOTH );
    flexGridSizer79->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    boxSizer101->Add(flexGridSizer79, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_staticBitmap95 = new wxStaticBitmap(m_panel5, wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("piezoimg")), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0 );
    
    flexGridSizer79->Add(m_staticBitmap95, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_staticBitmap99 = new wxStaticBitmap(m_panel5, wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("circuitoimg")), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0 );
    
    flexGridSizer79->Add(m_staticBitmap99, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizer103 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer7->Add(boxSizer103, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxFlexGridSizer* flexGridSizer25 = new wxFlexGridSizer(14, 2, 0, 0);
    flexGridSizer25->SetFlexibleDirection( wxBOTH );
    flexGridSizer25->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer25->AddGrowableCol(1);
    
    boxSizer103->Add(flexGridSizer25, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_textomassa = new wxStaticText(m_panel5, wxID_ANY, wxT("Massa (m1) [g]:"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textomassa, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlMassa = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlMassa->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlMassa, 1, wxALL|wxEXPAND|wxALIGN_LEFT, WXC_FROM_DIP(5));
    
    m_textoDm = new wxStaticText(m_panel5, wxID_ANY, wxT("Distância Z (dm) [m]:"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textoDm, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlDm = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlDm->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlDm, 1, wxALL|wxEXPAND|wxALIGN_LEFT, WXC_FROM_DIP(5));
    
    m_textoCm = new wxStaticText(m_panel5, wxID_ANY, wxT("Cm:"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textoCm, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlCm = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlCm->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlCm, 1, wxALL|wxEXPAND|wxALIGN_LEFT, WXC_FROM_DIP(5));
    
    m_textoAlfa = new wxStaticText(m_panel5, wxID_ANY, wxT("Relação (alfa):"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textoAlfa, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlAlfa = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlAlfa->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlAlfa, 0, wxALL|wxEXPAND|wxALIGN_LEFT, WXC_FROM_DIP(5));
    
    m_textoCp = new wxStaticText(m_panel5, wxID_ANY, wxT("Cp [F]:"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textoCp, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlCp = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlCp->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlCp, 1, wxALL|wxEXPAND|wxALIGN_LEFT, WXC_FROM_DIP(5));
    
    m_textoR = new wxStaticText(m_panel5, wxID_ANY, wxT("R [Ω]:"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textoR, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlR = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlR->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlR, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_textoPasso = new wxStaticText(m_panel5, wxID_ANY, wxT("Passo (h) [s]:"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textoPasso, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlPasso = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlPasso->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlPasso, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_textoTempSimu = new wxStaticText(m_panel5, wxID_ANY, wxT("Tempo Simulação [s]:"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textoTempSimu, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlTempSimu = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlTempSimu->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlTempSimu, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_textoFrequencia = new wxStaticText(m_panel5, wxID_ANY, wxT("Frequência (ω) [Hz]:"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textoFrequencia, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlFrequencia = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlFrequencia->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlFrequencia, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_textoDeflexao = new wxStaticText(m_panel5, wxID_ANY, wxT("Deflexão [m]"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textoDeflexao, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlDeflexao = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlDeflexao->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlDeflexao, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_textoF = new wxStaticText(m_panel5, wxID_ANY, wxT("Força [N]"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_textoF, 0, wxALL, WXC_FROM_DIP(5));
    
    m_controlF = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_controlF->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_controlF, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxFlexGridSizer* flexGridSizer59 = new wxFlexGridSizer(0, 3, 0, 0);
    flexGridSizer59->SetFlexibleDirection( wxBOTH );
    flexGridSizer59->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    boxSizer7->Add(flexGridSizer59, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM, WXC_FROM_DIP(5));
    
    m_btnSimular = new wxButton(m_panel5, wxID_ANY, wxT("Simular"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer59->Add(m_btnSimular, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_btnLimpar = new wxButton(m_panel5, wxID_ANY, wxT("Limpar"), wxDefaultPosition, wxDLG_UNIT(m_panel5, wxSize(-1,-1)), 0);
    
    flexGridSizer59->Add(m_btnLimpar, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    SetName(wxT("MainFrameBase"));
    SetSize(wxDLG_UNIT(this, wxSize(600,600)));
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_btnSimular->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBase::OnbtnSimularClick), NULL, this);
    m_btnLimpar->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBase::OnbtnLimparClick), NULL, this);
    
}

MainFrameBase::~MainFrameBase()
{
    m_btnSimular->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBase::OnbtnSimularClick), NULL, this);
    m_btnLimpar->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBase::OnbtnLimparClick), NULL, this);
    
}
