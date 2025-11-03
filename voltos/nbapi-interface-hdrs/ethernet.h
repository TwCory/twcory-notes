

typedef __ieee_eui48_addr    hw_addr;
typedef be16                 ether_type;
typedef u32                  if_mtu;
typedef u8                   if_stack_index;
typedef u8                   if_slot_index;
typedef u16                  if_port_index;
typedef u16                  subif_index;
typedef u16                  if_carrier_delay;

typedef enum if_speed if_speed_t;
typedef enum if_duplex if_duplex_t;
typedef enum if_media_type if_media_type_t;
typedef enum if_status if_status_t;
typedef enum if_flowctl_state if_flowctl_state_t;
typedef enum if_autoneg_state if_autoneg_state_t;

typedef struct if_ethernet_ctx              if_ethernet_ctx;
typedef struct if_ethernet_index            if_ethernet_index;
typedef struct if_ethernet_stats            if_ethernet_stats;

struct arpa_encap_hdr;
struct ieee8023_encap_hdr;
struct fcs_ftr;
struct arp_ether_hdr;
