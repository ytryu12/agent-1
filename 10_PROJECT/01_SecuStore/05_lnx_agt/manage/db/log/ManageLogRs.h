/*
 * Copyright (C) 2021-2026 ASHINi Corp. 
 * 
 * This program is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public 
 * License as published by the Free Software Foundation; either 
 * version 3 of the License, or any later version. 
 * 
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details. 
 * 
 * You should have received a copy of the GNU General Public 
 * License along with this program. If not, see <https://www.gnu.org/licenses/>.   
 *  
 * 
 */

#ifndef ManageLogRsH
#define ManageLogRsH
//---------------------------------------------------------------------------

class CManageLogRs : public CManageBase<DB_LOG_RS>
{
public:
	INT32		LoadDBMS();

public:
	INT32					AddLogRs(DB_LOG_RS&	data);
    INT32					EditLogRs(DB_LOG_RS&	data);
    INT32					DelLogRs(UINT32 nID);

public:
	INT32					SetPktSync(TListPVOID& tIDList);

public:
	INT32					SetPkt(MemToken& SendToken);
	INT32					SetPkt(PDB_LOG_RS pdata, MemToken& SendToken);
	INT32					GetPkt(MemToken& RecvToken, DB_LOG_RS& data);

	INT32					SetPkt_Link(MemToken& SendToken);

public:
	CManageLogRs();
    ~CManageLogRs();

};

extern CManageLogRs*	t_ManageLogRs;

#endif
