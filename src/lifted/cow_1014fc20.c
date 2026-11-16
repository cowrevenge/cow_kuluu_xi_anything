/* f_0x1014fc20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1014fc20(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    t1 = rd32(self + 0x24u);
    g->ebx = (in_ebx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x1au);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    t2 = rd16(self + 0x16u);
    t3 = rd16(self + 0x14u);
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, t1, 0x80808080u, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    t7 = (in_ebx & 0xffff0000u) | (uint16_t)(t2 + 0x1au);
    t8 = (in_edi & 0xffff0000u) | (uint16_t)(t3 + 0x69u);
    g->edx = t6;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t5, 7, t8, t7, t4, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t10 = g->ecx;
    t11 = g->edx;
    g->ecx = t10;
    g->edx = t11;
    t12 = rd16(self + 0x16u);
    t13 = rd16(self + 0x14u);
    g->esp = sp0 - 0x10u;
    t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xe7u);
    t15 = g->ecx;
    t16 = g->edx;
    t17 = (self & 0xffff0000u) | (uint16_t)(t12 + 0x1au);
    t18 = (t8 & 0xffff0000u) | (uint16_t)(t13 + 5u);
    cow_cdecl(g, COW_IMG(0x101c9780u), 3, t18, t17, t14);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014fc20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014fc20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
