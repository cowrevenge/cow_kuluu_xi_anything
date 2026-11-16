/* f_0x101c6ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c6ce0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101c6cc0u), self, 0);
    t1 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0xcu);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    wr32(sp0 - 0x28u, arg1);
    g->eax = sp0 - 0xcu;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, arg1, sp0 - 0xcu, 0xcu, 0u, 0u);
    t3 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        edx = t3;
        goto L_101c6d18;
    }
    return 4u;
L_101c6d18: ;
    if (rd32(sp0 - 0xcu) == 0x5849414du) goto L_101c6d2f;
    return 5u;
L_101c6d2f: ;
    if (rd32(sp0 - 8u) < 0x64u)
    {
        eax = rd32(sp0 - 8u);
        goto L_101c6d45;
    }
    return 5u;
L_101c6d45: ;
    wr32(self + 4u, eax);
    if (eax == 0u) goto L_101c6d80;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0xcu);
    wr32(sp0 - 0x20u, eax * 8u);
    wr32(sp0 - 0x24u, self + 8u);
    wr32(sp0 - 0x28u, arg1);
    g->eax = eax;
    g->edx = self + 8u;
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, arg1, self + 8u, eax * 8u, 0xcu, 0u);
    t5 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        edx = t5;
        goto L_101c6d80;
    }
    eax = t4;
    edx = t5;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101c6cc0u), self, 0);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 4u;
L_101c6d80: ;
    t6 = rd32(self + 4u) << 3u;
    wr32(sp0 - 0x18u, t6);
    wr32(sp0 - 0x1cu, self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x101c8c50u), t6, g->ecx, g->edx, 1, 4, self + 8u, t6, in_edi, in_esi);
    t8 = g->edx;
    if (rd32(sp0 - 4u) == t7) goto L_101c6daf;
    eax = t7;
    edx = t8;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101c6cc0u), self, 0);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 6u;
L_101c6daf: ;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c6ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c6ce0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
