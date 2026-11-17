/* f_0x10152ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10152ff0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ebx = in_ebx & 0xffffff00u;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x101c4af0u), t1, 1, arg2);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        goto L_10153041;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    esi = t2;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, ecx, edx, 1, 3, esi, in_edi, in_esi);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        goto L_10153041;
    }
    eax = t5;
    edx = t6;
    edi = t5;
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x101c4740u), rd32(COW_IMG(0x10662dccu)), 4, arg2, edi, esi, 0u);
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        goto L_10153041;
    }
    wr32(COW_IMG(0x10578548u) + arg1 * 4u, edi);
    g->ebx = in_ebx;
    return (arg1 & 0xffffff00u) | 1u;
L_10153041: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10152ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
