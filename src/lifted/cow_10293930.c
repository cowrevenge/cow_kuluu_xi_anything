/* f_0x10293930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10293930(Guest* g)
{
    double d12;
    double d15;
    double d2;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)(rd32(sp0 + 8u) - 1u) <= 0)
    {
        eax = rd32(sp0 + 8u);
        ebp = rd32(sp0 + 4u);
    }
    else
    {
        ebx = rd32(sp0 + 8u) - 1u;
        ebp = rd32(sp0 + 4u);
        ecx = self;
        edx = in_edx;
        esi = 0u;
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0xcu));
L_1029394f: ;
        g->ecx = ecx;
        g->edx = edx;
        t1 = rd32(ebp + 4u);
        d2 = fr(g, x0 * (double)rdf32(esi * 4u + rd32(ebp + 4u)));
        fpush(g, d2);
        g->esp = sp0 - 0x10u;
        t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 + 4u, t3);
        d6 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu));
        wrf32(esi * 4u + t1, (float)d6);
        if ((int32_t)(esi + 1u) < (int32_t)ebx)
        {
            ecx = t4;
            edx = t5;
            esi = esi + 1u;
            goto L_1029394f;
        }
        eax = rd32(sp0 + 8u);
    }
    if ((int32_t)eax <= 1)
    {
        x0 = (double)rdf32(rd32(ebp));
    }
    else
    {
        ecx = rd32(ebp);
        x0 = (double)rdf32(rd32(ebp));
        d7 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0xcu));
        wrf32(sp0 + 8u, (float)d7);
        ebx = eax - 1u;
        esi = 0u;
L_10293999: ;
        d8 = fr(g, fr(g, (double)rdf32(esi + rd32(ebp) + 4u) - fr(g, x0 + (double)rdf32(esi + rd32(ebp + 4u)))) * (double)rdf32(sp0 + 8u));
        if ((cow_fsw(g, d8, rdf64(COW_IMG(0x1032ab90u)), 2u) & 0x100u) != 0u)
        {
            eax = cow_fsw(g, d8, rdf64(COW_IMG(0x1032ab90u)), 2u) & 0x100u;
            edx = rd32(ebp + 4u);
            edi = esi + rd32(ebp + 4u);
            x1 = d8;
            x0 = fr(g, x0 + (double)rdf32(esi + rd32(ebp + 4u)));
            if (!(x1 <= rdf64(COW_IMG(0x10340b80u))))
            {
                x1 = (double)rdf32(COW_IMG(0x103295d8u));
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, rdf64(COW_IMG(0x10340b80u)), 2u);
                g->ecx = ecx;
                d12 = fr(g, x1 - rdf64(COW_IMG(0x1032ab90u)));
                fpush(g, d12);
                g->esp = sp0 - 0x10u;
                t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t14 = g->ecx;
                wr32(sp0 + 4u, t13);
                ecx = t14;
                x1 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu));
            }
        }
        else
        {
            eax = cow_fsw(g, d8, rdf64(COW_IMG(0x1032ab90u)), 2u) & 0x100u;
            edx = rd32(ebp + 4u);
            edi = esi + rd32(ebp + 4u);
            x1 = d8;
            x0 = fr(g, x0 + (double)rdf32(esi + rd32(ebp + 4u)));
            g->ecx = ecx;
            d9 = fr(g, x1 + rdf64(COW_IMG(0x1032ab90u)));
            fpush(g, d9);
            g->esp = sp0 - 0x10u;
            t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t11 = g->ecx;
            wr32(sp0 + 4u, t10);
            ecx = t11;
            x1 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu));
        }
        d15 = fr(g, x1 + (double)rdf32(edi));
        wrf32(edi, (float)d15);
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            esi = esi + 4u;
            x0 = fr(g, x0 + x1);
            goto L_10293999;
        }
        x0 = fr(g, x0 + x1);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10293930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10293930(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
