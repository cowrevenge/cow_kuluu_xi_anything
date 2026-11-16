/* f_0x101d5cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101d5cd0(Guest* g)
{
    double d14;
    double d17;
    double d18;
    double d19;
    double d20;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    t1 = rd32(rd32(sp0 + 4u) + 8u);
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x10u, 0x4e6e6b28u);
    t2 = rd32(rd32(sp0 + 4u));
    wr32(sp0 - 8u, t2);
    wr32(sp0 - 0xcu, 2u);
    eax = self + 0x4cu;
    edx = t2;
    ebp = 0u;
    loc_4 = t1;
    loc_8 = t2;
    loc_c = 2u;
L_101d5cfd: ;
    ebx = 0x51u;
    edi = eax;
L_101d5d04: ;
    if (rd32(edi) != 0u)
    {
        ecx = rd32(edi);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t3 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t5;
        }
        else
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            esi = t3;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t6 = cow_stdcall(g, COW_IMG(0x10085240u), 0);
            t7 = g->edx;
            if (t6 == 0u)
            {
                eax = t6;
                edx = t7;
                goto L_101d5d77;
            }
            eax = t6;
            edx = t7;
L_101d5d1e: ;
            if (eax == esi) goto L_101d5d2f;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t8 = cow_thiscall(g, COW_IMG(0x10085270u), eax, 0);
            t9 = g->edx;
            if (t8 != 0u)
            {
                eax = t8;
                edx = t9;
                goto L_101d5d1e;
            }
            eax = t8;
            edx = t9;
        }
    }
L_101d5d77: ;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        edi = edi + 4u;
        goto L_101d5d04;
    }
    edi = edi + 4u;
    wr32(sp0 - 0xcu, loc_c - 1u);
    if (loc_c != 1u)
    {
        eax = edi;
        loc_c = loc_c - 1u;
        goto L_101d5cfd;
    }
    eax = edi;
    if (ebp == 0u) goto L_101d5da7;
    if (rd32(ebp + 0x70u) == 0u)
    {
        eax = rd32(ebp + 0x70u);
        goto L_101d5da7;
    }
    eax = rd32(ebp + 0x70u);
    return (eax & 0xffff0000u) | rd16(eax + 0x74u);
L_101d5d2f: ;
    g->eax = eax;
    g->edx = rd32(esi);
    t10 = rd32(esi);
    g->esp = sp0 - 0x20u;
    t11 = cow_thiscall(g, rd32(t10 + 0x1bcu), esi, 0);
    t12 = g->edx;
    t13 = rd32(esi);
    d14 = fr(g, (double)rdf32(t11) - (double)rdf32(sp0 - 8u));
    wrf32(sp0 + 4u, (float)d14);
    g->eax = t13;
    g->edx = t12;
    t15 = cow_thiscall(g, rd32(t13 + 0x1bcu), esi, 0);
    t16 = g->edx;
    d17 = fr(g, (double)rdf32(t15 + 8u) - (double)rdf32(sp0 - 4u));
    d18 = (double)rdf32(sp0 + 4u);
    d19 = fr(g, fr(g, d17 * d17) + fr(g, d18 * d18));
    d20 = (double)rdf32(sp0 - 0x10u);
    if (!(d19 < d20))
    {
        eax = (t15 & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, d20, 1u);
        edx = t16;
        x0 = d19;
    }
    else
    {
        eax = (t15 & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, d20, 1u);
        edx = t16;
        x0 = d19;
        wrf32(sp0 - 0x10u, (float)(double)(float)x0);
        ebp = esi;
    }
    goto L_101d5d77;
L_101d5da7: ;
    return eax & 0xffff0000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d5cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d5cd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
