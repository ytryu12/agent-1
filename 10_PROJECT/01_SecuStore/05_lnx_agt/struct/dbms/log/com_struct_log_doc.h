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

#ifndef DB_LOG_DOC_H_348683B5_F316_4a4d_842D_63E68B189A5D
#define DB_LOG_DOC_H_348683B5_F316_4a4d_842D_63E68B189A5D

typedef struct _db_log_doc
{
    _db_log_doc()
    {
        _init();        
    }

	void _init()
	{
		nID 				= 0;
		nUsedFlag			= 1;
		nRegDate			= 0;
		nEvtTime 			= 0;
		nEvtErrCode			= ERR_SUCCESS;
		nSkipTarget			= 0;

		nNotifyType 		= 0;
		nNotifyID			= 0;

		nHostID				= 0;
		nUserID				= 0;
		nPolicyType			= 0;
		nOpType 			= 0;
		nRegSvrID			= 0;
		nSyncSvrStep		= 0;

		nRemoveTime			= 0;
		nBackupType			= 0;
		nBackupTime			= 0;

		strSubjectPath		= "";
		strSubjectName		= "";
		strObjectPath		= "";
		strObjectName		= "";
		strObjectPathW		= L"";
		strBkFileName		= "";

		nFileCrTime		= 0;
		nFileMdTime		= 0;
		nFileAcTime		= 0;
	}
  
	UINT32		nID;
	UINT32		nUsedFlag;
	UINT32		nRegDate;
	UINT32		nEvtTime;
	UINT32		nEvtErrCode;
	UINT32		nSkipTarget;

	UINT32		nNotifyType;
	UINT32		nNotifyID;

	UINT32		nHostID;
	UINT32		nUserID;
	UINT32		nPolicyType;
	UINT32		nOpType;
	UINT32		nRegSvrID;
	UINT32		nSyncSvrStep;

	UINT32		nRemoveTime;
	UINT32		nBackupType;
	UINT32		nBackupTime;

	String		strSubjectPath;
	String		strSubjectName;
	String		strObjectPath;
	String		strObjectName;
	StringW		strObjectPathW;
	String		strBkFileName;
	UINT32		nFileCrTime;
	UINT32		nFileMdTime;
	UINT32		nFileAcTime;

}DB_LOG_DOC, *PDB_LOG_DOC;

typedef list<DB_LOG_DOC>					TListDBLogDoc;
typedef TListDBLogDoc::iterator				TListDBLogDocItor;

typedef map<UINT32, DB_LOG_DOC>				TMapDBLogDoc;
typedef TMapDBLogDoc::iterator				TMapDBLogDocItor;
typedef TMapDBLogDoc::reverse_iterator		TMapDBLogDocRItor;

#endif //DB_LOG_DOC_H_348683B5_F316_4a4d_842D_63E68B189A5D



