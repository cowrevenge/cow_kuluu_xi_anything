/* f_0x10282050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10282050(Guest* g)
{
    double d1;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    d1 = fr(g, (double)rdf32(arg1) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d1);
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
    wr8(sp0 - 8u, (uint8_t)t2);
    g->ecx = t3;
    g->edx = t4;
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    d9 = fr(g, (double)rdf32(arg1 + 8u) * (double)rdf32(COW_IMG(0x10329a20u)));
    wr8(sp0 - 7u, (uint8_t)t6);
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    wr8(sp0 - 6u, (uint8_t)t10);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0x3f800000u);
    t11 = (((uint8_t)rd32(sp0 - 8u) | 0xffffff00u) << 8u | (uint8_t)rd32(sp0 - 7u)) << 8u | (uint8_t)rd32(sp0 - 6u);
    wr32(sp0 - 0x18u, t11);
    if (arg2 == 0u)
    {
        eax = rd32(COW_IMG(0x1066941cu));
        ecx = rd32(rd32(COW_IMG(0x1066941cu)));
        edx = t11;
        loc_18 = t11;
        goto L_102820e4;
    }
    eax = rd32(COW_IMG(0x1066941cu));
    ecx = rd32(rd32(COW_IMG(0x1066941cu)));
    edx = t11;
    loc_18 = t11;
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(ecx + 0x90u), ecx, 7, eax, 0u, 0u, 7u, loc_18, 0x3f800000u, 0u);
    return;
L_102820e4: ;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(ecx + 0x90u), ecx, 7, eax, 0u, 0u, 1u, loc_18, 0x3f800000u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10282050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10282050(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
