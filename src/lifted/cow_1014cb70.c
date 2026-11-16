/* f_0x1014cb70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014cb70(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if ((int32_t)rd32(self + 0x1cu) <= 0)
    {
        eax = rd32(self + 0x1cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x1cu);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t2 = g->ecx;
        t3 = g->edx;
        d4 = cow_take_float(g);
        g->edx = t3;
        fpush(g, d4);
        t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
        t6 = g->edx;
        wr32(self + 0x1cu, rd32(self + 0x1cu) - t5);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        ebx = rd32(COW_IMG(0x104dfd98u));
        goto L_1014cba5;
    }
    ebx = rd32(COW_IMG(0x104dfd98u));
    wr32(self + 0x14u, 0x12u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x1014d000u), self, 0);
    t8 = g->edx;
    g->ebx = in_ebx;
    g->edx = t8;
    return t7;
L_1014cba5: ;
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        if ((uint32_t)(int16_t)rd16(ecx + 0x4cu) == rd32(self + 0x20u))
        {
            edi = (uint32_t)(int16_t)rd16(ecx + 0x4cu);
            if ((int32_t)edi > 0)
            {
                if ((int32_t)edi <= 8)
                {
                    if (rd32(self + 0x24u) != 6u)
                    {
                        ebx = ebx + edi * 0x48u + 0x2c9dcu;
                    }
                    else
                    {
                        eax = rd32(self + 0x24u);
                        ecx = edi * 9u;
                        ebx = ebx + edi * 0x48u + 0x2c9dcu;
                        if (rd32(ebx) == 7u)
                        {
                            g->ebx = ebx;
                            g->esp = sp0 - 0xcu;
                            cow_cdecl(g, COW_IMG(0x1014ca70u), 1, edi);
                        }
                    }
                    t11 = rd32(ebx);
                    wr32(self + 0x24u, t11);
                    edx = t11;
                }
            }
        }
        else
        {
            eax = rd32(self + 0x20u);
            edi = (uint32_t)(int16_t)rd16(ecx + 0x4cu);
            if (edi != 9u)
            {
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x1014ca70u), 1, edi);
                t10 = g->edx;
                wr32(self + 0x20u, edi);
                edx = t10;
            }
            else
            {
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, eax, 0u);
                t9 = g->edx;
                edx = t9;
            }
        }
    }
    if (rd32(self + 0x14u) - 1u > 0x12u) goto L_1014cccd;
    eax = rd32(self + 0x14u) - 1u;
    t12 = rd32(COW_IMG(0x1014cd18u) + eax * 4u);
    switch (t12 - RD)
    {
    case 0x1014cc18u: goto L_1014cc18;
    case 0x1014cc24u: goto L_1014cc24;
    case 0x1014cc30u: goto L_1014cc30;
    case 0x1014cc3cu: goto L_1014cc3c;
    case 0x1014cc48u: goto L_1014cc48;
    case 0x1014cc51u: goto L_1014cc51;
    case 0x1014cc5au: goto L_1014cc5a;
    case 0x1014cc63u: goto L_1014cc63;
    case 0x1014cc6cu: goto L_1014cc6c;
    case 0x1014cc75u: goto L_1014cc75;
    case 0x1014cc7eu: goto L_1014cc7e;
    case 0x1014cc87u: goto L_1014cc87;
    case 0x1014cc90u: goto L_1014cc90;
    case 0x1014cc99u: goto L_1014cc99;
    case 0x1014cca2u: goto L_1014cca2;
    case 0x1014ccabu: goto L_1014ccab;
    case 0x1014ccb4u: goto L_1014ccb4;
    case 0x1014ccbdu: goto L_1014ccbd;
    case 0x1014ccc6u: goto L_1014ccc6;
    default: rt_fatal(g, COW_IMG(0x1014cc11u), "switch");
    }
    return 0;
L_1014cc18: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d1d0u), self, 0);
    t31 = g->edx;
    edx = t31;
L_1014cccd: ;
    if ((rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u) & 0x4000000u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
        ecx = rd32(COW_IMG(0x104dfd98u));
        wr32(ecx + 0x2c7d0u, eax & 0xfbffffffu);
        if ((int32_t)rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu) < 0)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            wr32(eax + 0x2c7ccu, 0u);
        }
    }
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
    }
    else
    {
        eax = rd32(self + 0x1cu);
        wr32(self + 0x1cu, 0xffffffffu);
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_1014cc24: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d220u), self, 0);
    t30 = g->edx;
    edx = t30;
    goto L_1014cccd;
L_1014cc30: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d280u), self, 0);
    t29 = g->edx;
    edx = t29;
    goto L_1014cccd;
L_1014cc3c: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d310u), self, 0);
    t28 = g->edx;
    edx = t28;
    goto L_1014cccd;
L_1014cc48: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1014d3b0u), self, edx, 0);
    t27 = g->edx;
    edx = t27;
    goto L_1014cccd;
L_1014cc51: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x1014d3f0u), 0);
    t26 = g->edx;
    edx = t26;
    goto L_1014cccd;
L_1014cc5a: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d400u), self, 0);
    t25 = g->edx;
    edx = t25;
    goto L_1014cccd;
L_1014cc63: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d4d0u), self, 0);
    t24 = g->edx;
    edx = t24;
    goto L_1014cccd;
L_1014cc6c: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d510u), self, 0);
    t23 = g->edx;
    edx = t23;
    goto L_1014cccd;
L_1014cc75: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d590u), self, 0);
    t22 = g->edx;
    edx = t22;
    goto L_1014cccd;
L_1014cc7e: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d5e0u), self, 0);
    t21 = g->edx;
    edx = t21;
    goto L_1014cccd;
L_1014cc87: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d670u), self, 0);
    t20 = g->edx;
    edx = t20;
    goto L_1014cccd;
L_1014cc90: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d6b0u), self, 0);
    t19 = g->edx;
    edx = t19;
    goto L_1014cccd;
L_1014cc99: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d710u), self, 0);
    t18 = g->edx;
    edx = t18;
    goto L_1014cccd;
L_1014cca2: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d750u), self, 0);
    t17 = g->edx;
    edx = t17;
    goto L_1014cccd;
L_1014ccab: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d7d0u), self, 0);
    t16 = g->edx;
    edx = t16;
    goto L_1014cccd;
L_1014ccb4: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d810u), self, 0);
    t15 = g->edx;
    edx = t15;
    goto L_1014cccd;
L_1014ccbd: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d8a0u), self, 0);
    t14 = g->edx;
    edx = t14;
    goto L_1014cccd;
L_1014ccc6: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1014d8b0u), self, 0);
    t13 = g->edx;
    edx = t13;
    goto L_1014cccd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014cb70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014cb70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
