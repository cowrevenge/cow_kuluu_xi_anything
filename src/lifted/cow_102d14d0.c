/* f_0x102d14d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102d14d0(Guest* g)
{
    uint32_t cf;
    double d10;
    double d5;
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u) + 0x14u) * 0x2bu << 0x10u;
    t2 = rd32(COW_IMG(0x10344e4cu) + arg3 * 0xcu + (t1 >> 0x17u) * 0xcu - rd32(rd32(sp0 + 4u) + 0x14u) * 4u) - (t1 & 0x7f800000u);
    t3 = rd32(sp0 + 4u);
    t4 = rd32(COW_IMG(0x10344e4cu) + arg3 * 0xcu + (t1 >> 0x17u) * 0xcu - rd32(rd32(sp0 + 4u) + 0x14u) * 4u);
    d5 = (double)rdf32(COW_IMG(0x1032961cu));
    wr32(sp0 + 4u, t2);
    esi = arg2;
    edi = t3;
    cf = t4 < (t1 & 0x7f800000u);
    pf = PARITY((uint8_t)(t4 - (t1 & 0x7f800000u)));
    zf = t4 == (t1 & 0x7f800000u);
    sf = (int32_t)(t4 - (t1 & 0x7f800000u)) < 0;
    of = ((t4 ^ (t1 & 0x7f800000u)) & (t4 ^ t4 - (t1 & 0x7f800000u))) >> 0x1fu;
    x0 = fr(g, d5 / (double)rdf32(sp0 + 4u));
L_102d151d: ;
    t6 = rd32(edi + esi * 4u);
    t7 = rd32(COW_IMG(0x103cc0ccu) + arg3 * 8u);
    wr32(sp0 + 4u, t6);
    if ((int32_t)t6 >= (int32_t)(1u << (rd32(t7 + 4u) - 1u & 0x1fu)))
    {
        eax = t6;
        edx = rd32(t7 + 4u);
        ebp = 1u << (rd32(t7 + 4u) - 1u & 0x1fu);
        t8 = eax + (0xffffffffu << (edx & 0x1fu));
        wr32(sp0 + 4u, t8);
    }
    t9 = rd32(edi + 0x10u);
    d10 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * x0) + (double)rdf32(arg4 + esi * 4u + rd32(edi + 0x10u) * 4u + 0xc80u));
    wrf32(arg4 + esi * 4u + t9 * 4u + 0xc80u, (float)d10);
    if ((int32_t)(esi - 1u) >= 0)
    {
        cf = esi + t9 < t9;
        pf = PARITY((uint8_t)(esi - 1u));
        zf = esi == 1u;
        sf = (int32_t)(esi - 1u) < 0;
        of = esi == 0x80000000u;
        esi = esi - 1u;
        goto L_102d151d;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d14d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102d14d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
