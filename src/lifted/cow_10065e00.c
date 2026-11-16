/* f_0x10065e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10065e00(Guest* g)
{
    uint32_t ebp;
    uint32_t ebx;
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

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg1, COW_IMG(0x1034f7fcu), in_edi, in_esi, in_ebp);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        ebp = t1;
        goto L_10065e33;
    }
    ecx = t2;
    edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353bfcu), arg1);
    t5 = g->edx;
    g->edx = t5;
    return t4 & 0xffffff00u;
L_10065e33: ;
    ebx = rd32(self + 4u);
    edi = self + 8u;
L_10065e3a: ;
    if ((int32_t)ebx < 32768)
    {
        esi = ebx;
    }
    else
    {
        esi = 0x8000u;
    }
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, edi + 0xcu, esi, 1u, ebp, in_ebx, in_edi);
    t6 = g->ecx;
    t7 = g->edx;
    if (ebx != esi)
    {
        ecx = t6;
        edx = t7;
        ebx = ebx - esi;
        edi = rd32(edi + 8u);
        goto L_10065e3a;
    }
    ecx = t6;
    edx = t7;
    edi = rd32(edi + 8u);
    g->edi = edi;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebp, in_ebx, in_edi);
    t9 = g->edx;
    g->edi = in_edi;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10065e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10065e00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
