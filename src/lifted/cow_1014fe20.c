/* f_0x1014fe20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1014fe20(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd32(self + 0x20u);
    wr32(sp0 - 0x20u, t1);
    wr32(sp0 - 0x24u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->ebx = (in_ebx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 8u);
    g->eax = t1;
    g->ecx = sp0 - 0x10u;
    t2 = rd16(self + 0x16u);
    t3 = rd16(self + 0x14u);
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), t1, in_edi, in_esi);
    t5 = g->ecx;
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, 0x80808080u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    t6 = (in_ebx & 0xffff0000u) | (uint16_t)(t2 + 8u);
    wr32(sp0 - 0x40u, t6);
    t7 = (in_edi & 0xffff0000u) | (uint16_t)(t3 + 0x69u);
    wr32(sp0 - 0x44u, t7);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x28u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t5, 7, t7, t6, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x20u, 0x80808080u);
    wr32(sp0 - 0x24u, 0xbcu);
    wr32(sp0 - 0x28u, 0xbu);
    g->ecx = t9;
    g->edx = t10;
    t11 = rd16(self + 0x16u);
    t12 = rd16(self + 0x14u);
    g->esp = sp0 - 0x20u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0xbcu);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x24u, t13);
    t16 = (self & 0xffff0000u) | (uint16_t)(t11 + 8u);
    wr32(sp0 - 0x28u, t16);
    t17 = (t7 & 0xffff0000u) | (uint16_t)(t12 + 5u);
    wr32(sp0 - 0x2cu, t17);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t17, t16, t13, 0x80808080u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014fe20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014fe20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
