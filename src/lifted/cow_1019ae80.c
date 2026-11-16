/* f_0x1019ae80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1019ae80(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (arg1 == 0u) goto L_1019aeb8;
    if (arg1 != 1u)
    {
        eax = arg1 - 1u;
        goto L_1019aece;
    }
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, sp0 - 8u);
    eax = arg3;
    edx = in_edx;
    loc_1c = arg3;
L_1019aec6: ;
    g->edi = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, loc_1c, 1u, 1u);
    eax = t1;
L_1019aece: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 0u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x30u), 5, 0u, 4u, 0x80808080u, 0u, 0u);
    g->edi = in_edi;
    return;
L_1019aeb8: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, sp0 - 8u);
    eax = sp0 - 8u;
    edx = arg2;
    loc_1c = arg2;
    goto L_1019aec6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019ae80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019ae80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
