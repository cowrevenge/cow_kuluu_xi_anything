/* f_0x100ef680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ef680(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0x10u, COW_IMG(0x100ef6f0u));
    wr32(sp0 - 0xcu, COW_IMG(0x100ef730u));
    wr32(sp0 - 8u, COW_IMG(0x100ef750u));
    wr32(sp0 - 4u, COW_IMG(0x100ef770u));
    if (rd32(COW_IMG(0x104df770u)) != 0u) goto L_100ef6b3;
    eax = rd32(COW_IMG(0x104df770u));
    return 0xffffffffu;
L_100ef6b3: ;
    wr32(sp0 - 0x14u, in_esi);
    if (rd32(sp0 + rd32(arg1) * 4u - 0x10u) == 0u)
    {
        eax = rd32(sp0 + rd32(arg1) * 4u - 0x10u);
        goto L_100ef6d6;
    }
    eax = rd32(sp0 + rd32(arg1) * 4u - 0x10u);
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall_cdecl(g, eax, arg1, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    cow_call_regs(g, COW_IMG(0x100f9d50u), g->eax, g->ecx, t3, 1, 0);
    return t1;
L_100ef6d6: ;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x100f9d50u), g->eax, g->ecx, in_edx, 1, 0);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ef680(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
