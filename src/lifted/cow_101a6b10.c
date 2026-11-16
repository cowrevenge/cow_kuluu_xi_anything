/* f_0x101a6b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a6b10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x106627c4u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101a6bed;
    }
    ecx = rd32(COW_IMG(0x106627c4u));
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101a6bed;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = rd32(ecx + 0x1cu);
        goto L_101a6bdc;
    }
    edx = rd32(ecx + 0x1cu);
    esi = rd32(ecx + 0x1cu) + rd8(ecx + 0x6cu) * 0x14u;
    t1 = rd32(COW_IMG(0x101a6bf4u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101a6b52u: goto L_101a6b52;
    case 0x101a6b68u: goto L_101a6b68;
    case 0x101a6b6fu: goto L_101a6b6f;
    case 0x101a6b93u: goto L_101a6b93;
    case 0x101a6bb3u: goto L_101a6bb3;
    default: rt_fatal(g, COW_IMG(0x101a6b4bu), "switch");
    }
    return 0;
L_101a6b52: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x101a2920u), rd32(self + 0x14u), 1, esi);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_call_regs(g, COW_IMG(0x101a44d0u), t15, rd32(COW_IMG(0x106627a8u)), g->edx, 1, 0);
    t18 = g->edx;
    eax = t17;
    edx = t18;
L_101a6bdc: ;
    t19 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t20 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t19, 1u);
    t21 = g->edx;
    eax = t20;
    edx = t21;
L_101a6bed: ;
    g->edx = edx;
    return eax;
L_101a6b68: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x101a6670u), ecx, 0);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    goto L_101a6bdc;
L_101a6b6f: ;
    g->edx = edx;
    t8 = rd32(self + 0x14u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101a2d30u), t8, 1, esi);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd8(rd32(self + 0x14u) + 0x235eu) == 0u)
    {
        eax = rd32(self + 0x14u);
        edx = t10;
    }
    else
    {
        eax = rd32(self + 0x14u);
        edx = t10;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t11 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 4u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    goto L_101a6bdc;
L_101a6b93: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xefu);
    t5 = g->edx;
    edx = t5;
    loc_1c = t4;
    loc_20 = esi;
    loc_24 = COW_IMG(0x101a6ad0u);
L_101a6bd1: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, loc_24, loc_20, loc_1c, 0u, 0u, 1u, 0u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    goto L_101a6bdc;
L_101a6bb3: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xf0u);
    t3 = g->edx;
    edx = t3;
    loc_1c = t2;
    loc_20 = esi;
    loc_24 = COW_IMG(0x101a6af0u);
    goto L_101a6bd1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6b10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
