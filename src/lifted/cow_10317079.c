/* f_0x10317079 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10317079(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x103171adu), g->eax, g->ecx, in_edx, 1, 1, arg2);
    t2 = g->edx;
    wr32(arg2 + 4u, rd32(arg2 + 4u) - 1u);
    if ((int32_t)(rd32(arg2 + 4u) - 1u) < 0)
    {
        edx = t2;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_cdecl(g, COW_IMG(0x10318b86u), 4, arg1, arg2, in_edi, in_esi);
        t5 = g->edx;
        eax = t4;
        ecx = arg2;
        edx = t5;
        edi = t4;
    }
    else
    {
        eax = t1;
        edx = t2;
        t3 = rd32(arg2);
        wr8(t3, (uint8_t)arg1);
        wr32(arg2, rd32(arg2) + 1u);
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        ecx = t3;
        edi = (uint8_t)arg1;
    }
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x103171ffu), g->eax, g->ecx, edx, 1, 1, arg2);
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317079(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10317079(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
