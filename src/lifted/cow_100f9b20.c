/* f_0x100f9b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100f9b20(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xau, COW_IMG(0x100facf0u));
    t1 = g->ecx;
    t2 = g->edx;
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xbu, COW_IMG(0x100fb730u));
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 8u, COW_IMG(0x100facd0u));
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 5u, COW_IMG(0x100faca0u));
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 9u, COW_IMG(0x100fbd40u));
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x44u, COW_IMG(0x100fcb70u));
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x69u, COW_IMG(0x100f9ba0u));
    t13 = g->ecx;
    t14 = g->edx;
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xdu, COW_IMG(0x100fbb80u));
    t15 = g->ecx;
    t16 = g->edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xeu, COW_IMG(0x100fbc30u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100f9b20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
