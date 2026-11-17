/* f_0x10320d4f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10320d4f(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 8u) != 0u)
    {
        ecx = (uint32_t)((int32_t)arg1 >> 5u);
        edx = in_edx;
    }
    else
    {
        esi = (arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
        g->ebx = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        g->eax = arg1 & 0x1fu;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, (uint32_t)((int32_t)arg1 >> 5u), in_edx, 1, 3, 0x11u, in_edi, in_esi);
        t2 = g->edx;
        if (rd32(esi + 8u) != 0u)
        {
            eax = t1;
            ecx = 0x11u;
            edx = t2;
        }
        else
        {
            edx = t2;
            g->eax = esi + 0xcu;
            g->ecx = 0x11u;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t3 = cow_stdcall(g, rd32(COW_IMG(0x10329184u)), 1, esi + 0xcu);   /* kernel32.dll!InitializeCriticalSection */
            t4 = g->ecx;
            t5 = g->edx;
            wr32(esi + 8u, rd32(esi + 8u) + 1u);
            eax = t3;
            ecx = t4;
            edx = t5;
        }
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x11u, in_edi, in_esi);
        t6 = g->edx;
        ecx = 0x11u;
        edx = t6;
    }
    t7 = (arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t7);   /* kernel32.dll!EnterCriticalSection */
    t8 = g->edx;
    g->ebx = in_ebx;
    g->edx = t8;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320d4f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10320d4f(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
