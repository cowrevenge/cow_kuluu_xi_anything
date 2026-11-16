/* f_0x1025a380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1025a380(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x24u, in_esi, in_ebp);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1025a3e4;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x102589b0u), eax, g->ecx, g->edx, 1, 1, arg1);
    t5 = g->edx;
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 3u);
    wr32(esi, COW_IMG(0x1033ceccu));
    wr32(esi + 0xcu, 0u);
    wr32(esi + 0x10u, t4);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1018d2d0u), esi + 0x14u, 1, arg1);
    t7 = g->edx;
    wr32(esi + 0x20u, 0u);
    wr32(esi, COW_IMG(0x1033ced0u));
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1025a200u), self, 1, esi);
    return;
L_1025a3e4: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1025a200u), self, 1, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025a380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025a380(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
