/**
 * AS - the open source Automotive Software on https://github.com/parai
 *
 * Copyright (C) 2017  AS <parai@foxmail.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */
/* ============================ [ INCLUDES  ] ====================================================== */
#include "kernel_internal.h"
#if (COUNTER_NUM > 0)
/* ============================ [ MACROS    ] ====================================================== */
/* ============================ [ TYPES     ] ====================================================== */
/* ============================ [ DECLARES  ] ====================================================== */
/* ============================ [ DATAS     ] ====================================================== */
TickType				OsTickCounter;
/* ============================ [ LOCALS    ] ====================================================== */
/* ============================ [ FUNCTIONS ] ====================================================== */
StatusType SignalCounter(CounterType CounterID)
{
	StatusType ercd = E_OK;

	return ercd;
}


TickType GetOsTick(void)
{
	return OsTickCounter;
}

void Os_CounterInit(void)
{
	CounterType id;
	OsTickCounter = 1;

	for(id=0; id < COUNTER_NUM; id++)
	{
		CounterVarArray[id].value = 0;
	}
}
#endif /* #if (COUNTER_NUM > 0) */