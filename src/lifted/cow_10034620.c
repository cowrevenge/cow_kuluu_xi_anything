/* f_0x10034620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10034620(Guest* g)
{
    double d16;
    double d17;
    double d18;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_70;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 140u);

    wr32(sp0 - 0x74u, in_ebx);
    wr32(sp0 - 0x78u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x60u, 0);
    t1 = g->edx;
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        edx = t1;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        edx = t1;
        t2 = rd16(rd32(COW_IMG(0x1045ec24u)) + 0x32u);
        wr32(sp0 - 0x70u, t2);
        if ((int32_t)rd16(rd32(COW_IMG(0x1045ec24u)) + 0x32u) <= 0)
        {
            eax = t2;
            ebp = in_ebp;
            edi = in_edi;
        }
        else
        {
            ecx = rd32(COW_IMG(0x1045ec24u));
            loc_70 = t2;
            wr32(sp0 - 0x7cu, in_ebp);
            wr32(sp0 - 0x80u, in_edi);
            ebx = 0u;
            edi = ecx + 0x3au;
L_1003465a: ;
            t3 = rd32(edi - 4u);
            wr32(sp0 - 0x60u, t3);
            wr32(sp0 - 0x5cu, rd32(edi));
            t4 = rd32(edi + 4u);
            wr32(sp0 - 0x58u, t4);
            t5 = rd32(edi + 8u);
            wr32(sp0 - 0x54u, t5);
            wr32(sp0 - 0x84u, sp0 - 0x60u);
            wr32(sp0 - 0x88u, sp0 - 0x50u);
            t6 = COW_IMG(0x1045f030u) + ebx * 0x34u;
            g->eax = sp0 - 0x50u;
            g->esp = sp0 - 0x80u;
            t7 = cow_thiscall(g, COW_IMG(0x10032b50u), t6, 2, sp0 - 0x50u, sp0 - 0x60u);
            wr32(t6, rd32(t7));
            t8 = rd32(t7 + 4u);
            wr32(t6 + 4u, t8);
            t9 = rd32(t7 + 8u);
            wr32(t6 + 8u, t9);
            t10 = rd32(t7 + 0xcu);
            wr32(t6 + 0xcu, t10);
            g->eax = t10;
            g->edx = t9;
            t11 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
            t12 = g->edx;
            cow_call_regs(g, COW_IMG(0x10032da0u), t11, t6, g->edx, 1, 0);
            t13 = rd32(edi + 0xcu);
            wr32(sp0 - 0x6cu, t13);
            t14 = rd32(edi + 0x10u);
            wr32(sp0 - 0x68u, t14);
            t15 = rd32(edi + 0x14u);
            wr32(sp0 - 0x64u, t15);
            d16 = fr(g, cow_bits2f(t13) + (double)rdf32(COW_IMG(0x1045f040u) + ebx * 0x34u));
            wrf32(COW_IMG(0x1045f040u) + ebx * 0x34u, (float)d16);
            d17 = fr(g, cow_bits2f(t14) + (double)rdf32(COW_IMG(0x1045f044u) + ebx * 0x34u));
            wrf32(COW_IMG(0x1045f044u) + ebx * 0x34u, (float)d17);
            d18 = fr(g, cow_bits2f(t15) + (double)rdf32(COW_IMG(0x1045f048u) + ebx * 0x34u));
            wrf32(COW_IMG(0x1045f048u) + ebx * 0x34u, (float)d18);
            if (ebx != 0u)
            {
                edx = t14;
            }
            else
            {
                edx = t14;
                g->edx = edx;
                g->esp = sp0 - 0x80u;
                t19 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
                t20 = g->edx;
                g->edx = t20;
                t21 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
                t22 = g->edx;
                wr32(sp0 - 0x84u, 0x4096cbe4u);
                g->edx = t22;
                t23 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, 0x4096cbe4u);
                t24 = g->edx;
                wr32(sp0 - 0x84u, COW_IMG(0x1045f040u));
                g->edx = t24;
                t25 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, COW_IMG(0x1045f040u));
                t26 = g->edx;
                g->edx = t26;
                cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                t27 = g->edx;
                edx = t27;
            }
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 - 0x70u))
            {
                ebx = ebx + 1u;
                edi = edi + 0x1eu;
                goto L_1003465a;
            }
            eax = rd32(sp0 - 0x70u);
            ebp = rd32(sp0 - 0x7cu);
            edi = rd32(sp0 - 0x80u);
        }
    }
    g->esp = sp0 - 0x78u;
    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10034620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10034620(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
