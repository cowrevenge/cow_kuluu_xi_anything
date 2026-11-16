/* f_0x102213e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102213e0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d12;
    double d13;
    double d21;
    double d25;
    double d26;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    if (rd32(self + 0x64u) == 0u)
    {
        if (rd8(self + 0x3a0u) == 1u)
        {
            eax = rd8(self + 0x3a0u) - 1u;
            d21 = (double)(float)(double)(int32_t)rd32(self + 0x54u);
            wrf32(sp0 - 4u, (float)d21);
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t22 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t23 = g->ecx;
            t24 = g->edx;
            d25 = cow_take_float(g);
            g->edx = t24;
            d26 = fr(g, (double)rdf32(sp0 - 4u) - d25);
            fpush(g, d26);
            t27 = cow_call_regs(g, COW_IMG(0x10311c6cu), t22, g->ecx, g->edx, 1, 0);
            t28 = g->edx;
            wr32(self + 0x54u, t27);
            if ((int32_t)t27 > 0)
            {
                edx = t28;
            }
            else
            {
                edx = t28;
                wr8(self + 0x3a0u, 2u);
            }
        }
        else
        {
            eax = rd8(self + 0x3a0u) - 1u;
            if (eax != 1u)
            {
                edx = in_edx;
            }
            else
            {
                wr32(sp0 - 0x10u, sp0 - 4u);
                t2 = rd32(self + 0x48u);
                wr32(sp0 - 4u, t2);
                g->ecx = sp0 - 4u;
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                t3 = cow_cdecl(g, COW_IMG(0x1011d050u), 3, sp0 - 4u, in_esi, in_ebx);
                t4 = g->ecx;
                t5 = g->edx;
                wr32(sp0 - 0x14u, t3);
                g->ecx = t4;
                g->edx = t5;
                g->esp = sp0 - 0x10u;
                t6 = cow_cdecl(g, COW_IMG(0x10221770u), 1, t3);
                t7 = g->ecx;
                t8 = g->edx;
                g->ecx = t7;
                g->edx = t8;
                g->esp = sp0 - 0xcu;
                t9 = cow_call_regs(g, COW_IMG(0x10014cf0u), t6, g->ecx, g->edx, 1, 0);
                t10 = g->ecx;
                t11 = g->edx;
                d12 = cow_take_float(g);
                g->ecx = t10;
                d13 = fr(g, fr(g, d12 * (double)rdf32(COW_IMG(0x1032a1acu))) + (double)(int32_t)rd32(self + 0x4cu));
                fpush(g, d13);
                t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t9, g->ecx, g->edx, 1, 0);
                t15 = g->ecx;
                wr32(self + 0x4cu, t14);
                if ((int32_t)(uint32_t)((int32_t)t14 >> 4u) <= (int32_t)t6)
                {
                    edx = t14;
                }
                else
                {
                    ecx = t15;
                    edx = t14;
                    ebx = t6;
                    wr32(sp0 - 0x10u, in_ebp);
                    wr32(sp0 - 0x14u, in_edi);
                    t16 = rd32(sp0 - 4u);
                    edi = t16;
                    eax = 0u;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0u);
                    af = 0u;
                    zf = 1u;
                    sf = 0u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    if (~ecx != 1u)
                    {
                        ebp = t16;
                        wr32(self + 0x48u, ebp);
                        t20 = edx - (ebx << 4u);
                        wr32(self + 0x4cu, t20);
                        edx = t20;
                    }
                    else
                    {
                        t17 = edx - (ebx << 4u);
                        t18 = rd32(self + 0x70u);
                        wr32(self + 0x4cu, t17);
                        t19 = self + t18 * 0xcbu + 0x74u;
                        wr32(self + 0x48u, t19);
                        edx = t17;
                    }
                }
            }
        }
    }
    else
    {
        eax = rd32(self + 0x64u);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10220e90u), self, 0);
        t1 = g->edx;
        edx = t1;
    }
    if (rd32(self + 0x68u) != 0u)
    {
        eax = rd32(self + 0x68u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10220e90u), self + 0x18u, 0);
        t29 = g->edx;
        edx = t29;
    }
    if (rd32(self + 0x6cu) != 0u)
    {
        eax = rd32(self + 0x6cu);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10220e90u), self + 0x30u, 0);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102213e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102213e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
