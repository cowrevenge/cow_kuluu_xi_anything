/* f_0x101983b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101983b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_c;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    eax = 0u;
    loc_c = in_ebx;
    loc_10 = in_ebp;
    loc_14 = in_esi;
    loc_18 = in_edi;
L_101983d1: ;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, eax + 1u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->ebx = eax + 1u;
    g->edi = COW_IMG(0x10379b08u) + eax * 4u + rd32(self + 0x18u) * 4u;
    g->edx = sp0 - 8u;
    t1 = rd32(self + 8u);
    t2 = rd32(self + 0x18u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 8u, eax + 1u, 1u, 1u);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x1cu, 0x80808080u);
    t5 = rd16(COW_IMG(0x10379b08u) + eax * 4u + t2 * 4u + 2u);
    wr32(sp0 - 0x20u, t5);
    wr32(sp0 - 0x24u, 0xbu);
    g->eax = t5;
    g->esp = sp0 - 0x1cu;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t5);
    wr32(sp0 - 0x20u, t6);
    t7 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x24u, t7);
    t8 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 0x21u;
    wr32(sp0 - 0x28u, t8);
    g->edx = t8;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101907e0u), 9, t8, t7, t6, 0x80808080u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t9 = g->edx;
    t10 = rd32(self + 0x30u);
    wr32(sp0 - 0x2cu, t10);
    t11 = rd8(COW_IMG(0x10379b08u) + eax * 4u + t2 * 4u);
    wr32(sp0 - 0x30u, t11);
    g->eax = t10;
    g->esp = sp0 - 0x28u;
    t12 = cow_cdecl(g, COW_IMG(0x10193960u), 2, t11, t10);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x80808080u);
    if ((uint8_t)t12 == 0u)
    {
        ebx = eax + 1u;
        eax = t12;
        t15 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x28u, t15);
        t16 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x2cu, t16);
        ecx = rd32(self + 0x1cu);
        edx = t16;
        loc_28 = t15;
        loc_2c = t16;
    }
    else
    {
        ebx = eax + 1u;
        t13 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x28u, t13);
        t14 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x2cu, t14);
        eax = t14;
        ecx = rd32(self + 0x20u);
        edx = t13;
        loc_28 = t13;
        loc_2c = t14;
    }
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, loc_2c, loc_28, 0x80808080u, 0u, 0u);
    t17 = g->edx;
    if ((int32_t)ebx < 14)
    {
        eax = ebx;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101983d1;
    }
    eax = ebx;
    edx = t17;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101983b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101983b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
