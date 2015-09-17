// Generated by binpac_quickstart

#ifndef ANALYZER_PROTOCOL_C12_22_C12_22_H
#define ANALYZER_PROTOCOL_C12_22_C12_22_H

#include "events.bif.h"


#include "analyzer/protocol/udp/UDP.h"

#include "c12_22_pac.h"

namespace analyzer { namespace c12_22 {

class C12_22_Analyzer

: public analyzer::Analyzer {

public:
	C12_22_Analyzer(Connection* conn);
	virtual ~C12_22_Analyzer();

	// Overriden from Analyzer.
	virtual void Done();
	
	virtual void DeliverPacket(int len, const u_char* data, bool orig,
					uint64 seq, const IP_Hdr* ip, int caplen);
	

	static analyzer::Analyzer* InstantiateAnalyzer(Connection* conn)
		{ return new C12_22_Analyzer(conn); }

protected:
	binpac::C12_22::C12_22_Conn* interp;
	
};

} } // namespace analyzer::* 

#endif