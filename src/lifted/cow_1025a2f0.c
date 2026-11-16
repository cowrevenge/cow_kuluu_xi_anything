/* f_0x1025a2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1025a2f0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 >= 0)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        edi = arg3;
    }
    else
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_call_regs(g, COW_IMG(0x102589b0u), in_eax, g->ecx, g->edx, 1, 1, arg2);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = t1;
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_esi);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_1025a364;
    }
    edx = t5;
    esi = t4;
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 3u);
    wr32(esi, COW_IMG(0x1033ceccu));
    wr32(esi + 0xcu, arg1);
    wr32(esi + 0x10u, edi);
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x1018d2d0u), esi + 0x14u, 1, arg2);
    t7 = g->edx;
    wr32(esi + 0x20u, 0u);
    wr32(esi, COW_IMG(0x1033ced0u));
    cow_thiscall(g, COW_IMG(0x1025a200u), self, 1, esi);
    return;
L_1025a364: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1025a200u), self, 1, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025a2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025a2f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
