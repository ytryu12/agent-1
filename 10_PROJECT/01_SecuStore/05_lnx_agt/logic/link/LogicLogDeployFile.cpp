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

//---------------------------------------------------------------------------


#include "stdafx.h"
#include "com_struct.h"
#include "LogicLogDeployFile.h"

//---------------------------------------------------------------------------

CLogicLogDeployFile*		t_LogicLogDeployFile = NULL;

//---------------------------------------------------------------------------

CLogicLogDeployFile::CLogicLogDeployFile()
{	
	m_strLogicName = "logic log deploy file";
}
//---------------------------------------------------------------------------

CLogicLogDeployFile::~CLogicLogDeployFile()
{
}
//---------------------------------------------------------------------------

void		CLogicLogDeployFile::AnalyzePkt_LogDeployFile(PPKT_DATA pkt_data)
{
	InitBaseMember(pkt_data);
	switch(m_nPktCode)
    {
        default:
        {
        	WriteLogE("[%s] not define pkt code from console : [%d][%d]", m_strLogicName.c_str(), m_nPktType, m_nPktCode);
            return;
        }
    }
    return;
}
//---------------------------------------------------------------------------