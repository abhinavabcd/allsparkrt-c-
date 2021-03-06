

#define _MAX_TCP_USER_TIMEOUT 40


#define CLIENT_CONFIG_REQUEST  -101
#define CLIENT_CONFIG_RESPONSE  -102
#define USER_OFFLINE_RESPONSE  -4
#define SESSION_UNAUTHORIZED  -5
#define NEW_NODE_JOINED_SESSION  100
#define NODE_UNJOINED_SESSION  103
#define NODE_REVEAL_ANONYMITY   104


#define MESSAGE_TYPE_TEMPLATE_RESPONSE 107


#define SESSION_BROADCAST_TYPE_GAME 1
#define SESSION_BROADCAST_TYPE_NORMAL 0



#define USAGE_TYPE_PLAIN_SESSION 0
#define USASGE_TYPE_TEMPLATE 1





//db related


#define COLUMN_NODE_ID  1
#define COLUMN_ADDR  2
#define COLUMN_ADDR_INTERNAL  3
#define COLUMN_PORT  4
#define COLUMN_NODE_IS_SSL  5
#define COLUMN_IS_INTERNAL  6
#define COLUMN_NODE_CREATED_TIMESTAMP 7
#define COLUMN_NODE_LAST_MESSAGE_RECEIVED_TIMESTAMP 8
#define COLUMN_NODE_IS_CONNECTED_TO 9


#define COLUMN_SESSION_NODES_SESSION_ID_NODE_ID  1
#define COLUMN_SESSION_NODES_SESSION_ID  2
#define COLUMN_SESSION_NODES_NODE_ID  3
#define COLUMN_SESSION_NODES_ANONYMOUS_NODE_ID  4
#define COLUMN_SESSION_NODES_IS_ANONYMOUS 5
#define COLUMN_SESSION_NODES_TIMESTAMP  6



#define COLUMN_SESSIONS_SESSION_ID  1
#define COLUMN_SESSIONS_NODE_ID  2
#define COLUMN_SESSIOS_SESSION_TYPE  3
#define COLUMN_SESSIONS_SESSION_MASTER_NODE_ID  4
#define COLUMN_SESSIONS_LAST_FEW_USERS  5
#define COLUMN_SESSIONS_WHO_CAN_JOIN_NEW_NODES  6
#define COLUMN_SESSIONS_CREATED_AT  7
#define COLUMN_SESSIONS_USAGE_TYPE 8
#define COLUMN_SESSIONS_ALLOW_ANONYMOUS 9
#define COLUMN_SESSIONS_DESCRIPTION 10

#define COLUMN_NODE_SEQ_NODE_ID  1
#define COLUMN_NODE_SEQ_SEQ  2
#define COLUMN_NODE_SEQ_LAST_UPDATED 3



#define COLUMN_INBOX_MESSAGES_NODE_ID_SEQ  1
#define COLUMN_INBOX_MESSAGES_FROM_ID  2
#define COLUMN_INBOX_MESSAGES_PAYLOAD  3
#define COLUMN_INBOX_MESSAGES_MESSAGE_TYPE  4
#define COLUMN_INBOX_MESSAGES_TIMESTAMP  5


#define COLUMN_NODE_PUSH_KEYS_NODE_ID 1
#define COLUMN_NODE_PUSH_KEYS_TYPE 2
#define COLUMN_NODE_PUSH_KEYS_PUSH_KEY 3


#define COLUMN_TEMPLATES_TEMPLATE_ID 1
#define COLUMN_TEMPLATES_RENDER_DOC 2


#define COLUMN_TEMPLATES_INSTANCE_ID 1
#define COLUMN_TEMPLATES_INSTANCE_RENDER_DOC 2
#define COLUMN_TEMPLATES_INSTANCE_SESSION_ID 4
#define COLUMN_TEMPLATES_INSTANCE_NODE_ID 3




#define SESSIONS_USAGE_TYPE 8

#define CONNECTION_STR_LEN   20
#define NODE_STR_LEN   15


#define SESSION_ALREADY_JOINED   1
#define SESSION_JOINING_ERROR   2
#define SESSION_JOINED  3



#define SESSION_OWNER_ONLY_CAN_ADD 0
#define SESSSION_NODES_CAN_ADD 1




#define IS_RESENDING_ASSUMED_SENT 1
#define IS_FROM_HTTP_CALL 1<<1
#define USE_DIRECT_CONNECTIONS_ONLY 1<<2


