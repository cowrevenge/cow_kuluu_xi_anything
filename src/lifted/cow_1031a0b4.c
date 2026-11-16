/* f_0x1031a0b4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1031a0b4(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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

    if (rd32(COW_IMG(0x103d0900u)) != 0xffffffffu)
    {
        eax = rd32(COW_IMG(0x103d0900u));
        if (arg1 != 0u)
        {
            ecx = self;
            edx = in_edx;
            esi = arg1;
            goto L_1031a0d8;
        }
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, rd32(COW_IMG(0x10329278u)), self, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            goto L_1031a144;
        }
        ecx = t2;
        edx = t3;
        esi = t1;
L_1031a0d8: ;
        if (rd32(esi + 0x24u) != 0u)
        {
            eax = rd32(esi + 0x24u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 1, eax);
            t4 = g->edx;
            ecx = eax;
            edx = t4;
        }
        if (rd32(esi + 0x28u) != 0u)
        {
            eax = rd32(esi + 0x28u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 1, eax);
            t5 = g->edx;
            ecx = eax;
            edx = t5;
        }
        if (rd32(esi + 0x30u) != 0u)
        {
            eax = rd32(esi + 0x30u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 1, eax);
            t6 = g->edx;
            ecx = eax;
            edx = t6;
        }
        if (rd32(esi + 0x38u) != 0u)
        {
            eax = rd32(esi + 0x38u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 1, eax);
            t7 = g->edx;
            ecx = eax;
            edx = t7;
        }
        if (rd32(esi + 0x40u) != 0u)
        {
            eax = rd32(esi + 0x40u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 1, eax);
            t8 = g->edx;
            ecx = eax;
            edx = t8;
        }
        if (rd32(esi + 0x44u) != 0u)
        {
            eax = rd32(esi + 0x44u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 1, eax);
            t9 = g->edx;
            ecx = eax;
            edx = t9;
        }
        if (rd32(esi + 0x50u) == COW_IMG(0x103d2e08u))
        {
            eax = rd32(esi + 0x50u);
        }
        else
        {
            eax = rd32(esi + 0x50u);
            g->eax = eax;
            g->esp = sp0 - 4u;
            t10 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 1, eax);
            t11 = g->edx;
            ecx = eax;
            eax = t10;
            edx = t11;
        }
        g->eax = eax;
        g->esp = sp0 - 4u;
        t12 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 1, esi);
        t13 = g->edx;
        eax = t12;
        ecx = esi;
        edx = t13;
L_1031a144: ;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(COW_IMG(0x1032927cu)), ecx, 2, rd32(COW_IMG(0x103d0900u)), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031a0b4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031a0b4(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
