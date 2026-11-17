/* f_0x10084cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10084cc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, COW_IMG(0x10330ebcu));
    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x1002c8f0u), self, in_edx, 1, COW_IMG(0x10330ebcu));
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        loc_4 = in_esi;
        loc_8 = in_edi;
        goto L_10084cf7;
    }
    edx = t2;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0xffffffffu);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100ce480u), self, 6, sp0 + 4u, 7u, arg1, 0xffffffffu, 0u, 0u);
    t4 = g->edx;
    if (rd32(t3) == 0u)
    {
        edx = t4;
        loc_4 = in_esi;
        loc_8 = in_edi;
        goto L_10084cf7;
    }
    eax = rd32(t3);
    edx = t4;
    if (rd32(eax) != 0u)
    {
        eax = rd32(eax);
        goto L_10084d29;
    }
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
L_10084cf7: ;
    if (rd32(self + 0xb4u) == 0u)
    {
        eax = rd32(self + 0xb4u);
        goto L_10084d36;
    }
    eax = rd32(self + 0xb4u);
    wr32(sp0 - 0xcu, eax);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t5 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, eax);
    wr32(sp0 - 0xcu, arg1);
    wr32(sp0 - 0x10u, 7u);
    wr32(sp0 - 0x14u, t5);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->edx = sp0 + 4u;
    t6 = cow_call_regs(g, COW_IMG(0x10072430u), t5, g->ecx, g->edx, 0, 4, sp0 + 4u, t5, 7u, arg1);
    t7 = g->edx;
    if (rd32(t6) == 0u)
    {
        eax = rd32(t6);
        edx = t7;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_10084d36;
    }
    eax = rd32(t6);
    edx = t7;
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_10084d36;
    }
    eax = rd32(eax);
L_10084d29: ;
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10056ef0u), eax, 2, self, arg2);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
L_10084d36: ;
    g->esi = loc_4;
    g->edi = loc_8;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10084cc0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
