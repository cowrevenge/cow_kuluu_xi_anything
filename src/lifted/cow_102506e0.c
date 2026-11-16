/* f_0x102506e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102506e0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(arg1 + 4u) <= 1) goto L_10250776;
    if (arg2 != 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        if ((eax & 2u) == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0x81a9u, 0x746f6666u, 0u, 0u, 0u);
            t9 = g->ecx;
            t10 = g->edx;
            ecx = t9;
            edx = t10;
        }
        eax = (rd32(arg1) & 0xffffff00u) | (rd32(arg1) & 0xfdu);
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        if ((eax & 2u) != 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            g->eax = eax;
            g->ecx = self;
            g->esp = sp0 - 8u;
            t1 = cow_call_regs(g, COW_IMG(0x10035f00u), g->eax, g->ecx, in_edx, 1, 1, 0x3f800000u);
            t2 = g->ecx;
            t3 = g->edx;
            g->ecx = t2;
            g->edx = t3;
            g->esp = sp0 - 0xcu;
            t4 = cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0x81a9u, 0x6e696666u, 0u, 0u, 0u);
            t5 = g->ecx;
            t6 = g->edx;
            g->edx = t6;
            g->esp = sp0 - 0x14u;
            cow_thiscall_cdecl(g, COW_IMG(0x1024fc30u), t5, 5, arg1, 0x411au, 0x81a9u, 0x6e696666u, 0u);
            t7 = g->ecx;
            t8 = g->edx;
            ecx = t7;
            edx = t8;
        }
        eax = (rd32(arg1) & 0xffffff00u) | (uint8_t)(rd32(arg1) | 2u);
    }
    wr32(arg1, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x10252c50u), arg1 + 0xa8u, g->ecx, g->edx, 1, 3, arg1 + 0xa8u, arg2, in_edi);
    t12 = g->ecx;
    t13 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10252c50u), t11, g->ecx, g->edx, 1, 3, arg1 + 0xccu, arg2, arg1 + 0xa8u);
    return 0u;
L_10250776: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102506e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102506e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
