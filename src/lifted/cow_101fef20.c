/* f_0x101fef20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101fef20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x208u) == arg1 * 8u + arg2 + 0x159eu)
    {
        eax = rd32(self + 0x208u);
        goto L_101feff5;
    }
    eax = rd32(self + 0x208u);
    t1 = arg1 * 8u + arg2 + 0x159eu;
    g->eax = eax;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x101c4af0u), t2, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd32(self + 0x204u) == t3)
    {
        ecx = t4;
        edx = t5;
        ebx = t3;
        edi = t1;
    }
    else
    {
        ecx = t4;
        edx = t5;
        ebx = t3;
        edi = t1;
        if (rd32(self + 0x200u) != 0u)
        {
            eax = rd32(self + 0x200u);
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(self + 0x200u, 0u);
            ecx = t6;
            edx = t7;
        }
    }
    t8 = rd32(self + 0x200u);
    wr32(self + 0x204u, ebx);
    if (t8 == 0u)
    {
        eax = t8;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, ebx, in_ebx, in_edi);
        wr32(self + 0x200u, t9);
    }
    t10 = rd32(self + 0x204u);
    t11 = rd32(self + 0x200u);
    g->ebx = ebx;
    g->eax = t11;
    g->edx = t10;
    t12 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, COW_IMG(0x101c4740u), t12, 4, edi, t11, t10, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 >= 0)
    {
        eax = t13;
        goto L_101fefef;
    }
    ecx = t14;
    edx = t15;
    if (rd32(self + 0x200u) == 0u)
    {
        eax = rd32(self + 0x200u);
    }
    else
    {
        eax = rd32(self + 0x200u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t16 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        wr32(self + 0x200u, 0u);
        eax = t16;
    }
    wr32(self + 0x204u, 0u);
    wr32(self + 0x208u, 0xffffffffu);
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_101fefef: ;
    wr32(self + 0x208u, edi);
L_101feff5: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fef20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fef20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
