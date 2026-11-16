/* f_0x102ca260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102ca260(Guest* g)
{
    double d11;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_2010_f;
    uint32_t loc_2014;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 8240u);

    wr32(sp0 - 0x2018u, in_ebx);
    wr32(sp0 - 0x201cu, in_esi);
    wr32(sp0 - 0x2020u, in_edi);
    t1 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x2014u, t1);
    t2 = rd32(t1) + 1u;
    wr32(t1, t2);
    if ((int32_t)rd32(arg1 + 0x28u) <= 0)
    {
        eax = 0u;
        ecx = t1 + 0x1003u & 0xfffff000u;
        edx = in_edx;
        loc_2014 = t1;
    }
    else
    {
        ecx = t1 + 0x1003u & 0xfffff000u;
        esi = rd32(arg1 + 0x28u);
        loc_2014 = t1;
        wr32(sp0 - 0x2024u, in_ebp);
        eax = 0u;
        edx = in_edx;
        ebp = rd32(arg1 + 0x1cu);
L_102ca29b: ;
        t3 = rd8(eax + ebp);
        wr8(eax + sp0 - 0x2000u, (uint8_t)t3);
        if ((int32_t)(eax + 1u) < (int32_t)esi)
        {
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t3;
            goto L_102ca29b;
        }
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t3;
    }
    wr8(eax + sp0 - 0x2000u, 0u);
    wr32(sp0 - 0x2024u, ecx);
    wr8(eax + sp0 - 0x1fffu, 0u);
    wr8(eax + sp0 - 0x1ffeu, 0u);
    wr8(eax + sp0 - 0x1ffdu, 0u);
    wr32(sp0 - 0x2028u, sp0 - 0x2008u);
    wr32(sp0 - 0x202cu, sp0 - 0x2000u);
    g->eax = sp0 - 0x2008u;
    g->esp = sp0 - 0x2008u;
    t4 = cow_call_regs(g, COW_IMG(0x102cec10u), g->eax, g->ecx, edx, 1, 9, sp0 - 0x2000u, sp0 - 0x2008u, ecx, in_edi, in_esi, in_ebx, loc_2014, rd32(sp0 - 0x2010u), rd32(sp0 - 0x200cu));
    if ((int32_t)t4 >= 0)
    {
        eax = t4;
        goto L_102ca2e0;
    }
    g->ebx = rd32(sp0 - 0x2018u);
    g->esi = rd32(sp0 - 0x201cu);
    g->edi = rd32(sp0 - 0x2020u);
    return 0x80000005u;
L_102ca2e0: ;
    ecx = 0u;
L_102ca2e2: ;
    d5 = (double)rdf32(ecx + rd32(sp0 - 0x2008u));
    if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u;
        edx = rd32(sp0 - 0x2008u);
        d6 = (double)rdf32(ecx + edx);
        if (!(d6 < (double)rdf32(COW_IMG(0x10343994u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10343994u)), 0u);
            x0 = (double)rdf32(ecx + edx);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10343994u)), 0u);
            x0 = (double)rdf32(COW_IMG(0x10343994u));
        }
    }
    else
    {
        eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u;
        x0 = (double)rdf32(COW_IMG(0x10343998u));
    }
    d7 = (double)(float)fr(g, x0 + (double)rdf32(COW_IMG(0x10343990u)));
    wrf32(sp0 - 0x2010u, (float)d7);
    d8 = (double)rdf32(ecx + rd32(sp0 - 0x2004u));
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u;
        edx = rd32(sp0 - 0x2004u);
        loc_2010_f = d7;
        d9 = (double)rdf32(ecx + edx);
        if (!(d9 < (double)rdf32(COW_IMG(0x10343994u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10343994u)), 0u);
            x0 = (double)rdf32(ecx + edx);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10343994u)), 0u);
            x0 = (double)rdf32(COW_IMG(0x10343994u));
        }
    }
    else
    {
        eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u;
        loc_2010_f = d7;
        x0 = (double)rdf32(COW_IMG(0x10343998u));
    }
    t10 = rd16(sp0 - 0x2010u);
    d11 = fr(g, x0 + (double)rdf32(COW_IMG(0x10343990u)));
    wr16(ecx + rd32(arg1 + 0x20u), (uint16_t)t10);
    wrf32(sp0 - 0x200cu, (float)(double)(float)d11);
    t12 = rd16(sp0 - 0x200cu);
    wr16(ecx + rd32(arg1 + 0x20u) + 2u, (uint16_t)t12);
    if ((int32_t)(ecx + 4u) < 4096)
    {
        eax = ((eax | t10) & 0xffff0000u) | t12;
        ecx = ecx + 4u;
        goto L_102ca2e2;
    }
    g->ebx = rd32(sp0 - 0x2018u);
    g->esi = rd32(sp0 - 0x201cu);
    g->edi = rd32(sp0 - 0x2020u);
    return (rd32(rd32(sp0 - 0x2014u)) != 1u) + 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ca260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ca260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
