/* f_0x101d8140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101d8140(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr8(self + 0x898u, (uint8_t)arg1);
    if ((uint32_t)(int8_t)arg1 == 0u) goto L_101d81fb;
    if ((uint32_t)(int8_t)arg1 != 1u) goto L_101d822f;
    if (rd32(rd32(COW_IMG(0x10663400u)) + 8u) == 0u) goto L_101d822f;
    eax = rd32(rd32(COW_IMG(0x10663400u)) + 8u);
    if (rd8(eax + 0x6eu) != 0u) goto L_101d822f;
    wr32(self + 0x8c0u, 0u);
    wr32(self + 0x8c4u, 0u);
    g->ecx = 0u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        t4 = rd32(rd32(eax) + 0x124u);
        wr32(self + 0x8a8u, t4);
        t5 = rd32(rd32(eax) + 0x12cu);
        wr32(self + 0x8acu, t5);
        t6 = rd32(rd32(eax) + 0x128u);
        wr32(self + 0x8b0u, t6);
        t7 = rd32(rd32(eax) + 0x1a0u);
        t8 = rd32(eax);
        wr32(self + 0x8b4u, t7);
        eax = t7;
        ecx = t6;
        edx = t8;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x12u);
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t9, 2u);
    t12 = g->edx;
    t13 = cow_fastcall(g, COW_IMG(0x101d7e50u), self, t12, 0);
    cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    return;
L_101d81fb: ;
    if ((uint8_t)arg2 == 0u) goto L_101d821f;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1020a9d0u), self + 0x7ecu, self, g->edx, 0, 6, 8u, self + 0x7ecu, 0u, 1u, 0u, 0u);
    return;
L_101d821f: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1020a9d0u), ((uint32_t)(int8_t)arg1 & 0xffffff00u) | (uint8_t)arg2, self, g->edx, 0, 6, 5u, self + 0x7ecu, 0u, 1u, 0u, 0u);
L_101d822f: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d8140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d8140(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
