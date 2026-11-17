/* f_0x101c80c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c80c0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x101c80a0u), self, in_edx, 0);
    t2 = g->edx;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0x40u);
    wr32(sp0 - 0x18u, self + 0x10u);
    wr32(sp0 - 0x1cu, arg1);
    g->ebx = self + 0x10u;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101c4740u), rd32(COW_IMG(0x10662dccu)), 4, arg1, self + 0x10u, 0x40u, 0u);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_101c80ec;
    }
    eax = t3;
    g->ebx = in_ebx;
    return eax;
L_101c80ec: ;
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x101c59b0u), self + 0x5cu, 1, 1u);
    t6 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x101c5a30u), self + 0x5cu, 1, arg1);
    t8 = g->edx;
    wr32(sp0 - 0x14u, 0x40u);
    wr32(sp0 - 0x18u, self + 0x10u);
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x10257bc0u), self, 2, self + 0x10u, 0x40u);
    t9 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10257ca0u), self, 2, sp0 + 4u, 0u);
    t11 = g->edx;
    t12 = rd32(self + 0x54u);
    wr32(self + 0x58u, t10);
    if (t12 == 0u)
    {
        eax = t10;
        ecx = t12;
        edx = t11;
        wr32(sp0 - 0x10u, eax);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        wr32(self + 0x54u, t13);
    }
    wr32(self + 0x50u, 0xffffffffu);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 8u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c80c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c80c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
