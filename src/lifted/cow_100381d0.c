/* f_0x100381d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100381d0(Guest* g)
{
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t1 = g->ecx;
    t2 = g->edx;
    d3 = cow_take_float(g);
    d4 = (double)(float)fr(g, (double)rdf32(self + 0x34u) - d3);
    d5 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(self + 0x34u, cow_f2bits(d4));
    if (!(d4 < d5))
    {
        ecx = t1;
        edx = t2;
        loc_4_f = d4;
        goto L_10038208;
    }
    edx = t2;
    loc_4_f = d4;
    t6 = rd32(self + 0x38u);
    g->ecx = t6;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x100367f0u), 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        goto L_10038211;
    }
    ecx = t8;
    edx = t9;
L_10038208: ;
    if (rd32(COW_IMG(0x10351710u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10351710u));
        goto L_1003821f;
    }
    eax = rd32(COW_IMG(0x10351710u));
L_10038211: ;
    g->eax = eax;
    g->edx = rd32(self);
    t10 = rd32(self);
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, rd32(t10 + 0x18u), self, 1, 1u);
    t12 = g->edx;
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
L_1003821f: ;
    g->edx = edx;
    fpush(g, loc_4_f);
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t14 = g->edx;
    if ((t13 & 0x20u) == 0u)
    {
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = t13;
        edx = t14;
        if (rd8(self + 0x3cu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x3cu);
        }
        else
        {
            if (rd32(COW_IMG(0x10455c20u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10455c20u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10455c20u));
                t15 = rd32(eax + 0xdb4u);
                wr8(eax + 0xdbcu, 1u);
                wr32(eax + 0xdb4u, t15 + 0x3cu);
            }
        }
    }
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100381d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100381d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
