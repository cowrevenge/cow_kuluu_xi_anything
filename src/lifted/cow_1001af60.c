/* f_0x1001af60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_1001af60(Guest* g)
{
    double d10;
    double d12;
    double d17;
    double d18;
    double d19;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);

    if ((int32_t)arg5 > 4)
    {
        loc_4 = self;
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_thiscall(g, COW_IMG(0x1001b1a0u), self, 0);
        t2 = g->ecx;
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x80u);
        t5 = g->edx;
        if (t1 != 0u)
        {
            eax = t4;
            edx = t5;
            edi = t1;
            loc_4 = t1;
            goto L_1001afae;
        }
        eax = t4;
        edx = t5;
        edi = t1;
        loc_4 = t1;
        if (eax == 0u)
        {
            eax = 0u;
        }
        else
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t6 = cow_thiscall(g, COW_IMG(0x1001b3b0u), eax, 0);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
        wr32(self + 4u, eax);
        if (eax == 0u) goto L_1001b0a2;
        ebx = eax;
L_1001afca: ;
        d10 = (double)rdf32(sp0 + 0x18u);
        if (d10 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            wr32(sp0 + 0x18u, 0x41200000u);
        }
        t11 = rd32(sp0 + 0x18u);
        d12 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x18u));
        wr32(ebx + 0x28u, arg5);
        wr32(ebx + 0x14u, t11);
        wr8(ebx + 8u, 1u);
        wr32(ebx + 0xcu, 0u);
        wr32(ebx + 0x10u, 0u);
        wrf32(ebx + 0x18u, (float)d12);
        if ((int32_t)arg5 <= 0)
        {
            eax = arg5;
        }
        else
        {
            t13 = rd32(sp0 + 8u) - rd32(sp0 + 4u);
            t14 = rd32(sp0 + 0xcu);
            t15 = rd32(sp0 + 4u);
            wr32(sp0 + 8u, t13);
            wr32(sp0 + 4u, t14 - t15);
            wr32(sp0 + 0xcu, arg4 - t15);
            eax = t13;
            ecx = t14 - t15;
            ebp = 0u;
            esi = t15;
            edi = ebx + 0x70u;
L_1001b033: ;
            wr32(edi - 0x10u, rd32(esi));
            if (rd32(esi) != 0u)
            {
                edx = rd32(esi);
                g->esp = sp0 - 0x14u;
                cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(edx), g->edx, 1, 0);
                eax = rd32(sp0 + 8u);
                ecx = rd32(sp0 + 4u);
            }
            t16 = rd32(sp0 + 0xcu);
            d17 = (double)rdf32(eax + esi);
            wrf32(edi, (float)d17);
            d18 = (double)rdf32(ecx + esi);
            wrf32(edi - 0x34u, (float)d18);
            wr8(ebp + ebx + 0x4cu, rd8(esi + t16));
            if ((int32_t)(ebp + 1u) < (int32_t)arg5)
            {
                ebp = ebp + 1u;
                esi = esi + 4u;
                edi = edi + 4u;
                goto L_1001b033;
            }
            edx = arg5;
            edi = loc_4;
        }
        d19 = (double)rdf32(sp0 + 0x1cu);
        if (!(d19 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            x0 = d19;
        }
        else
        {
            x0 = d19;
            x0 = (double)rdf32(COW_IMG(0x1032961cu));
        }
        wrf32(ebx + 0x20u, (float)x0);
        if (edi != 0u)
        {
            t20 = rd32(sp0 + 0x18u);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x1001b520u), edi, 1, t20);
        }
    }
L_1001b0a2: ;
    return;
L_1001afae: ;
    if (eax == 0u) goto L_1001b0a2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, COW_IMG(0x1001b3b0u), eax, 0);
    t9 = g->edx;
    if (t8 == 0u) goto L_1001b0a2;
    eax = t8;
    edx = t9;
    ebx = t8;
    wr32(edi + 4u, ebx);
    goto L_1001afca;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001af60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001af60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
