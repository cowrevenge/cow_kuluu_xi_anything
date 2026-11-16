/* f_0x10298ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10298ab0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(COW_IMG(0x109a282du)) != 0u) goto L_10298ac2;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x109a282du));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x103122d6u), eax, self, in_edx);
L_10298ac2: ;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg2 * arg3, COW_IMG(0x103bbc70u), 0x182u);
    if (t1 != 0u)
    {
        eax = t1;
        ebp = t1;
        goto L_10298ae9;
    }
    eax = t1;
    return eax;
L_10298ae9: ;
    esi = arg1;
    edi = ebp;
    ecx = arg2 * arg3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 * arg3 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t2 = rd8(COW_IMG(0x109a282cu));
    wr8(COW_IMG(0x109a2828u), 0xffu);
    t3 = (eax & 0xffffff00u) | t2;
    g->ecx = ecx;
    g->edx = arg2 * arg3;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x102924a0u), t3, g->ecx, g->edx, 1, 1, t3);
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102924e0u), t4, g->ecx, t6, 1, 4, ebp, arg2 * arg3, t3, in_edi);
    g->ecx = arg4;
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, arg3, 1, 6, ebp, arg2, arg3, arg4, ebp, arg2 * arg3);
    t8 = g->ecx;
    t9 = g->edx;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bbc70u), 0x18cu);
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10298ab0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
