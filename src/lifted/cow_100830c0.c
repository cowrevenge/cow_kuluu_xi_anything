/* f_0x100830c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100830c0(Guest* g)
{
    double d15;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0xcu);
    wr32(t1, 0x3f800000u);
    g->esp = sp0 - 0x18u;
    t2 = cow_stdcall(g, COW_IMG(0x10082fb0u), 2, arg1, arg2);
    if ((uint8_t)t2 != 0u)
    {
        esi = t1;
        goto L_100830f0;
    }
    eax = t2;
    return eax;
L_100830f0: ;
    if (rd32(arg2 + 8u) <= rd32(COW_IMG(0x103581d8u)))
    {
        eax = rd32(COW_IMG(0x103581d8u));
        ecx = rd32(arg2 + 8u);
        goto L_10083108;
    }
    eax = rd32(COW_IMG(0x103581d8u));
    return eax & 0xffffff00u;
L_10083108: ;
    if (ecx >= rd32(COW_IMG(0x103581d4u)))
    {
        edx = rd32(COW_IMG(0x103581d4u));
        wrf32(esi, (float)fr(g, (double)(int64_t)cow_i64(eax - ecx, 0u) / (double)(int32_t)(eax - edx)));
        eax = eax - edx;
    }
    else
    {
        wr32(esi, 0x3f800000u);
    }
    g->eax = eax;
    g->edx = rd32(self);
    t3 = rd32(self);
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, rd32(t3 + 0x304u), self, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        goto L_1008315e;
    }
    eax = t4;
    edx = t5;
    if (rd8(COW_IMG(0x10487f80u)) == 0u) goto L_1008315e;
    return eax & 0xffffff00u;
L_1008315e: ;
    t6 = rd32(self + 0x78u);
    wr32(arg4, t6);
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u)
    {
        eax = t6;
        g->eax = eax;
        g->edx = rd32(self);
        t7 = rd32(self);
        g->esp = sp0 - 0x18u;
        t8 = cow_thiscall(g, rd32(t7 + 0x300u), self, 0);
        t9 = g->edx;
        if ((uint8_t)t8 == 0u)
        {
            edx = t9;
        }
        else
        {
            edx = t9;
            t10 = rd32(self + 0x78u) & 0xffffff00u;
            wr32(arg4, t10);
        }
    }
    if ((rd8(self + 0x88u) & 4u) != 0u)
    {
        t11 = rd8(arg4 + 3u);
        g->esp = sp0 - 0x18u;
        t12 = cow_stdcall(g, COW_IMG(0x10014d50u), 0);
        t13 = cow_divs(g, t12 << 4u, 0x168u);
        t14 = cow_mods(g, t12 << 4u, 0x168u);
        wr8(arg4 + 3u, 0u);
        wr32(sp0 + 0xcu, t14);
        d15 = fr(g, fr(g, fr(g, fr(g, sin(fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a840u))))) * (double)rdf32(COW_IMG(0x1032b08cu))) + (double)rdf32(COW_IMG(0x1032d3dcu))) * (double)(int32_t)t11);
        fpush(g, d15);
        t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), t13, g->ecx, g->edx, 1, 0);
        t17 = rd32(arg4) | ((t16 & 0xffffff00u) | (t16 & 0x80u)) << 0x11u;
        wr32(arg4, t17);
    }
    if (rd16(self + 0xb2u) != 0u) goto L_10083205;
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u) goto L_10083205;
    return 1u;
L_10083205: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100830c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100830c0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
