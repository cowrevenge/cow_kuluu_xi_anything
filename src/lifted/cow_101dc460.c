/* f_0x101dc460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101dc460(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101f67c0u), self, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x10338d88u));
    wr16(self + 0x50u, 0u);
    wr16(self + 0x52u, 0u);
    wr32(self + 0x54u, 0u);
    wr32(self + 0x58u, 0u);
    wr32(self + 0x5cu, 0u);
    wr8(self + 0x70u, 0u);
    wr8(self + 0x71u, 0u);
    wr8(self + 0x72u, 0u);
    if (rd32(COW_IMG(0x1066346cu)) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->esp = sp0;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xcu, in_esi, in_ebx);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x1066346cu), 0u);
        }
        else
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            wr32(eax, COW_IMG(0x10338d20u));
            wr32(COW_IMG(0x1066346cu), eax);
        }
    }
    if (rd32(COW_IMG(0x10663470u)) == 0u)
    {
        g->esp = sp0;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xcu, in_esi, in_ebx);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 == 0u)
        {
            ecx = t7;
            edx = t8;
            wr32(COW_IMG(0x10663470u), 0u);
        }
        else
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            wr32(eax, COW_IMG(0x10338cb8u));
            wr32(COW_IMG(0x10663470u), eax);
        }
    }
    if (rd32(COW_IMG(0x10663474u)) != 0u) goto L_101dc50b;
    g->esp = sp0;
    t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_esi, in_ebx);
    if (t9 == 0u) goto L_101dc505;
    eax = t9;
    wr32(eax, COW_IMG(0x10338c50u));
    wr32(COW_IMG(0x10663474u), eax);
    return self;
L_101dc505: ;
    wr32(COW_IMG(0x10663474u), 0u);
L_101dc50b: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dc460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dc460(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
