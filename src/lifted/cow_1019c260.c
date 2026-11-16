/* f_0x1019c260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019c260(Guest* g)
{
    uint32_t eax;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        goto L_1019c291;
    }
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    eax = sp0 - 8u;
    loc_14 = 1u;
    loc_18 = 1u;
    loc_1c = 1u;
L_1019c29f: ;
    g->edi = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, loc_1c, loc_18, loc_14);
L_1019c2a7: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 0x25u);
    g->eax = 0x25u;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x14u), 5, 0x25u, 4u, 0x80808080u, 0u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    t2 = (uint32_t)(int16_t)rd16(self + 0x22u);
    wr32(sp0 - 0x1cu, t2);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edi = 0u;
    g->edx = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t2, 1u, 1u);
    t3 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x18u), 5, 0u, 0u, 0x80808080u, 0u, 0u);
    t5 = g->edx;
    g->edi = in_edi;
    g->edx = t5;
    return t4;
L_1019c291: ;
    if (eax != 1u) goto L_1019c2a7;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    loc_14 = eax;
    loc_18 = eax;
    loc_1c = 2u;
    goto L_1019c29f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019c260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019c260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
