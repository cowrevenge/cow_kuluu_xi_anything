/* f_0x101c7ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c7ed0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10662dccu)) == 0u) goto L_101c7f68;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101c7e20u), self, 0);
    t2 = g->edx;
    g->eax = rd32(self);
    t3 = rd32(self);
    t4 = cow_thiscall(g, rd32(t3), self, 1, arg1);
    t5 = cow_thiscall(g, rd32(rd32(self) + 4u), self, 1, arg1);
    t6 = rd32(self + 4u);
    if ((int32_t)t4 < 0) goto L_101c7f68;
    eax = t5;
    ecx = t6;
    edx = rd32(self + 0xcu);
    ebx = t4;
    ebp = t1;
    edi = t6 * t1 + rd32(self + 0xcu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x101c4740u), rd32(COW_IMG(0x10662dccu)), 4, ebx, edi, ecx, eax);
    t8 = g->edx;
    if (rd32(self + 4u) != t7) goto L_101c7f5e;
    edx = t8;
    g->eax = rd32(self);
    t9 = rd32(self);
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, rd32(t9 + 0x14u), self, 2, arg1, edi);
    if ((uint8_t)t10 == 0u) goto L_101c7f5e;
    t11 = rd32(self + 0x14u);
    t12 = rd32(self + 0x10u);
    wr32(ebp * 4u + t12, t11);
    t13 = rd32(self + 0x14u) + 1u;
    wr32(self + 0x14u, t13);
    if ((int32_t)t13 > 1073741823)
    {
        eax = t13;
        edx = t12;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x101c7dd0u), self, 0);
    }
    return edi;
L_101c7f5e: ;
    wr32(ebp * 4u + rd32(self + 0x10u), 0xfffffffeu);
L_101c7f68: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c7ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c7ed0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
