//
// Created by rohit on 2/11/2019.
//

#ifndef HELLOWORLD_MP_COMMANDS_HPP
#define HELLOWORLD_MP_COMMANDS_HPP

extern struct rte_ring *send_ring;
extern struct rte_mempool *message_pool;
extern volatile int quit;

extern cmdline_parse_ctx_t simple_mp_ctx[];

#endif //HELLOWORLD_MP_COMMANDS_HPP
