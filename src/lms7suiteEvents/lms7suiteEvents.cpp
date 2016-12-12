#include "lms7suiteEvents.h"

wxDEFINE_EVENT(CONTROL_PORT_CONNECTED, wxCommandEvent);
wxDEFINE_EVENT(CONTROL_PORT_DISCONNECTED, wxCommandEvent);
wxDEFINE_EVENT(DATA_PORT_CONNECTED, wxCommandEvent);
wxDEFINE_EVENT(DATA_PORT_DISCONNECTED, wxCommandEvent);
wxDEFINE_EVENT(CGEN_FREQUENCY_CHANGED, wxCommandEvent);
wxDEFINE_EVENT(LOG_MESSAGE, wxCommandEvent);
wxDEFINE_EVENT(LMS7_TXBAND_CHANGED, wxCommandEvent);
wxDEFINE_EVENT(LMS7_RXPATH_CHANGED, wxCommandEvent);
wxDEFINE_EVENT(READ_ALL_VALUES, wxCommandEvent);
wxDEFINE_EVENT(WRITE_ALL_VALUES, wxCommandEvent);
wxDEFINE_EVENT(LMS_CHANGED, wxCommandEvent);
