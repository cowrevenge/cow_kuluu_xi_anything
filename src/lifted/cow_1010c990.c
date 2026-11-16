/* f_0x1010c990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1010c990(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = (self & 0xffff0000u) | rd16(self + 0x818u);
    if ((uint16_t)t1 > 5u)
    {
        ecx = t1;
        edx = in_edx;
        goto L_1010c9f1;
    }
    eax = (uint16_t)t1;
    ecx = t1;
    t2 = rd32(COW_IMG(0x1010cb28u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x1010c9b8u: goto L_1010c9b8;
    case 0x1010c9f1u: edx = in_edx; goto L_1010c9f1;
    case 0x1010ca1bu: goto L_1010ca1b;
    case 0x1010ca29u: goto L_1010ca29;
    default: rt_fatal(g, COW_IMG(0x1010c9b1u), "switch");
    }
    return 0;
L_1010c9b8: ;
    t4 = (ecx & 0xffffff00u) | (uint16_t)ecx == 1u;
    g->eax = rd32(self);
    g->edx = in_edx;
    t5 = rd32(self);
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, rd32(t5 + 4u), self, 1, t4);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_1010c9da;
    }
    eax = t6;
    wr16(self + 0x818u, 1u);
    return (eax & 0xffffff00u) | 1u;
L_1010c9da: ;
    if (eax != 1u) goto L_1010cb19;
    wr16(self + 0x818u, 2u);
    wr8(self + 0x8dcu, 0u);
L_1010c9f1: ;
    t9 = (ecx & 0xffffff00u) | rd16(self + 0x818u) != 2u;
    g->eax = rd32(self);
    g->edx = edx;
    t10 = rd32(self);
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, rd32(t10 + 8u), self, 2, t9, 0x800u);
    t12 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        edx = t12;
        goto L_1010ca36;
    }
    eax = t11;
    wr16(self + 0x818u, 3u);
    return (eax & 0xffffff00u) | 1u;
L_1010ca1b: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, rd32(rd32(self) + 0xcu), self, 1, 1u);
    eax = t3;
L_1010cb06: ;
    if (eax != 0u) goto L_1010cb19;
    wr16(self + 0x818u, 4u);
    return (eax & 0xffffff00u) | 1u;
L_1010ca29: ;
    wr16(self + 0x818u, 5u);
    return (eax & 0xffffff00u) | 1u;
L_1010ca36: ;
    if (eax != 1u) goto L_1010cafd;
    if (rd32(self + 0x804u) == 0u) goto L_1010cafd;
    eax = rd32(self + 0x804u);
    if (rd32(self + 0x814u) != 0u)
    {
        ecx = rd32(self + 0x814u);
    }
    else
    {
        if (rd32(self + 0x810u) != 0u)
        {
            ecx = rd32(self + 0x810u);
        }
        else
        {
            ecx = rd32(self + 0x810u);
            if ((int32_t)eax >= 32)
            {
                edi = COW_IMG(0x1036bf58u);
                eax = 0u;
                ecx = 0xffffffffu;
                cf = 0u;
                pf = PARITY(0u);
                af = 0u;
                zf = 1u;
                sf = 0u;
                of = 0u;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                t13 = ~ecx - 1u;
                g->ecx = t13;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t14 = cow_cdecl(g, COW_IMG(0x10312980u), 5, self + 4u, COW_IMG(0x1036bf58u), t13, in_edi, in_esi);
                t15 = g->ecx;
                t16 = g->edx;
                if (t14 != 0u)
                {
                    ecx = t15;
                    edx = t16;
                }
                else
                {
                    eax = t14;
                    ecx = t15;
                    edx = t16;
                    edi = COW_IMG(0x1036bf58u);
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0xffu);
                    af = 0u;
                    zf = 0u;
                    sf = 1u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    if (rd8(self + ~ecx + 3u) != 0u)
                    {
                        ecx = ~ecx - 1u;
                    }
                    else
                    {
                        ecx = ~ecx - 1u;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->esp = sp0 - 0xcu;
                        t17 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, edx, 1, 1, 0x70u);
                        t18 = g->ecx;
                        t19 = g->edx;
                        if (t17 == 0u)
                        {
                            ecx = t18;
                            edx = t19;
                            eax = 0u;
                        }
                        else
                        {
                            eax = t17;
                            t20 = rd32(self + 0x14u);
                            g->edx = t20;
                            g->esp = sp0 - 0xcu;
                            t21 = cow_thiscall(g, COW_IMG(0x1010b150u), eax, 1, t20);
                            t22 = g->ecx;
                            t23 = g->edx;
                            eax = t21;
                            ecx = t22;
                            edx = t23;
                        }
                        wr32(self + 0x80cu, eax);
                        wr32(self + 0x810u, COW_IMG(0x1010cf20u));
                    }
                }
            }
            if (rd32(self + 0x810u) == 0u)
            {
                wr32(self + 0x810u, COW_IMG(0x1010cb40u));
            }
        }
    }
    if (rd32(self + 0x810u) == 0u)
    {
        eax = rd32(self + 0x810u);
        goto L_1010caf7;
    }
    eax = rd32(self + 0x810u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall_cdecl(g, eax, ecx, 1, self);
    return t24;
L_1010caf7: ;
    return eax & 0xffffff00u;
L_1010cafd: ;
    g->eax = rd32(self);
    t25 = rd32(self);
    g->esp = sp0 - 0xcu;
    t26 = cow_thiscall(g, rd32(t25 + 0xcu), self, 1, 0u);
    eax = t26;
    goto L_1010cb06;
L_1010cb19: ;
    wr16(self + 0x818u, 5u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010c990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010c990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
