/* f_0x1013a6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013a6c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 0x1cu)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_1013a815;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x1013a81cu) + rd8(COW_IMG(0x1013a83cu) + eax) * 4u);
    edx = rd8(COW_IMG(0x1013a83cu) + eax);
    switch (t1 - RD)
    {
    case 0x1013a6dfu: goto L_1013a6df;
    case 0x1013a711u: goto L_1013a711;
    case 0x1013a747u: goto L_1013a747;
    case 0x1013a74fu: goto L_1013a74f;
    case 0x1013a759u: goto L_1013a759;
    case 0x1013a796u: goto L_1013a796;
    case 0x1013a80eu: goto L_1013a80e;
    case 0x1013a815u: goto L_1013a815;
    default: rt_fatal(g, COW_IMG(0x1013a6d8u), "switch");
    }
    return 0;
L_1013a6df: ;
    if ((int8_t)rd8(self + 0x23u) > 1)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x23u);
        t20 = rd8(self + 0x20u);
        wr8(self + 0x23u, (uint8_t)((uint8_t)eax - t20));
        if ((int8_t)((uint8_t)eax - t20) < 1)
        {
            wr8(self + 0x23u, 1u);
        }
    }
    if (rd32(self + 0x28u) == 0u)
    {
        eax = rd32(self + 0x28u);
        goto L_1013a815;
    }
    eax = rd32(self + 0x28u);
    t21 = rd32(self + 0x2cu);
    t22 = (uint32_t)(int8_t)rd8(self + 0x23u);
    g->eax = eax;
    g->edx = t21;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall_cdecl(g, eax, t22, 2, t22, t21);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_1013a711: ;
    if ((int8_t)rd8(self + 0x23u) >= (int8_t)rd8(self + 0x22u))
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0x22u);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0x22u);
        ebx = (in_ebx & 0xffffff00u) | rd8(self + 0x23u);
        t15 = rd8(self + 0x20u);
        wr8(self + 0x23u, (uint8_t)((uint8_t)ebx + t15));
        if ((int8_t)((uint8_t)ebx + t15) > (int8_t)edx)
        {
            wr8(self + 0x23u, (uint8_t)edx);
        }
    }
    if (rd32(self + 0x28u) == 0u)
    {
        eax = rd32(self + 0x28u);
        goto L_1013a815;
    }
    eax = rd32(self + 0x28u);
    t16 = rd32(self + 0x2cu);
    t17 = (uint32_t)(int8_t)rd8(self + 0x23u);
    g->eax = eax;
    g->edx = t16;
    g->esp = sp0 - 4u;
    t18 = cow_thiscall_cdecl(g, eax, t17, 2, t17, t16);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_1013a747: ;
    wr8(self + 0x23u, 1u);
    g->edx = edx;
    return eax;
L_1013a74f: ;
    t14 = rd8(self + 0x22u);
    wr8(self + 0x23u, (uint8_t)t14);
    g->edx = (edx & 0xffffff00u) | t14;
    return eax;
L_1013a759: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 4u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 4u;
        goto L_1013a780;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 4u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1013a815;
    }
    t12 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 2u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, rd32(t12 + 0x18u), t12, self, edx);
L_1013a780: ;
    t13 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->edx = t13;
    return cow_tailcall(g, rd32(t13 + 0x18u), eax, self, t13);
L_1013a796: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        goto L_1013a815;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    t4 = rd32(COW_IMG(0x1013a85cu) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x1013a7a8u: goto L_1013a7a8;
    case 0x1013a7b6u: goto L_1013a7b6;
    case 0x1013a7ccu: goto L_1013a7cc;
    case 0x1013a7e2u: goto L_1013a7e2;
    case 0x1013a7f8u: goto L_1013a7f8;
    default: rt_fatal(g, COW_IMG(0x1013a7a1u), "switch");
    }
    return 0;
L_1013a7a8: ;
    t9 = (uint32_t)(int8_t)rd8(self + 0x23u);
    g->eax = t9;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x1013a8d0u), self, 1, t9);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_1013a7b6: ;
    t8 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 2u);
    g->esp = sp0;
    g->edx = t8;
    return cow_tailcall(g, rd32(t8 + 0x18u), eax, self, t8);
L_1013a7cc: ;
    t7 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, rd32(t7 + 0x18u), t7, self, edx);
L_1013a7e2: ;
    t6 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 4u);
    g->esp = sp0;
    g->edx = t6;
    return cow_tailcall(g, rd32(t6 + 0x18u), eax, self, t6);
L_1013a7f8: ;
    t5 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 3u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, rd32(t5 + 0x18u), t5, self, edx);
L_1013a80e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1013a8d0u), self, 1, 0xffffffffu);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1013a815: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013a6c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
