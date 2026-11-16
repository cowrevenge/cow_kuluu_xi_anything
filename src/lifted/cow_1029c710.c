/* f_0x1029c710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1029c710(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d19;
    double d5;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_14_f;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    double loc_c_f;
    uint32_t t1;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t1 * t1, COW_IMG(0x103bc7b0u), 0x2au, in_edi, in_ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 8u));
    fpush(g, d5);
    g->esp = sp0 - 0x20u;
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    if ((int32_t)t1 <= 0)
    {
        edi = t2;
        goto L_1029c841;
    }
    ecx = t7;
    ebx = t1;
    edi = t2;
    loc_4 = t2;
    loc_8 = t6;
    d8 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    t9 = (uint32_t)((int32_t)(ebx - (uint32_t)((int32_t)ebx >> 0x1fu)) >> 1u);
    eax = t9;
    edx = (uint32_t)((int32_t)ebx >> 0x1fu);
    ebp = -t9;
    loc_14_f = d8;
    loc_10 = ebx;
    loc_18 = -t9;
L_1029c76e: ;
    wr32(sp0 + 8u, ebp);
    d10 = fr(g, (double)(int32_t)loc_18 / loc_14_f);
    d11 = (double)(float)fr(g, d10 * d10);
    esi = 0u;
    loc_c_f = d11;
L_1029c786: ;
    d12 = fr(g, (double)(int32_t)rd32(sp0 + 8u) / loc_14_f);
    wrf32(sp0 + 4u, (float)fr(g, sqrt(fr(g, fr(g, d12 * d12) + loc_c_f))));
    d13 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d13, rdf64(COW_IMG(0x10340b90u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d13, rdf64(COW_IMG(0x10340b90u)), 0u) & 0x4100u;
        d14 = (double)rdf32(sp0 + 4u);
        if (!(d14 < rdf64(COW_IMG(0x10340b68u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, rdf64(COW_IMG(0x10340b68u)), 0u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            d15 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a378u)) - (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x10329cecu)));
            fpush(g, (double)(int32_t)loc_8);
            g->esp = sp0 - 0xcu;
            t16 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, in_esi, in_ebp, in_edi, in_ebx, loc_18, cow_f2bits(loc_14_f), loc_10);
            t17 = g->ecx;
            t18 = g->edx;
            g->edx = t18;
            d19 = fr(g, d15 * (double)rdf32(COW_IMG(0x10329a20u)));
            fpush(g, d19);
            g->esp = sp0 - 0x28u;
            t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
            t21 = g->edx;
            if ((int32_t)t20 <= 255)
            {
                eax = t20;
                edx = t21;
                if ((int32_t)eax < 0)
                {
                    eax = 0u;
                }
            }
            else
            {
                edx = t21;
                eax = 0xffu;
            }
            wr8(edi + esi, (uint8_t)eax);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, rdf64(COW_IMG(0x10340b68u)), 0u);
            wr8(edi + esi, 0xffu);
        }
    }
    else
    {
        eax = cow_fsw(g, d13, rdf64(COW_IMG(0x10340b90u)), 0u) & 0x4100u;
        wr8(edi + esi, 0u);
    }
    t22 = rd32(sp0 + 8u) + 1u;
    wr32(sp0 + 8u, t22);
    if ((int32_t)(esi + 1u) < (int32_t)ebx)
    {
        ecx = t22;
        esi = esi + 1u;
        goto L_1029c786;
    }
    ecx = t22;
    if (loc_10 != 1u)
    {
        eax = loc_10 - 1u;
        edx = loc_18 + 1u;
        edi = ebx + edi;
        loc_10 = loc_10 - 1u;
        loc_18 = loc_18 + 1u;
        goto L_1029c76e;
    }
    return loc_4;
L_1029c841: ;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029c710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029c710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
