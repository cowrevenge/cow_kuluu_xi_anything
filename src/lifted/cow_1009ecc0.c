/* f_0x1009ecc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1009ecc0(Guest* g)
{
    double d13;
    double d4;
    double d5;
    double d7;
    double d8;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd16(arg1 + 0x14u);
    g->ecx = t1;
    g->esp = sp0 - 0x14u;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    if ((uint8_t)t2 == 0u) goto L_1009edbf;
    ecx = t3;
    if (rd32(arg1 + 0x10u) == 0u) goto L_1009edbf;
    d4 = (double)(float)(double)rdf32(arg1 + 0xcu);
    d5 = (double)rdf32(arg1 + 4u);
    t6 = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    d7 = (double)rdf32(arg1 + 0xcu);
    d8 = (double)rdf32(arg1 + 8u);
    wrf32(t6 + 4u, (float)d5);
    wrf32(t6 + 8u, (float)d8);
    wrf32(t6 + 0xcu, (float)d7);
    t9 = rd32(COW_IMG(0x10480af0u) + rd16(arg1 + 0x14u) * 4u);
    wrf32(t9 + 0x24u, (float)d5);
    wrf32(t9 + 0x28u, (float)d8);
    wrf32(t9 + 0x2cu, (float)d7);
    t10 = rd32(COW_IMG(0x10480af0u) + rd16(arg1 + 0x14u) * 4u);
    t11 = rd16(arg1 + 0x14u);
    wrf32(t10 + 0x44u, (float)d5);
    wrf32(t10 + 0x48u, (float)d8);
    wr32(t10 + 0x4cu, cow_f2bits(d4));
    t12 = (t10 + 0x44u & 0xffffff00u) | rd8(arg1 + 0x17u);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100dd990u), 1, t12);
    d13 = cow_take_float(g);
    t14 = rd32(COW_IMG(0x10480af0u) + rd16(arg1 + 0x14u) * 4u);
    wr32(t14 + 0x14u, 0u);
    wrf32(t14 + 0x18u, (float)d13);
    wr32(t14 + 0x1cu, 0u);
    t15 = rd32(COW_IMG(0x10480af0u) + rd16(arg1 + 0x14u) * 4u);
    t16 = rd16(arg1 + 0x14u);
    wr32(t15 + 0x34u, 0u);
    wrf32(t15 + 0x38u, (float)d13);
    wr32(t15 + 0x3cu, 0u);
    g->eax = rd16(arg1 + 0x14u);
    g->edx = t16;
    t17 = rd16(arg1 + 0x14u);
    t18 = cow_thiscall(g, COW_IMG(0x10092c20u), rd32(COW_IMG(0x10480af0u) + t17 * 4u), 0);
    t19 = g->edx;
    g->esp = sp0;
    g->edx = t19;
    cow_tailcall(g, COW_IMG(0x1008f2a0u), t18, rd32(COW_IMG(0x10480af0u) + rd16(arg1 + 0x14u) * 4u), t19);
    return;
L_1009edbf: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009ecc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009ecc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
