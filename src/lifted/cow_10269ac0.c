/* f_0x10269ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10269ac0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103280dbu));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 4u, 0u);
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x10269b20u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, 0xffffffffu);
    if (rd32(self + 0x14u) == 0u) goto L_10269b0b;
    ecx = t2;
    edx = t3;
    esi = rd32(self + 0x14u);
L_10269af9: ;
    wr32(sp0 - 0x18u, esi);
    t4 = rd32(esi + 4u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        esi = t4;
        goto L_10269af9;
    }
L_10269b0b: ;
    t7 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10269ac0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
