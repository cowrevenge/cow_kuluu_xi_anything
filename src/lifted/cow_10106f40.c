/* f_0x10106f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=9 */
uint32_t cow_fn_10106f40(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg3;
    g->edx = arg4;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10104f00u), arg2, 7, arg1, arg2, arg3, arg4, arg5, arg6, in_edi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((rd8(arg1 + 0x4eu) & 4u) == 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(arg1 + 0x4eu);
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = (t1 & 0xffffff00u) | rd8(arg1 + 0x4eu);
        ecx = t2;
        g->eax = eax;
        g->edx = arg1 + 0x6cu;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall_cdecl(g, arg8, ecx, 3, arg7, arg1 + 0x6cu, 0xc8u);
        t5 = g->ecx;
        t6 = g->edx;
        wr16(arg1 + 0x68u, (uint16_t)t4);
        if ((uint16_t)t4 <= 0xc8u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            wr16(arg1 + 0x68u, 0xc8u);
        }
    }
    if ((rd8(arg1 + 0x4eu) & 8u) != 0u)
    {
        g->eax = arg1 + 0x390u;
        g->esp = sp0 - 8u;
        t7 = cow_thiscall_cdecl(g, arg9, ecx, 3, arg7, arg1 + 0x390u, 0x40u);
        wr16(arg1 + 0x38cu, (uint16_t)t7);
        if ((uint16_t)t7 <= 0x40u)
        {
            eax = t7;
        }
        else
        {
            eax = t7;
            wr16(arg1 + 0x38cu, 0x40u);
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10106f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10106f40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
