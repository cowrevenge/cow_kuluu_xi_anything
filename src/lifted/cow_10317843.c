/* f_0x10317843 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10317843(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_20;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1034a268u));
    wr32(sp0 - 0x10u, COW_IMG(0x1031d0acu));
    wr32(sp0 - 0x14u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x14u);
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x20u, 0u);
    ecx = self;
    edx = in_edx;
    loc_14 = t1;
    loc_20 = 0u;
L_10317871: ;
    if ((int32_t)loc_20 >= (int32_t)arg3)
    {
        eax = loc_20;
        goto L_1031788c;
    }
    eax = loc_20;
    t2 = rd32(sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, arg4, t2, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 + 4u, arg2 + t2);
    t5 = rd32(sp0 - 0x20u) + 1u;
    wr32(sp0 - 0x20u, t5);
    ecx = t3;
    edx = t4;
    loc_20 = t5;
    goto L_10317871;
L_1031788c: ;
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 8u, 0xffffffffu);
    g->ebp = sp0 - 4u;
    g->esp = sp0 - 0x30u;
    cow_fastcall(g, COW_IMG(0x103178adu), ecx, edx, 0);
    t6 = g->edx;
    t7 = rd32(sp0 - 0x14u);
    wr32(g->fs_base, t7);
    g->ebp = in_ebp;
    g->edx = t6;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317843(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10317843(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
