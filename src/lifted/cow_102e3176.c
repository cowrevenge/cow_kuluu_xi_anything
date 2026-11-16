/* f_0x102e3176 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e3176(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x1048u) != 0u)
    {
        t1 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0x24u;
        t2 = cow_thiscall(g, COW_IMG(0x102e17b2u), self, 1, t1);
        wr32(sp0 + 0xcu, t2);
    }
    g->edx = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
    t3 = rd32(self + 0x18u);
    t4 = rd32(self + 0x1050u);
    t5 = rd32(self + 0x1054u);
    t6 = rd32(self + 0x2cu);
    g->esp = sp0 - 0x18u;
    cow_thiscall_cdecl(g, COW_IMG(0x102e2005u), t6, 3, in_edi, in_esi, in_ebx);
    t7 = g->edx;
    if (rd32(self + 0x1058u) == 0u)
    {
        edx = t7;
    }
    else
    {
        edx = t7;
        ebx = (arg1 & 3u) * 0x20u + (arg2 & 3u) * 4u + t6;
        esi = 0u;
        loc_10 = 0u;
L_102e31e3: ;
        eax = self;
        ecx = self + 0x38u;
        edi = rd32(sp0 + 0xcu);
        loc_14 = 0u;
        loc_c = 0u;
        x0 = (double)rdf32(ebx + (esi & 3u) * 4u);
L_102e31f7: ;
        d8 = fr(g, (double)rdf32(edi + 8u) - (double)rdf32(ecx));
        d9 = fr(g, (double)rdf32(edi + 4u) - (double)rdf32(ecx - 4u));
        d10 = fr(g, (double)rdf32(edi) - (double)rdf32(ecx - 8u));
        d11 = fr(g, fr(g, fr(g, d8 * d8) + fr(g, d9 * d9)) + fr(g, d10 * d10));
        if (!(d11 < (double)rdf32(COW_IMG(0x1034616cu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1034616cu)), 3u);
        }
        else
        {
            eax = loc_c;
            loc_14 = loc_c;
        }
        if (loc_c + 1u < 0x100u)
        {
            ecx = ecx + 0x10u;
            loc_c = loc_c + 1u;
            goto L_102e31f7;
        }
        d12 = (double)(float)fr(g, fr(g, (double)rdf32(edi + loc_10 + 0xcu) * (double)rdf32(COW_IMG(0x10329a20u))) + x0);
        wr16(edx, (uint16_t)((uint32_t)fist32(g, d12) << 8u | loc_14));
        if (esi + 1u < rd32(self + 0x1058u))
        {
            edx = edx + 2u;
            esi = esi + 1u;
            loc_10 = loc_10 + 0x10u;
            goto L_102e31e1;
        }
        edx = edx + 2u;
    }
    g->fcw = (uint16_t)rd32(COW_IMG(0x109b1a4cu));
    g->edx = edx;
    return rd32(COW_IMG(0x109b1a4cu));
L_102e31e1: ;
    goto L_102e31e3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e3176(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e3176(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
