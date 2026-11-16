/* f_0x10323274 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10323274(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_esi);
    if (arg1 == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_103232b2;
    }
    if (rd8(arg1) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_103232b2;
    }
    wr32(sp0 - 0x14u, COW_IMG(0x1034b288u));
    wr32(sp0 - 0x18u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10320960u), in_eax, g->ecx, g->edx, 1, 2, arg1, COW_IMG(0x1034b288u));
    t2 = g->edx;
    if (t1 == 0u)
    {
        ecx = COW_IMG(0x1034b288u);
        edx = t2;
        goto L_103232b2;
    }
    eax = t1;
    edx = t2;
    wr32(sp0 - 0x14u, COW_IMG(0x1034b284u));
    wr32(sp0 - 0x18u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10320960u), eax, g->ecx, g->edx, 1, 2, arg1, COW_IMG(0x1034b284u));
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = COW_IMG(0x1034b284u);
        edx = t4;
        esi = arg1;
        goto L_103232d0;
    }
    edx = t4;
    wr32(sp0 - 0x14u, 8u);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, 0xbu);
    ecx = COW_IMG(0x1034b284u);
    loc_1c = 0xbu;
L_103232bd: ;
    wr32(sp0 - 0x20u, rd32(COW_IMG(0x109b2a38u)));
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, rd32(COW_IMG(0x109b2a3cu)), ecx, 4, rd32(COW_IMG(0x109b2a38u)), loc_1c, sp0 - 0xcu, 8u);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u) goto L_103232d7;
    eax = t5;
    ecx = t6;
    edx = t7;
    esi = sp0 - 0xcu;
L_103232d0: ;
    wr32(sp0 - 0x14u, esi);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10312827u), 1, esi);
L_103232d7: ;
    g->esi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_103232b2: ;
    wr32(sp0 - 0x14u, 8u);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, 0x1004u);
    loc_1c = 0x1004u;
    loc_4 = in_ebp;
    loc_10 = in_esi;
    goto L_103232bd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323274(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10323274(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
