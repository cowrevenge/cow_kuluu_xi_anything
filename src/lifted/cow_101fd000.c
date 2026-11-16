/* f_0x101fd000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101fd000(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr16(self + 0x24u, 0u);
    wr16(self + 0x26u, 0u);
    wr16(self + 0x28u, 0u);
    wr16(self + 0x2au, 0u);
    wr32(self, COW_IMG(0x1033aab0u));
    if (rd32(COW_IMG(0x10663ab0u)) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x10663ab0u), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            edi = t3;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10126320u), edi + 4u, 0);
            t6 = g->ecx;
            t7 = g->edx;
            wr16(edi + 0xeu, 0xffffu);
            wr32(edi + 8u, 0u);
            wr8(edi + 0xcu, 1u);
            wr32(edi, COW_IMG(0x1033aa68u));
            wr32(COW_IMG(0x10663ab0u), edi);
            ecx = t6;
            edx = t7;
        }
    }
    if (rd32(COW_IMG(0x10663ab4u)) != 0u) goto L_101fd0a2;
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
    t9 = g->edx;
    if (t8 == 0u) goto L_101fd09c;
    eax = t8;
    edx = t9;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x101fe430u), eax, 0);
    wr32(COW_IMG(0x10663ab4u), t10);
    return self;
L_101fd09c: ;
    wr32(COW_IMG(0x10663ab4u), 0u);
L_101fd0a2: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fd000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fd000(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
