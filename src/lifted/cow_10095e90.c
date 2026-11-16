/* f_0x10095e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10095e90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x170u) - 2u > 0x51u)
    {
        ebx = (rd32(arg1 + 0x120u) >> 5u & 0xffffff00u) | (rd32(arg1 + 0x120u) >> 5u & 1u);
        loc_4 = (self & 0xffffffu) | 0x1000000u;
        goto L_10095ece;
    }
    eax = rd32(arg1 + 0x170u) - 2u;
    ebx = (rd32(arg1 + 0x120u) >> 5u & 0xffffff00u) | (rd32(arg1 + 0x120u) >> 5u & 1u);
    t1 = rd32(COW_IMG(0x10095fd8u) + rd8(COW_IMG(0x10095fe0u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x10095ec5u: goto L_10095ec5;
    case 0x10095eceu: loc_4 = (self & 0xffffffu) | 0x1000000u; goto L_10095ece;
    default: rt_fatal(g, COW_IMG(0x10095ebeu), "switch");
    }
    return;
L_10095ec5: ;
    if ((uint8_t)ebx == 0u)
    {
        loc_4 = (self & 0xffffffu) | 0x1000000u;
    }
    else
    {
        loc_4 = self & 0xffffffu;
    }
L_10095ece: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x100956c0u), arg1, 1, 0xffu);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        ecx = t3;
        goto L_10095f0a;
    }
    edx = t4;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x10095680u), arg1, 1, 0xffu);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        ecx = t6;
        goto L_10095f0a;
    }
    ecx = t6;
    edx = t7;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x100956a0u), ecx, 1, 0xffu);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        ecx = t9;
        goto L_10095f0a;
    }
    ecx = t9;
    edx = t10;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1, 0xffu);
    t12 = g->ecx;
    if ((uint8_t)t11 == 0u)
    {
        ecx = t12;
        goto L_10095f12;
    }
    ecx = t12;
L_10095f0a: ;
    if ((uint8_t)ebx == 0u) goto L_10095f12;
    ecx = ecx & 0xffffff00u;
L_10095f16: ;
    t13 = rd32(arg1 + 0x120u);
    if (!(t13 >> 7u & 1u))
    {
        eax = t13;
        edx = t13 >> 7u;
    }
    else
    {
        eax = t13;
        edx = t13 >> 7u;
        ecx = ecx & 0xffffff00u;
        loc_4 = loc_4 & 0xffffffu;
    }
    if (!(eax >> 4u & 1u))
    {
        eax = eax >> 4u;
        goto L_10095fab;
    }
    eax = eax >> 4u;
    if (rd16(arg1 + 0x166u) != 0u) goto L_10095f72;
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10092900u), arg1, edx, 0);
    t14 = rd32(arg1 + 0x128u) & 0xbfffffffu;
    t15 = rd32(arg1 + 0x120u);
    wr32(arg1 + 0x128u, t14);
    t16 = (t15 & 0xffffff00u) | (t15 & 0xcfu);
    wr32(arg1 + 0x120u, t16);
    wr8(arg1 + 0xeeu, 0u);
    return;
L_10095f12: ;
    ecx = (ecx & 0xffffff00u) | loc_4 >> 0x18u;
    goto L_10095f16;
L_10095f72: ;
    if ((uint8_t)ecx != 1u) goto L_10095fd3;
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10092900u), arg1, edx, 0);
    t17 = rd32(arg1 + 0x120u);
    t18 = rd32(arg1 + 0x128u);
    wr8(arg1 + 0xeeu, 2u);
    wr32(arg1 + 0x128u, t18 | 0x40000000u);
    t19 = (t17 & 0xffffff00u) | (t17 & 0xefu) | 0x20u;
    wr32(arg1 + 0x120u, t19);
    return;
L_10095fab: ;
    if ((uint8_t)ebx != 0u)
    {
        if ((uint8_t)ecx == 0u)
        {
            g->esp = sp0 - 0xcu;
            cow_fastcall(g, COW_IMG(0x10092900u), arg1, edx, 0);
            t20 = rd32(arg1 + 0x120u);
            wr8(arg1 + 0xeeu, 0u);
            t21 = (t20 & 0xffffffdfu) | 0x10u;
            wr32(arg1 + 0x120u, t21);
        }
    }
L_10095fd3: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10095e90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
