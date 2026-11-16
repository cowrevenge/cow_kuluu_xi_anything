/* f_0x10056160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_10056160(Guest* g)
{
    double d4;
    double d5;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t esi;
    double loc_14_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x14u, 0x4e6e6b28u);
    if ((int32_t)rd32(rd32(self + 0x14u)) <= 0) goto L_10056206;
    ecx = rd32(rd32(self + 0x14u));
    esi = rd32(self + 0x14u) + 0x10u;
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    ebp = ecx;
L_10056187: ;
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    t1 = rd32(self + 0x10u) + (rd32(esi + 4u) & 0xffffffu) * 0x20u + 0x10u;
    wr32(sp0 - 0x30u, t1);
    t2 = (rd32(esi) & 0xffffffu) * 0x20u + rd32(self + 0x10u) + 0x10u;
    wr32(sp0 - 0x34u, t2);
    g->eax = t2;
    g->esp = sp0 - 0x24u;
    t3 = cow_stdcall(g, COW_IMG(0x10055f60u), 4, t2, t1, sp0 - 0x10u, arg2);
    d4 = cow_take_float(g);
    d5 = (double)rdf32(sp0 - 0x14u);
    if ((cow_fsw(g, d5, d4, 1u) & 0x4100u) != 0u)
    {
        x0 = d4;
    }
    else
    {
        x0 = d4;
        wrf32(sp0 - 0x14u, (float)(double)(float)x0);
        t6 = rd32(sp0 - 0x10u);
        t7 = rd32(sp0 - 0xcu);
        wr32(arg1, t6);
        t8 = rd32(sp0 - 8u);
        wr32(arg1 + 4u, t7);
        wr32(arg1 + 8u, t8);
        loc_14_f = (double)(float)x0;
    }
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        esi = esi + 8u;
        goto L_10056187;
    }
    t9 = rd32(sp0 - 0x20u);
    t10 = rd32(sp0 - 0x24u);
    t11 = rd32(sp0 - 0x1cu);
    wr32(arg1 + 0xcu, 0x3f800000u);
    g->ebx = t9;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = t11;
    g->ebp = t10;
    g->edx = arg1;
    fpush(g, loc_14_f);
    return;
L_10056206: ;
    wr32(arg1 + 0xcu, 0x3f800000u);
    fpush(g, cow_bits2f(0x4e6e6b28u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10056160(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
