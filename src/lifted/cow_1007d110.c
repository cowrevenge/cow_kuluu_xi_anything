/* f_0x1007d110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007d110(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(rd32(COW_IMG(0x10578484u)) + 0xc0u) == 0u)
    {
        eax = rd32(COW_IMG(0x10578484u));
        goto L_1007d131;
    }
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0x11u);
    t1 = g->edx;
    edx = t1;
L_1007d12c: ;
    g->edx = edx;
    return arg3;
L_1007d131: ;
    t2 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->edx = t2;
    t3 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10079a00u), eax, t3, g->edx, 1, 1, t2);
    t5 = g->ecx;
    t6 = g->edx;
    t7 = ((t5 & 0xffffff00u) | (uint8_t)((t4 == 0xffffffffu) - 1u)) & t4;
    g->edx = t6;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x100e96f0u), 2, 1u, t7);
    t9 = g->edx;
    if ((uint8_t)t8 == 1u)
    {
        edx = t9;
        goto L_1007d12c;
    }
    edx = t9;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007d110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007d110(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
