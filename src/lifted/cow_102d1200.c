/* f_0x102d1200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102d1200(Guest* g)
{
    double d10;
    double d11;
    double d13;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;

    t1 = rd32(sp0 + 0x10u);
    t2 = rd32(sp0 + 0xcu);
    t3 = rd32(sp0 + 8u);
    t4 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102d12c0u), 4, t4, t3, t2, t1);
    t5 = rd32(t3 + 0x14u) * 0x2bu << 0x10u;
    t6 = rd32(COW_IMG(0x10344e4cu) + t2 * 0xcu + (t5 >> 0x17u) * 0xcu - rd32(t3 + 0x14u) * 4u) - (t5 & 0x7f800000u);
    t7 = rd32(COW_IMG(0x10344e9cu) + t2 * 4u);
    t8 = rd32(COW_IMG(0x103cc0c8u) + t2 * 8u);
    d9 = (double)rdf32(COW_IMG(0x1032961cu));
    wr32(sp0 + 0x10u, t6);
    d10 = fr(g, d9 / (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 + 8u, (float)d10);
    if ((int32_t)t1 <= 0)
    {
        eax = 0xcu;
    }
    else
    {
        ebx = t3;
        ebp = t7;
        esi = t8;
        edi = t1;
        eax = 0xcu;
        ecx = rd32(sp0 + 4u);
        ebx = ebx - rd32(sp0 + 4u);
L_102d127e: ;
        d11 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(ecx)) + (double)rdf32(COW_IMG(0x10343990u)));
        wrf32(sp0 + 4u, (float)d11);
        t12 = (uint32_t)(int16_t)rd16(sp0 + 4u);
        wr32(sp0 + 0xcu, t12);
        d13 = fr(g, (double)rdf32(ecx) - fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(sp0 + 8u)));
        wrf32(ecx, (float)d13);
        wr32(ebx + ecx, t12 & ebp);
        if (edi != 1u)
        {
            eax = eax + rd32(esi + (t12 & ebp) * 8u + 4u);
            ecx = ecx + 4u;
            edi = edi - 1u;
            goto L_102d127e;
        }
        eax = eax + rd32(esi + (t12 & ebp) * 8u + 4u);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d1200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d1200(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
