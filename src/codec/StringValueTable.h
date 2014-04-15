/*
 * Copyright (C) 2007-2013 Siemens AG
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/*******************************************************************
 *
 * @author Daniel.Peintner.EXT@siemens.com
 * @version 0.8 
 * @contact Joerg.Heuer@siemens.com
 *
 * <p>Code generated by EXIdizer.com</p>
 * <p>Schema: input/test_v2g/V2G_CI_MsgDef.xsd</p>
 *
 *
 ********************************************************************/



#ifdef __cplusplus
extern "C" {
#endif

/**
 * \file 	StringValueTable.h
 * \brief 	Value string table implementation
 *
 */

#ifndef STRING_VALUE_TABLE_H
#define STRING_VALUE_TABLE_H

#include "EXITypes.h"


/**
 * \brief  		Init value string tables & partitions
 *
 * 				Resets string value entries
 *
 * \param       valueTable			Value Table
 * \return                  		Error-Code <> 0
 *
 */
int exiInitValueStrings(exi_value_table_t* valueTable);


/**
 * \brief  		Add string value
 *
 * \param       valueTable			Value Table
 * \param       sv					String value to add
 * \param       qnameID				Qualified Name ID
 * \return                  		Error-Code <> 0
 *
 */
int exiAddStringValue(exi_value_table_t* valueTable,
		exi_string_ucs_t* sv, uint16_t qnameID);


/**
 * \brief  		Get number of local string values
 *
 * \param       valueTable			Value Table
 * \param       qnameID				Qualified Name ID
 * \param       numberOfEntries		Number of local entries for given qname ID
 * \return                  		Error-Code <> 0
 *
 */
int exiGetNumberOfLocalStringValueEntries(exi_value_table_t* valueTable,
		uint16_t qnameID, uint16_t* numberOfEntries);


/**
 * \brief  		Get global string value hit
 *
 * \param       valueTable			Value Table
 * \param       globalID			Global Value ID
 * \param       sv					Returned Global String value
 * \return                  		Error-Code <> 0
 *
 */
int exiGetGlobalStringValue(exi_value_table_t* valueTable,
		uint16_t globalID, exi_string_ucs_t* sv);


/**
 * \brief  		Get local string value hit
 *
 * \param       valueTable			Value Table
 * \param       qnameID				Qualified Name ID
 * \param       localID				Local Value ID
 * \param       sv					Returned Local String value
 * \return                  		Error-Code <> 0
 *
 */
int exiGetLocalStringValue(exi_value_table_t* valueTable,
		uint16_t qnameID, uint16_t localID, exi_string_ucs_t* sv);



#endif

#ifdef __cplusplus
}
#endif
