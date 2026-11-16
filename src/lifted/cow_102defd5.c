/* f_0x102defd5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102defd5(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_8;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(rd32(self + 4u) + 4u) == rd32(rd32(self) + 4u))
    {
        eax = rd32(self + 4u);
        ecx = rd32(self);
        edx = rd32(rd32(self + 4u) + 4u);
        if (rd32(ecx + 0x10u) != 0u) goto L_102df103;
        if (rd32(eax + 0x1058u) != rd32(ecx + 0x1058u))
        {
            edx = rd32(eax + 0x1058u);
            goto L_102df103;
        }
        t1 = rd32(eax + 0x105cu);
        if (rd32(eax + 0x105cu) != rd32(ecx + 0x105cu))
        {
            edx = t1;
            goto L_102df103;
        }
        loc_14 = t1;
        if (rd32(eax + 0x1060u) != rd32(ecx + 0x1060u))
        {
            edx = rd32(eax + 0x1060u);
            goto L_102df103;
        }
        edx = rd32(eax + 0x1060u);
        if (rd32(eax + 0xcu) != 0u) goto L_102df04f;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t2 = cow_thiscall(g, COW_IMG(0x102ddda6u), self, 0);
        t3 = g->edx;
        eax = t2;
        edx = t3;
L_102df108: ;
    }
    else
    {
        edx = rd32(rd32(self + 4u) + 4u);
        eax = 0x80004005u;
    }
    g->edx = edx;
    return eax;
L_102df04f: ;
    if (rd32(eax + 0x14u) == 0u) goto L_102df06d;
    if (eax + 0x30u == ecx + 0x30u) goto L_102df06d;
    esi = eax + 0x30u;
    edi = ecx + 0x30u;
    ecx = 0x100u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
        goto L_102df103;
    }
    edx = 0u;
L_102df06d: ;
    if (rd32(eax + 0x1060u) != 0u)
    {
        loc_8 = 0u;
        loc_10 = rd32(sp0 - 0x10u);
L_102df083: ;
        if (loc_14 == 0u)
        {
            edx = rd32(eax + 0x18u) + rd32(eax + 0x1054u) * loc_8;
            loc_10 = 0u;
            goto L_102df0eb;
        }
        edx = rd32(eax + 0x18u) + rd32(eax + 0x1054u) * loc_8;
        ebx = rd32(rd32(self) + 0x18u) + rd32(rd32(self) + 0x1054u) * loc_8;
        loc_10 = 0u;
L_102df0ae: ;
        t4 = rd32(eax + 0x1064u);
        esi = ebx;
        edi = edx;
        ecx = t4 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t4 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t5 = rd32(rd32(self + 4u) + 0x105cu);
        if (loc_10 + 1u < rd32(rd32(self + 4u) + 0x105cu))
        {
            eax = rd32(self + 4u);
            edx = edx + rd32(rd32(self + 4u) + 0x1050u);
            ebx = ebx + rd32(rd32(self) + 0x1050u);
            loc_10 = loc_10 + 1u;
            goto L_102df0ae;
        }
        edx = edx + rd32(rd32(self + 4u) + 0x1050u);
        loc_14 = t5;
        loc_10 = loc_10 + 1u;
L_102df0eb: ;
        if (loc_8 + 1u < rd32(rd32(self + 4u) + 0x1060u))
        {
            eax = rd32(self + 4u);
            loc_8 = loc_8 + 1u;
            goto L_102df080;
        }
    }
    eax = 0u;
    goto L_102df108;
L_102df080: ;
    goto L_102df083;
L_102df103: ;
    eax = 0x80004005u;
    goto L_102df108;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102defd5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102defd5(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
