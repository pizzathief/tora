/****************************************************************************
 *
 * TOra - An Oracle Toolkit for DBA's and developers
 * Copyright (C) 2000 GlobeCom AB
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 *      As a special exception, you have permission to link this program
 *      with the Qt and Oracle Client libraries and distribute executables,
 *      as long as you follow the requirements of the GNU GPL in regard to
 *      all of the software in the executable aside from Qt and Oracle client
 *      libraries.
 *
 *      Specifically you are not permitted to link this program with the
 *      Qt/UNIX or Qt/Windows products of TrollTech. And you are not
 *      permitted to distribute binaries compiled against these libraries
 *      without written consent from GlobeCom AB.
 *
 * All trademarks belong to their respective owners.
 *
 ****************************************************************************/

static char *DefaultKeywords[]={"ACCESS",
				"ACCOUNT",
				"ACTIVATE",
				"ADD",
				"ADMIN",
				"ADMINISTER",
				"ADVISE",
				"AFTER",
				"ALL",
				"ALL_ROWS",
				"ALLOCATE",
				"ALTER",
				"ANALYZE",
				"ANCILLARY",
				"AND",
				"ANY",
				"ARCHIVE",
				"ARCHIVELOG",
				"ARRAY",
				"AS",
				"ASC",
				"ASSOCIATE",
				"AT",
				"ATTRIBUTE",
				"ATTRIBUTES",
				"AUDIT",
				"AUTHENTICATED",
				"AUTHID",
				"AUTHORIZATION",
				"AUTOALLOCATE",
				"AUTOEXTEND",
				"AUTOMATIC",
				"BACKUP",
				"BECOME",
				"BEFORE",
				"BEGIN",
				"BEHALF",
				"BETWEEN",
				"BFILE",
				"BINDING",
				"BITMAP",
				"BLOB",
				"BLOCK",
				"BLOCK_RANGE",
				"BODY",
				"BOUND",
				"BOTH",
				"BROADCAST",
				"BUFFER_POOL",
				"BUILD",
				"BY",
				"CACHE",
				"CACHE_INSTANCES",
				"CALL",
				"CANCEL",
				"CASCADE",
				"CASE",
				"CAST",
				"CATEGORY",
				"CFILE",
				"CHAINED",
				"CHANGE",
				"CHAR",
				"CHAR_CS",
				"CHARACTER",
				"CHECK",
				"CHECKPOINT",
				"CHILD",
				"CHOOSE",
				"CHUNK",
				"CLASS",
				"CLEAR",
				"CLOB",
				"CLONE",
				"CLOSE",
				"CLOSE_CACHED_OPEN_CURSORS",
				"CLUSTER",
				"COALESCE",
				"COLUMN",
				"COLUMNS",
				"COLUMN_VALUE",
				"COMMENT",
				"COMMIT",
				"COMMITTED",
				"COMPATIBILITY",
				"COMPILE",
				"COMPLETE",
				"COMPOSITE_LIMIT",
				"COMPRESS",
				"COMPUTE",
				"CONNECT",
				"CONNECT_TIME",
				"CONSIDER",
				"CONSISTENT",
				"CONSTRAINT",
				"CONSTRAINTS",
				"CONTAINER",
				"CONTENTS",
				"CONTEXT",
				"CONTINUE",
				"CONTROLFILE",
				"CONVERT",
				"COST",
				"CPU_PER_CALL",
				"CPU_PER_SESSION",
				"CREATE",
				"CREATE_STORED_OUTLINES",
				"CUBE",
				"CURRENT",
				"CURRENT_DATE",
				"CURRENT_SCHEMA",
				"CURRENT_TIME",
				"CURRENT_TIMESTAMP",
				"CURRENT_USER",
				"CURSOR",
				"CYCLE",
				"DANGLING",
				"DATA",
				"DATABASE",
				"DATAFILE",
				"DATAFILES",
				"DATAOBJNO",
				"DATE",
				"DATE_MODE",
				"DAY",
				"DBA",
				"DBTIMEZONE",
				"DDL",
				"DEALLOCATE",
				"DEBUG",
				"DEC",
				"DECIMAL",
				"DECLARE",
				"DEFAULT",
				"DEFERRABLE",
				"DEFERRED",
				"DEFINER",
				"DEGREE",
				"DELETE",
				"DEMAND",
				"DEREF",
				"DESC",
				"DETERMINES",
				"DICTIONARY",
				"DIMENSION",
				"DIRECTORY",
				"DISABLE",
				"DISASSOCIATE",
				"DISCONNECT",
				"DISMOUNT",
				"DISTINCT",
				"DISTRIBUTED",
				"DML",
				"DOUBLE",
				"DROP",
				"DUMP",
				"DYNAMIC",
				"EACH",
				"ELSE",
				"ENABLE",
				"END",
				"ENFORCE",
				"ENTRY",
				"ESCAPE",
				"ESTIMATE",
				"EVENTS",
				"EXCEPT",
				"EXCEPTION",
				"EXCEPTIONS",
				"EXCHANGE",
				"EXCLUDING",
				"EXCLUSIVE",
				"EXECUTE",
				"EXISTS",
				"EXPIRE",
				"EXPLAIN",
				"EXPLOSION",
				"EXTENDS",
				"EXTENT",
				"EXTENTS",
				"EXTERNALLY",
				"EXTRACT",
				"FAILED_LOGIN_ATTEMPTS",
				"FALSE",
				"FAST",
				"FILE",
				"FILTER",
				"FIRST",
				"FIRST_ROWS",
				"FLAGGER",
				"FLOAT",
				"FLOB",
				"FLUSH",
				"FOLLOWING",
				"FOR",
				"FORCE",
				"FOREIGN",
				"FREELIST",
				"FREELISTS",
				"FRESH",
				"FROM",
				"FULL",
				"FUNCTION",
				"FUNCTIONS",
				"GENERATED",
				"GLOBAL",
				"GLOBALLY",
				"GLOBAL_NAME",
				"GRANT",
				"GROUP",
				"GROUPS",
				"HASH",
				"HASHKEYS",
				"HAVING",
				"HEADER",
				"HEAP",
				"HIERARCHY",
				"HOUR",
				"ID",
				"IDENTIFIED",
				"IDENTIFIER",
				"IDGENERATORS",
				"IDLE_TIME",
				"IF",
				"IMMEDIATE",
				"IN",
				"INCLUDING",
				"INCREMENT",
				"INCREMENTAL",
				"INDEX",
				"INDEXED",
				"INDEXES",
				"INDEXTYPE",
				"INDEXTYPES",
				"INDICATOR",
				"INITIAL",
				"INITIALIZED",
				"INITIALLY",
				"INITRANS",
				"INSERT",
				"INSTANCE",
				"INSTANCES",
				"INSTEAD",
				"INT",
				"INTEGER",
				"INTERMEDIATE",
				"INTERSECT",
				"INTERVAL",
				"INTO",
				"INVALIDATE",
				"IS",
				"ISOLATION",
				"ISOLATION_LEVEL",
				"JAVA",
				"JOIN",
				"KEEP",
				"KEY",
				"KILL",
				"LABEL",
				"LAST",
				"LAYER",
				"LEADING",
				"LESS",
				"LEVEL",
				"LIBRARY",
				"LIKE",
				"LIMIT",
				"LINK",
				"LIST",
				"LOB",
				"LOCAL",
				"LOCALTIME",
				"LOCALTIMESTAMP",
				"LOCATOR",
				"LOCK",
				"LOCKED",
				"LOG",
				"LOGFILE",
				"LOGGING",
				"LOGICAL_READS_PER_CALL",
				"LOGICAL_READS_PER_SESSION",
				"LOGOFF",
				"LOGON",
				"LONG",
				"MANAGE",
				"MANAGED",
				"MANAGEMENT",
				"MASTER",
				"MATERIALIZED",
				"MAX",
				"MAXARCHLOGS",
				"MAXDATAFILES",
				"MAXEXTENTS",
				"MAXINSTANCES",
				"MAXLOGFILES",
				"MAXLOGHISTORY",
				"MAXLOGMEMBERS",
				"MAXSIZE",
				"MAXTRANS",
				"MAXVALUE",
				"METHOD",
				"MIN",
				"MEMBER",
				"MERGE",
				"MINIMIZE",
				"MINIMUM",
				"MINEXTENTS",
				"MINUS",
				"MINUTE",
				"MINVALUE",
				"MLSLABEL",
				"MODE",
				"MODIFY",
				"MONITORING",
				"MONTH",
				"MOUNT",
				"MOVE",
				"MOVEMENT",
				"MTS_DISPATCHERS",
				"MULTISET",
				"NAMED",
				"NATIONAL",
				"NCHAR",
				"NCHAR_CS",
				"NCLOB",
				"NEEDED",
				"NESTED",
				"NESTED_TABLE_ID",
				"NETWORK",
				"NEVER",
				"NEW",
				"NEXT",
				"NLS_CALENDAR",
				"NLS_CHARACTERSET",
				"NLS_COMP",
				"NLS_CURRENCY",
				"NLS_DATE_FORMAT",
				"NLS_DATE_LANGUAGE",
				"NLS_ISO_CURRENCY",
				"NLS_LANG",
				"NLS_LANGUAGE",
				"NLS_NUMERIC_CHARACTERS",
				"NLS_SORT",
				"NLS_SPECIAL_CHARS",
				"NLS_TERRITORY",
				"NO",
				"NOARCHIVELOG",
				"NOAUDIT",
				"NOCACHE",
				"NOCOMPRESS",
				"NOCYCLE",
				"NOFORCE",
				"NOLOGGING",
				"NOMAXVALUE",
				"NOMINIMIZE",
				"NOMINVALUE",
				"NOMONITORING",
				"NONE",
				"NOORDER",
				"NOOVERRIDE",
				"NOPARALLEL",
				"NORELY",
				"NORESETLOGS",
				"NOREVERSE",
				"NORMAL",
				"NOSEGMENT",
				"NOSORT",
				"NOT",
				"NOTHING",
				"NOVALIDATE",
				"NOWAIT",
				"NULL",
				"NULLS",
				"NUMBER",
				"NUMERIC",
				"NVARCHAR2",
				"OBJECT",
				"OBJNO",
				"OBJNO_REUSE",
				"OF",
				"OFF",
				"OFFLINE",
				"OID",
				"OIDINDEX",
				"OLD",
				"ON",
				"ONLINE",
				"ONLY",
				"OPCODE",
				"OPEN",
				"OPERATOR",
				"OPTIMAL",
				"OPTIMIZER_GOAL",
				"OPTION",
				"OR",
				"ORDER",
				"ORGANIZATION",
				"OUT",
				"OUTLINE",
				"OVER",
				"OVERFLOW",
				"OVERLAPS",
				"OWN",
				"PACKAGE",
				"PACKAGES",
				"PARALLEL",
				"PARAMETERS",
				"PARENT",
				"PARTITION",
				"PARTITIONS",
				"PARTITION_HASH",
				"PARTITION_RANGE",
				"PASSWORD",
				"PASSWORD_GRACE_TIME",
				"PASSWORD_LIFE_TIME",
				"PASSWORD_LOCK_TIME",
				"PASSWORD_REUSE_MAX",
				"PASSWORD_REUSE_TIME",
				"PASSWORD_VERIFY_FUNCTION",
				"PCTFREE",
				"PCTINCREASE",
				"PCTTHRESHOLD",
				"PCTUSED",
				"PCTVERSION",
				"PERCENT",
				"PERMANENT",
				"PLAN",
				"PLSQL_DEBUG",
				"POST_TRANSACTION",
				"PREBUILT",
				"PRECEDING",
				"PRECISION",
				"PREPARE",
				"PRESERVE",
				"PRIMARY",
				"PRIOR",
				"PRIVATE",
				"PRIVATE_SGA",
				"PRIVILEGE",
				"PRIVILEGES",
				"PROCEDURE",
				"PROFILE",
				"PUBLIC",
				"PURGE",
				"PX_GRANULE",
				"QUERY",
				"QUEUE",
				"QUOTA",
				"RANDOM",
				"RANGE",
				"RAW",
				"RBA",
				"READ",
				"READS",
				"REAL",
				"REBUILD",
				"RECORDS_PER_BLOCK",
				"RECOVER",
				"RECOVERABLE",
				"RECOVERY",
				"RECYCLE",
				"REDUCED",
				"REF",
				"REFERENCES",
				"REFERENCING",
				"REFRESH",
				"RELY",
				"RENAME",
				"REPLACE",
				"RESET",
				"RESETLOGS",
				"RESIZE",
				"RESOLVE",
				"RESOLVER",
				"RESOURCE",
				"RESTRICT",
				"RESTRICTED",
				"RESUME",
				"RETURN",
				"RETURNING",
				"REUSE",
				"REVERSE",
				"REVOKE",
				"REWRITE",
				"ROLE",
				"ROLES",
				"ROLLBACK",
				"ROLLUP",
				"ROW",
				"ROWID",
				"ROWNUM",
				"ROWS",
				"RULE",
				"SAMPLE",
				"SAVEPOINT",
				"SB4",
				"SCAN",
				"SCAN_INSTANCES",
				"SCHEMA",
				"SCN",
				"SCOPE",
				"SD_ALL",
				"SD_INHIBIT",
				"SD_SHOW",
				"SECOND",
				"SEGMENT",
				"SEG_BLOCK",
				"SEG_FILE",
				"SELECT",
				"SELECTIVITY",
				"SEQUENCE",
				"SERIALIZABLE",
				"SERVERERROR",
				"SESSION",
				"SESSION_CACHED_CURSORS",
				"SESSIONS_PER_USER",
				"SESSIONTIMEZONE",
				"SET",
				"SHARE",
				"SHARED",
				"SHARED_POOL",
				"SHRINK",
				"SHUTDOWN",
				"SINGLE",
				"SINGLETASK",
				"SIZE",
				"SKIP",
				"SKIP_UNUSABLE_INDEXES",
				"SMALLINT",
				"SNAPSHOT",
				"SOME",
				"SORT",
				"SOURCE",
				"SPECIFICATION",
				"SPLIT",
				"SQL_TRACE",
				"STANDBY",
				"START",
				"STARTUP",
				"STATEMENT_ID",
				"STATISTICS",
				"STATIC",
				"STOP",
				"STORAGE",
				"STORE",
				"STRUCTURE",
				"SUBPARTITION",
				"SUBPARTITIONS",
				"SUCCESSFUL",
				"SUMMARY",
				"SUSPEND",
				"SWITCH",
				"SYS_OP_BITVEC",
				"SYS_OP_ENFORCE_NOT_NULL$",
				"SYS_OP_NOEXPAND",
				"SYS_OP_NTCIMG$",
				"SYNONYM",
				"SYSDATE",
				"SYSDBA",
				"SYSOPER",
				"SYSTEM",
				"SYSTIMESTAMP",
				"TABLE",
				"TABLES",
				"TABLESPACE",
				"TABLESPACE_NO",
				"TABNO",
				"TEMPFILE",
				"TEMPORARY",
				"THAN",
				"THE",
				"THEN",
				"THREAD",
				"THROUGH",
				"TIMESTAMP",
				"TIME",
				"TIMEOUT",
				"TIMEZONE_HOUR",
				"TIMEZONE_MINUTE",
				"TIME_ZONE",
				"TO",
				"TOPLEVEL",
				"TRACE",
				"TRACING",
				"TRAILING",
				"TRANSACTION",
				"TRANSITIONAL",
				"TRIGGER",
				"TRIGGERS",
				"TRUE",
				"TRUNCATE",
				"TX",
				"TYPE",
				"TYPES",
				"UB2",
				"UBA",
				"UID",
				"UNARCHIVED",
				"UNBOUND",
				"UNBOUNDED",
				"UNDO",
				"UNIFORM",
				"UNION",
				"UNIQUE",
				"UNLIMITED",
				"UNLOCK",
				"UNRECOVERABLE",
				"UNTIL",
				"UNUSABLE",
				"UNUSED",
				"UPD_INDEXES",
				"UPDATABLE",
				"UPDATE",
				"UROWID",
				"USAGE",
				"USE",
				"USE_STORED_OUTLINES",
				"USER",
				"USER_DEFINED",
				"USING",
				"VALIDATE",
				"VALIDATION",
				"VALUE",
				"VALUES",
				"VARCHAR",
				"VARCHAR2",
				"VARRAY",
				"VARYING",
				"VIEW",
				"WHEN",
				"WHENEVER",
				"WHERE",
				"WITH",
				"WITHOUT",
				"WORK",
				"WRITE",
				"XID",
				"YEAR",
				"ZONE",
				NULL
};
